struct UWorld;
struct ULevel;

struct AActorArray;

#[unsafe(no_mangle)]
unsafe extern "system" fn DllMain(
    h_module: isize,
    ul_reason_for_call: u32,
    _lp_reserved: *mut ::core::ffi::c_void,
) -> i32 {
    if ul_reason_for_call == 1 {
        ::std::thread::spawn(move || init(h_module));
    }

    1
}

unsafe fn init(h_module: isize) {
    unsafe {
        let process = libmem::get_process().unwrap();

        let module = libmem::find_module_ex(&process, "AloneInTheDark-Win64-Shipping.exe").unwrap();

        let gworld_pp = module.base + 0x609AF80;
        let gworld_p = libmem::read_memory_ex::<*mut UWorld>(&process, gworld_pp).unwrap();

        let level_pp = gworld_p.byte_add(0x30).cast::<*mut ULevel>();
        let level_p = libmem::read_memory_ex::<*mut ULevel>(&process, level_pp as usize).unwrap();

        let actor_array_pp = level_p.byte_add(0x98).cast::<*mut AActorArray>();

        let actor_array_p =
            libmem::read_memory_ex::<*mut AActorArray>(&process, actor_array_pp as usize).unwrap();

        println!("{:p}", actor_array_p);
    }
}

#[test]
fn a() {
    use std::{fs, io::Write, path::Path};

    let include_dir = "include"; // 指定包含 .h 文件的文件夹
    let output_file = "cbindgen.toml";

    // 读取 include 文件夹中的所有 .h 文件
    let mut files: Vec<String> = Vec::new();
    if let Ok(entries) = fs::read_dir(include_dir) {
        for entry in entries {
            if let Ok(entry) = entry {
                let path = entry.path();
                if path.extension().and_then(|e| e.to_str()) == Some("h") {
                    files.push(format!(
                        "{}/{}",
                        include_dir,
                        path.file_name().unwrap().to_str().unwrap()
                    ));
                }
            }
        }
    }

    // 生成 cbindgen.toml 文件
    let mut toml_content = String::new();
    toml_content.push_str(
        "[language]\nheader = true\n\n[output]\nfile = \"SDK.h\"\n\n[includes]\nfiles = [\n",
    );
    for file in &files {
        toml_content.push_str(&format!("    \"{}\",\n", file));
    }
    toml_content.push_str("]\n");

    // 写入 cbindgen.toml 文件
    fs::write(output_file, toml_content).expect("Failed to write cbindgen.toml");
    println!("Generated cbindgen.toml with includes: {:?}", files);
}
