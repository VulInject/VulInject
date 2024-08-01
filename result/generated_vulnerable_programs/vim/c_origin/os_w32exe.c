

#include "vim.h"


#ifdef VIMDLL
__declspec(dllimport)
#endif
int VimMain(int argc, char **argv);

#ifdef VIMDLL
# define SaveInst(hInst)    
#else
void SaveInst(HINSTANCE hInst);
#endif

#ifdef FEAT_GUI
    int WINAPI
wWinMain(
    HINSTANCE	hInstance,
    HINSTANCE	hPrevInst UNUSED,
    LPWSTR	lpszCmdLine UNUSED,
    int		nCmdShow UNUSED)
{
    SaveInst(hInstance);
    return VimMain(0, NULL);
}
#else
    int
wmain(int argc UNUSED, wchar_t **argv UNUSED)
{
    SaveInst(GetModuleHandleW(NULL));
    return VimMain(0, NULL);
}
#endif

#ifdef USE_OWNSTARTUP








# ifdef FEAT_GUI
    void WINAPI
wWinMainCRTStartup(void)
{
    VimMain(0, NULL);
}
# else
    void
wmainCRTStartup(void)
{
    VimMain(0, NULL);
}
# endif
#endif	


#if defined(VIMDLL) && defined(FEAT_MZSCHEME)

# if defined(_MSC_VER)
static __declspec(thread) void *tls_space;
extern intptr_t _tls_index;
# elif defined(__MINGW32__)
static __thread void *tls_space;
extern intptr_t _tls_index;
# endif


    __declspec(dllexport) void
get_tls_info(void ***ptls_space, intptr_t *ptls_index)
{
    *ptls_space = &tls_space;
    *ptls_index = _tls_index;
    return;
}
#endif
