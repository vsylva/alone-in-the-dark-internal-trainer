#pragma ONCE
#pragma comment(lib, "d3d11.lib")

#include <d3d11.h>

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

typedef HRESULT(WINAPI* IDXGISwapChainPresent)(IDXGISwapChain*, UINT, UINT);

typedef HRESULT(WINAPI* IDXGISwapChainResizeBuffers)(
    IDXGISwapChain*,
    UINT,
    UINT,
    UINT,
    DXGI_FORMAT,
    UINT
);

class Trainer {
    static bool is_initialized;

    static WNDPROC g_o_wnd_proc;
    static HWND g_output_wnd;

    static ID3D11Device* g_device;
    static ID3D11DeviceContext* g_context;
    static ID3D11RenderTargetView* g_render_target_view;
    static IDXGISwapChain* g_swap_chain;
    static DXGI_SWAP_CHAIN_DESC g_swap_chain_desc;
    static IDXGISwapChainPresent g_o_fn_present;
    static IDXGISwapChainResizeBuffers g_o_fn_resize_buffers;

  public:
    static inline void on_frame();

    static LRESULT WINAPI
    new_wnd_proc(const HWND _hWnd, UINT _uMsg, WPARAM _wParam, LPARAM _lParam);

    static HRESULT WINAPI
    new_resent(IDXGISwapChain* p_swap_chain, UINT sync_interval, UINT flags);

    static HRESULT WINAPI new_resize_buffers(
        IDXGISwapChain* p_swap_chain,
        UINT _BufferCount,
        UINT width,
        UINT height,
        DXGI_FORMAT new_format,
        UINT swap_chain_flags
    );

    static void enable_hook();

    static void disable_hook();
};
