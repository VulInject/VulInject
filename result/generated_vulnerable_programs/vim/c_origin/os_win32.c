


#include "vim.h"

#ifdef FEAT_MZSCHEME
# include "if_mzsch.h"
#endif

#include <sys/types.h>
#include <signal.h>
#include <limits.h>


#ifndef PROTO
# include <process.h>
# include <winternl.h>
# include <direct.h>

# if !defined(FEAT_GUI_MSWIN)
#  include <shellapi.h>
# endif

# ifdef FEAT_JOB_CHANNEL
#  include <tlhelp32.h>
# endif
#endif




#ifdef MCH_WRITE_DUMP
FILE* fdDump = NULL;
#endif


#ifdef PROTO
# define WINAPI
typedef char * LPCSTR;
typedef char * LPWSTR;
typedef int ACCESS_MASK;
typedef int BOOL;
typedef int BOOLEAN;
typedef int CALLBACK;
typedef int COLORREF;
typedef int CONSOLE_CURSOR_INFO;
typedef int COORD;
typedef int DWORD;
typedef int HANDLE;
typedef int LPHANDLE;
typedef int HDC;
typedef int HFONT;
typedef int HICON;
typedef int HINSTANCE;
typedef int HWND;
typedef int INPUT_RECORD;
typedef int INT;
typedef int KEY_EVENT_RECORD;
typedef int LOGFONT;
typedef int LPBOOL;
typedef int LPCTSTR;
typedef int LPDWORD;
typedef int LPSTR;
typedef int LPTSTR;
typedef int LPVOID;
typedef int MOUSE_EVENT_RECORD;
typedef int PACL;
typedef int PDWORD;
typedef int PHANDLE;
typedef int PRINTDLG;
typedef int PSECURITY_DESCRIPTOR;
typedef int PSID;
typedef int SECURITY_INFORMATION;
typedef int SHORT;
typedef int SMALL_RECT;
typedef int TEXTMETRIC;
typedef int TOKEN_INFORMATION_CLASS;
typedef int TRUSTEE;
typedef int WORD;
typedef int WCHAR;
typedef void VOID;
typedef int BY_HANDLE_FILE_INFORMATION;
typedef int SE_OBJECT_TYPE;
typedef int PSNSECINFO;
typedef int PSNSECINFOW;
typedef int STARTUPINFO;
typedef int PROCESS_INFORMATION;
typedef int LPSECURITY_ATTRIBUTES;
# define __stdcall 
#endif

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)

static HANDLE g_hConIn  = INVALID_HANDLE_VALUE;
static HANDLE g_hConOut = INVALID_HANDLE_VALUE;


static SMALL_RECT g_srScrollRegion;



static COORD	  g_coord = {0, 0};  


static WORD  g_attrDefault = 7;  
static WORD  g_attrCurrent;

static int g_fCBrkPressed = FALSE;  
static int g_fCtrlCPressed = FALSE; 
static int g_fForceExit = FALSE;    

static void scroll(unsigned cLines);
static void set_scroll_region(unsigned left, unsigned top,
			      unsigned right, unsigned bottom);
static void set_scroll_region_tb(unsigned top, unsigned bottom);
static void set_scroll_region_lr(unsigned left, unsigned right);
static void insert_lines(unsigned cLines);
static void delete_lines(unsigned cLines);
static void gotoxy(unsigned x, unsigned y);
static void standout(void);
static int s_cursor_visible = TRUE;
static int did_create_conin = FALSE;




typedef struct input_record_buffer_node_S
{
    INPUT_RECORD ir;
    struct input_record_buffer_node_S *next;
} input_record_buffer_node_T;
typedef struct input_record_buffer_S
{
    input_record_buffer_node_T *head;
    input_record_buffer_node_T *tail;
    int length;
} input_record_buffer_T;
static input_record_buffer_T input_record_buffer;
static int read_input_record_buffer(INPUT_RECORD* irEvents, int nMaxLength);
static int write_input_record_buffer(INPUT_RECORD* irEvents, int nLength);
#endif
#ifdef FEAT_GUI_MSWIN
static int s_dont_use_vimrun = TRUE;
static int need_vimrun_warning = FALSE;
static char *vimrun_path = "vimrun ";
#endif

static int win32_getattrs(char_u *name);
static int win32_setattrs(char_u *name, int attrs);
static int win32_set_archive(char_u *name);

static int conpty_working = 0;
static int conpty_type = 0;
static int conpty_stable = 0;
static int conpty_fix_type = 0;
static void vtp_flag_init();

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)
static int vtp_working = 0;
static void vtp_init();
static void vtp_exit();
static void vtp_sgr_bulk(int arg);
static void vtp_sgr_bulks(int argc, int *argv);

static int wt_working = 0;
static void wt_init(void);

static int g_color_index_bg = 0;
static int g_color_index_fg = 7;

# ifdef FEAT_TERMGUICOLORS
static guicolor_T save_console_bg_rgb;
static guicolor_T save_console_fg_rgb;
static guicolor_T store_console_bg_rgb;
static guicolor_T store_console_fg_rgb;
static int default_console_color_bg = 0x000000; 
static int default_console_color_fg = 0xc0c0c0; 
#  define USE_VTP		(vtp_working && is_term_win32() \
						 && (p_tgc || t_colors >= 256))
#  define USE_WT		(wt_working)
# else
#  define USE_VTP		0
#  define USE_WT		0
# endif

static void set_console_color_rgb(void);
static void reset_console_color_rgb(void);
static void restore_console_color_rgb(void);
#endif  


#ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
# define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
#endif

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)
static int suppress_winsize = 1;	
#endif

static WCHAR *exe_pathw = NULL;

static BOOL win8_or_later = FALSE;
static BOOL win10_22H2_or_later = FALSE;
#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)
static BOOL use_alternate_screen_buffer = FALSE;
#endif


typedef BOOL (WINAPI *PfnRtlGetVersion)(LPOSVERSIONINFOW);
#define MAKE_VER(major, minor, build) \
    (((major) << 24) | ((minor) << 16) | (build))

    static DWORD
get_build_number(void)
{
    OSVERSIONINFOW	osver;
    HMODULE		hNtdll;
    PfnRtlGetVersion	pRtlGetVersion;
    DWORD		ver = MAKE_VER(0, 0, 0);

    osver.dwOSVersionInfoSize = sizeof(OSVERSIONINFOW);
    hNtdll = GetModuleHandle("ntdll.dll");
    if (hNtdll == NULL)
	return ver;

    pRtlGetVersion =
	(PfnRtlGetVersion)GetProcAddress(hNtdll, "RtlGetVersion");
    pRtlGetVersion(&osver);
    ver = MAKE_VER(min(osver.dwMajorVersion, 255),
	    min(osver.dwMinorVersion, 255),
	    min(osver.dwBuildNumber, 32767));
    return ver;
}

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)
    static BOOL
is_ambiwidth_event(
    INPUT_RECORD *ir)
{
    return ir->EventType == KEY_EVENT
		&& ir->Event.KeyEvent.bKeyDown
		&& ir->Event.KeyEvent.wRepeatCount == 1
		&& ir->Event.KeyEvent.wVirtualKeyCode == 0x12
		&& ir->Event.KeyEvent.wVirtualScanCode == 0x38
		&& ir->Event.KeyEvent.uChar.UnicodeChar == 0
		&& ir->Event.KeyEvent.dwControlKeyState == 2;
}

    static void
make_ambiwidth_event(
    INPUT_RECORD *down,
    INPUT_RECORD *up)
{
    down->Event.KeyEvent.wVirtualKeyCode = 0;
    down->Event.KeyEvent.wVirtualScanCode = 0;
    down->Event.KeyEvent.uChar.UnicodeChar
				    = up->Event.KeyEvent.uChar.UnicodeChar;
    down->Event.KeyEvent.dwControlKeyState = 0;
}


    static BOOL
read_console_input(
    HANDLE	    hInput,
    INPUT_RECORD    *lpBuffer,
    int		    nLength,
    LPDWORD	    lpEvents)
{
    enum
    {
	IRSIZE = 10
    };
    static INPUT_RECORD s_irCache[IRSIZE];
    static DWORD s_dwIndex = 0;
    static DWORD s_dwMax = 0;
    DWORD dwEvents;
    int head;
    int tail;
    int i;
    static INPUT_RECORD s_irPseudo;

    if (s_dwMax == 0 && input_record_buffer.length > 0)
    {
	dwEvents = read_input_record_buffer(s_irCache, IRSIZE);
	s_dwIndex = 0;
	s_dwMax = dwEvents;
    }

    if (nLength == -2)
	return (s_dwMax > 0) ? TRUE : FALSE;

    if (!win8_or_later)
    {
	if (nLength == -1)
	    return PeekConsoleInputW(hInput, lpBuffer, 1, lpEvents);
	return ReadConsoleInputW(hInput, lpBuffer, 1, &dwEvents);
    }

    if (s_dwMax == 0)
    {
	if (!vtp_working && nLength == -1)
	    return PeekConsoleInputW(hInput, lpBuffer, 1, lpEvents);
	GetNumberOfConsoleInputEvents(hInput, &dwEvents);
	if (dwEvents == 0 && nLength == -1)
	    return PeekConsoleInputW(hInput, lpBuffer, 1, lpEvents);
	ReadConsoleInputW(hInput, s_irCache, IRSIZE, &dwEvents);
	s_dwIndex = 0;
	s_dwMax = dwEvents;
	if (dwEvents == 0)
	{
	    *lpEvents = 0;
	    return TRUE;
	}

	for (i = s_dwIndex; i < (int)s_dwMax - 1; ++i)
	    if (is_ambiwidth_event(&s_irCache[i]))
		make_ambiwidth_event(&s_irCache[i], &s_irCache[i + 1]);

	if (s_dwMax > 1)
	{
	    head = 0;
	    tail = s_dwMax - 1;
	    while (head != tail)
	    {
		if (s_irCache[head].EventType == WINDOW_BUFFER_SIZE_EVENT
			&& s_irCache[head + 1].EventType
						  == WINDOW_BUFFER_SIZE_EVENT)
		{
		    
		    for (i = head; i < tail; ++i)
			s_irCache[i] = s_irCache[i + 1];
		    --tail;
		    continue;
		}
		head++;
	    }
	    s_dwMax = tail + 1;
	}
    }

    if (s_irCache[s_dwIndex].EventType == KEY_EVENT)
    {
	if (s_irCache[s_dwIndex].Event.KeyEvent.wRepeatCount > 1)
	{
	    s_irPseudo = s_irCache[s_dwIndex];
	    s_irPseudo.Event.KeyEvent.wRepeatCount = 1;
	    s_irCache[s_dwIndex].Event.KeyEvent.wRepeatCount--;
	    *lpBuffer = s_irPseudo;
	    *lpEvents = 1;
	    return TRUE;
	}
    }

    *lpBuffer = s_irCache[s_dwIndex];
    if (!(nLength == -1 || nLength == -2) && ++s_dwIndex >= s_dwMax)
	s_dwMax = 0;
    *lpEvents = 1;
    return TRUE;
}


    static BOOL
peek_console_input(
    HANDLE	    hInput,
    INPUT_RECORD    *lpBuffer,
    DWORD	    nLength UNUSED,
    LPDWORD	    lpEvents)
{
    return read_console_input(hInput, lpBuffer, -1, lpEvents);
}

# ifdef FEAT_CLIENTSERVER
    static DWORD
msg_wait_for_multiple_objects(
    DWORD    nCount,
    LPHANDLE pHandles,
    BOOL     fWaitAll,
    DWORD    dwMilliseconds,
    DWORD    dwWakeMask)
{
    if (read_console_input(NULL, NULL, -2, NULL))
	return WAIT_OBJECT_0;
    return MsgWaitForMultipleObjects(nCount, pHandles, fWaitAll,
				     dwMilliseconds, dwWakeMask);
}
# endif

# ifndef FEAT_CLIENTSERVER
    static DWORD
wait_for_single_object(
    HANDLE hHandle,
    DWORD dwMilliseconds)
{
    if (read_console_input(NULL, NULL, -2, NULL))
	return WAIT_OBJECT_0;
    return WaitForSingleObject(hHandle, dwMilliseconds);
}
# endif
#endif   

    void
mch_get_exe_name(void)
{
    
    
    
#define MAX_ENV_PATH_LEN (8191 + 1 + 5)
    WCHAR	temp[MAX_ENV_PATH_LEN];
    WCHAR	buf[MAX_PATH];
    int		updated = FALSE;
    static int	enc_prev = -1;

    if (exe_name == NULL || exe_pathw == NULL || enc_prev != enc_codepage)
    {
	
	GetModuleFileNameW(NULL, buf, MAX_PATH);
	if (*buf != NUL)
	{
	    if (enc_codepage == -1)
		enc_codepage = GetACP();
	    vim_free(exe_name);
	    exe_name = utf16_to_enc(buf, NULL);
	    enc_prev = enc_codepage;

	    WCHAR *wp = wcsrchr(buf, '\\');
	    if (wp != NULL)
		*wp = NUL;
	    vim_free(exe_pathw);
	    exe_pathw = _wcsdup(buf);
	    updated = TRUE;
	}
    }

    if (exe_pathw == NULL || !updated)
	return;

    
    
    
    WCHAR *p = _wgetenv(L"PATH");
    if (p == NULL || wcslen(p) + wcslen(exe_pathw) + 2 + 5 < MAX_ENV_PATH_LEN)
    {
	wcscpy(temp, L"PATH=");

	if (p == NULL || *p == NUL)
	    wcscat(temp, exe_pathw);
	else
	{
	    wcscat(temp, p);

	    
	    if (wcsstr(temp, exe_pathw) == NULL)
	    {
		
		size_t len = wcslen(temp);
		if (temp[len - 1] != L';')
		    wcscat(temp, L";");

		wcscat(temp, exe_pathw);
	    }
	}
	_wputenv(temp);
#ifdef libintl_wputenv
	libintl_wputenv(temp);
#endif
    }
}


    static void
unescape_shellxquote(char_u *p, char_u *escaped)
{
    int	    l = (int)STRLEN(p);
    int	    n;

    while (*p != NUL)
    {
	if (*p == '^' && vim_strchr(escaped, p[1]) != NULL)
	    mch_memmove(p, p + 1, l--);
	n = (*mb_ptr2len)(p);
	p += n;
	l -= n;
    }
}


    HINSTANCE
vimLoadLib(const char *name)
{
    HINSTANCE	dll = NULL;

    
    if (found_register_arg)
	return NULL;

    
    
    if (exe_pathw == NULL)
    {
	mch_get_exe_name();
	if (exe_pathw == NULL)
	    return NULL;
    }

    WCHAR old_dirw[MAXPATHL];

    if (GetCurrentDirectoryW(MAXPATHL, old_dirw) == 0)
	return NULL;

    
    
    
    SetCurrentDirectoryW(exe_pathw);
    dll = LoadLibrary(name);
    SetCurrentDirectoryW(old_dirw);
    return dll;
}

#if defined(VIMDLL) || defined(PROTO)

    int
mch_is_gui_executable(void)
{
    PBYTE		pImage = (PBYTE)GetModuleHandle(NULL);
    PIMAGE_DOS_HEADER	pDOS = (PIMAGE_DOS_HEADER)pImage;
    PIMAGE_NT_HEADERS	pPE;

    if (pDOS->e_magic != IMAGE_DOS_SIGNATURE)
	return FALSE;
    pPE = (PIMAGE_NT_HEADERS)(pImage + pDOS->e_lfanew);
    if (pPE->Signature != IMAGE_NT_SIGNATURE)
	return FALSE;
    if (pPE->OptionalHeader.Subsystem == IMAGE_SUBSYSTEM_WINDOWS_GUI)
	return TRUE;
    return FALSE;
}
#endif

#if defined(DYNAMIC_ICONV) || defined(DYNAMIC_GETTEXT) \
    || defined(FEAT_PYTHON3) || defined(PROTO)

    static void *
get_imported_func_info(HINSTANCE hInst, const char *funcname, int info,
	const void *ptr)
{
    PBYTE			pImage = (PBYTE)hInst;
    PIMAGE_DOS_HEADER		pDOS = (PIMAGE_DOS_HEADER)hInst;
    PIMAGE_NT_HEADERS		pPE;
    PIMAGE_IMPORT_DESCRIPTOR	pImpDesc;
    PIMAGE_THUNK_DATA		pIAT;	    
    PIMAGE_THUNK_DATA		pINT;	    
    PIMAGE_IMPORT_BY_NAME	pImpName;
    DWORD			ImpVA;

    if (pDOS->e_magic != IMAGE_DOS_SIGNATURE)
	return NULL;
    pPE = (PIMAGE_NT_HEADERS)(pImage + pDOS->e_lfanew);
    if (pPE->Signature != IMAGE_NT_SIGNATURE)
	return NULL;

    ImpVA = pPE->OptionalHeader
		.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    if (ImpVA == 0)
	return NULL;	
    pImpDesc = (PIMAGE_IMPORT_DESCRIPTOR)(pImage + ImpVA);

    for (; pImpDesc->FirstThunk; ++pImpDesc)
    {
	if (!pImpDesc->OriginalFirstThunk)
	    continue;
	pIAT = (PIMAGE_THUNK_DATA)(pImage + pImpDesc->FirstThunk);
	pINT = (PIMAGE_THUNK_DATA)(pImage + pImpDesc->OriginalFirstThunk);
	for (; pIAT->u1.Function; ++pIAT, ++pINT)
	{
	    if (IMAGE_SNAP_BY_ORDINAL(pINT->u1.Ordinal))
		continue;
	    pImpName = (PIMAGE_IMPORT_BY_NAME)(pImage
					+ (UINT_PTR)(pINT->u1.AddressOfData));
	    if (strcmp((char *)pImpName->Name, funcname) == 0)
	    {
		void *original;
		DWORD old, new = PAGE_READWRITE;

		switch (info)
		{
		    case 0:
			return (void *)pIAT->u1.Function;
		    case 1:
			return (void *)(pImage + pImpDesc->Name);
		    case 2:
			original = (void *)pIAT->u1.Function;
			VirtualProtect(&pIAT->u1.Function, sizeof(void *),
				new, &old);
			pIAT->u1.Function = (UINT_PTR)ptr;
			VirtualProtect(&pIAT->u1.Function, sizeof(void *),
				old, &new);
			return original;
		    default:
			return NULL;
		}
	    }
	}
    }
    return NULL;
}


    HINSTANCE
find_imported_module_by_funcname(HINSTANCE hInst, const char *funcname)
{
    char    *modulename;

    modulename = (char *)get_imported_func_info(hInst, funcname, 1, NULL);
    if (modulename != NULL)
	return GetModuleHandleA(modulename);
    return NULL;
}


    void *
get_dll_import_func(HINSTANCE hInst, const char *funcname)
{
    return get_imported_func_info(hInst, funcname, 0, NULL);
}


    void *
hook_dll_import_func(HINSTANCE hInst, const char *funcname, const void *hook)
{
    return get_imported_func_info(hInst, funcname, 2, hook);
}
#endif

#if defined(FEAT_PYTHON3) || defined(PROTO)

    HINSTANCE
get_forwarded_dll(HINSTANCE hInst)
{
    PBYTE			pImage = (PBYTE)hInst;
    PIMAGE_DOS_HEADER		pDOS = (PIMAGE_DOS_HEADER)hInst;
    PIMAGE_NT_HEADERS		pPE;
    PIMAGE_EXPORT_DIRECTORY	pExpDir;
    DWORD			ExpVA;
    DWORD			ExpSize;
    LPDWORD			pFunctionTable;

    if (pDOS->e_magic != IMAGE_DOS_SIGNATURE)
	return NULL;
    pPE = (PIMAGE_NT_HEADERS)(pImage + pDOS->e_lfanew);
    if (pPE->Signature != IMAGE_NT_SIGNATURE)
	return NULL;

    ExpVA = pPE->OptionalHeader
		.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;
    ExpSize = pPE->OptionalHeader
		.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].Size;
    if (ExpVA == 0)
	return hInst;	
    pExpDir = (PIMAGE_EXPORT_DIRECTORY)(pImage + ExpVA);
    pFunctionTable = (LPDWORD)(pImage + pExpDir->AddressOfFunctions);

    if (pExpDir->NumberOfNames == 0)
	return hInst;	

    
    if ((pFunctionTable[0] < ExpVA) || (pFunctionTable[0] >= ExpVA + ExpSize))
	
	return hInst;

    
    
    const char *name = (const char *)(pImage + pFunctionTable[0]);
    const char *p = strchr(name, '.');
    if (p == NULL)
	return hInst;

    
    char buf[MAX_PATH];
    if (p - name + 1 > sizeof(buf))
	return NULL;
    strncpy(buf, name, p - name);
    buf[p - name] = '\0';
    return GetModuleHandleA(buf);
}
#endif

#if defined(DYNAMIC_GETTEXT) || defined(PROTO)
# ifndef GETTEXT_DLL
#  define GETTEXT_DLL "libintl.dll"
#  define GETTEXT_DLL_ALT1 "libintl-8.dll"
#  define GETTEXT_DLL_ALT2 "intl.dll"
# endif

static char *null_libintl_gettext(const char *);
static char *null_libintl_ngettext(const char *, const char *, unsigned int n);
static char *null_libintl_textdomain(const char *);
static char *null_libintl_bindtextdomain(const char *, const char *);
static char *null_libintl_bind_textdomain_codeset(const char *, const char *);
static int null_libintl_wputenv(const wchar_t *);

static HINSTANCE hLibintlDLL = NULL;
char *(*dyn_libintl_gettext)(const char *) = null_libintl_gettext;
char *(*dyn_libintl_ngettext)(const char *, const char *, unsigned int n)
						= null_libintl_ngettext;
char *(*dyn_libintl_textdomain)(const char *) = null_libintl_textdomain;
char *(*dyn_libintl_bindtextdomain)(const char *, const char *)
						= null_libintl_bindtextdomain;
char *(*dyn_libintl_bind_textdomain_codeset)(const char *, const char *)
				       = null_libintl_bind_textdomain_codeset;
int (*dyn_libintl_wputenv)(const wchar_t *) = null_libintl_wputenv;

    int
dyn_libintl_init(void)
{
    int i;
    static struct
    {
	char	    *name;
	FARPROC	    *ptr;
    } libintl_entry[] =
    {
	{"gettext", (FARPROC*)&dyn_libintl_gettext},
	{"ngettext", (FARPROC*)&dyn_libintl_ngettext},
	{"textdomain", (FARPROC*)&dyn_libintl_textdomain},
	{"bindtextdomain", (FARPROC*)&dyn_libintl_bindtextdomain},
	{NULL, NULL}
    };
    HINSTANCE hmsvcrt;

    
    if (hLibintlDLL != NULL)
	return 1;
    
    hLibintlDLL = vimLoadLib(GETTEXT_DLL);
# ifdef GETTEXT_DLL_ALT1
    if (!hLibintlDLL)
	hLibintlDLL = vimLoadLib(GETTEXT_DLL_ALT1);
# endif
# ifdef GETTEXT_DLL_ALT2
    if (!hLibintlDLL)
	hLibintlDLL = vimLoadLib(GETTEXT_DLL_ALT2);
# endif
    if (!hLibintlDLL)
    {
	if (p_verbose > 0)
	{
	    verbose_enter();
	    semsg(_(e_could_not_load_library_str_str), GETTEXT_DLL, GetWin32Error());
	    verbose_leave();
	}
	return 0;
    }
    for (i = 0; libintl_entry[i].name != NULL
					 && libintl_entry[i].ptr != NULL; ++i)
    {
	if ((*libintl_entry[i].ptr = GetProcAddress(hLibintlDLL,
					      libintl_entry[i].name)) == NULL)
	{
	    dyn_libintl_end();
	    if (p_verbose > 0)
	    {
		verbose_enter();
		semsg(_(e_could_not_load_library_function_str), libintl_entry[i].name);
		verbose_leave();
	    }
	    return 0;
	}
    }

    
    dyn_libintl_bind_textdomain_codeset = (char *(*)(const char *, const char *))
			GetProcAddress(hLibintlDLL, "bind_textdomain_codeset");
    if (dyn_libintl_bind_textdomain_codeset == NULL)
	dyn_libintl_bind_textdomain_codeset =
					 null_libintl_bind_textdomain_codeset;

    
    hmsvcrt = find_imported_module_by_funcname(hLibintlDLL, "getenv");
    if (hmsvcrt != NULL)
	dyn_libintl_wputenv = (int (*)(const wchar_t *))
					GetProcAddress(hmsvcrt, "_wputenv");
    if (dyn_libintl_wputenv == NULL || dyn_libintl_wputenv == _wputenv)
	dyn_libintl_wputenv = null_libintl_wputenv;

    return 1;
}

    void
dyn_libintl_end(void)
{
    if (hLibintlDLL)
	FreeLibrary(hLibintlDLL);
    hLibintlDLL			= NULL;
    dyn_libintl_gettext		= null_libintl_gettext;
    dyn_libintl_ngettext	= null_libintl_ngettext;
    dyn_libintl_textdomain	= null_libintl_textdomain;
    dyn_libintl_bindtextdomain	= null_libintl_bindtextdomain;
    dyn_libintl_bind_textdomain_codeset = null_libintl_bind_textdomain_codeset;
    dyn_libintl_wputenv		= null_libintl_wputenv;
}

    static char *
null_libintl_gettext(const char *msgid)
{
    return (char*)msgid;
}

    static char *
null_libintl_ngettext(
	const char *msgid,
	const char *msgid_plural,
	unsigned int n)
{
    return (char *)(n == 1 ? msgid : msgid_plural);
}

    static char *
null_libintl_bindtextdomain(
	const char *domainname UNUSED,
	const char *dirname UNUSED)
{
    return NULL;
}

    static char *
null_libintl_bind_textdomain_codeset(
	const char *domainname UNUSED,
	const char *codeset UNUSED)
{
    return NULL;
}

    static char *
null_libintl_textdomain(const char *domainname UNUSED)
{
    return NULL;
}

    static int
null_libintl_wputenv(const wchar_t *envstring UNUSED)
{
    return 0;
}

#endif 



#ifndef VER_PLATFORM_WIN32_WINDOWS
# define VER_PLATFORM_WIN32_WINDOWS 1
#endif

#ifdef HAVE_ACL
# ifndef PROTO
#  include <aclapi.h>
# endif
# ifndef PROTECTED_DACL_SECURITY_INFORMATION
#  define PROTECTED_DACL_SECURITY_INFORMATION	0x80000000L
# endif
#endif

#ifdef HAVE_ACL

    static BOOL
win32_enable_privilege(LPTSTR lpszPrivilege, BOOL bEnable)
{
    BOOL		bResult;
    LUID		luid;
    HANDLE		hToken;
    TOKEN_PRIVILEGES	tokenPrivileges;

    if (!OpenProcessToken(GetCurrentProcess(),
		TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
	return FALSE;

    if (!LookupPrivilegeValue(NULL, lpszPrivilege, &luid))
    {
	CloseHandle(hToken);
	return FALSE;
    }

    tokenPrivileges.PrivilegeCount	     = 1;
    tokenPrivileges.Privileges[0].Luid       = luid;
    tokenPrivileges.Privileges[0].Attributes = bEnable ?
						    SE_PRIVILEGE_ENABLED : 0;

    bResult = AdjustTokenPrivileges(hToken, FALSE, &tokenPrivileges,
	    sizeof(TOKEN_PRIVILEGES), NULL, NULL);

    CloseHandle(hToken);

    return bResult && GetLastError() == ERROR_SUCCESS;
}
#endif

#ifdef _MSC_VER


# pragma warning(push)
# pragma warning(disable: 4996)
#endif

    void
PlatformId(void)
{
    static int done = FALSE;

    if (done)
	return;

    OSVERSIONINFO ovi;

    ovi.dwOSVersionInfoSize = sizeof(ovi);
    GetVersionEx(&ovi);

#ifdef FEAT_EVAL
    vim_snprintf(windowsVersion, sizeof(windowsVersion), "%d.%d",
	    (int)ovi.dwMajorVersion, (int)ovi.dwMinorVersion);
#endif
    if ((ovi.dwMajorVersion == 6 && ovi.dwMinorVersion >= 2)
	    || ovi.dwMajorVersion > 6)
	win8_or_later = TRUE;

    if ((ovi.dwMajorVersion == 10 && ovi.dwBuildNumber >= 19045)
	    || ovi.dwMajorVersion > 10)
	win10_22H2_or_later = TRUE;

#ifdef HAVE_ACL
    
    win32_enable_privilege(SE_SECURITY_NAME, TRUE);
#endif
    done = TRUE;
}
#ifdef _MSC_VER
# pragma warning(pop)
#endif

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)

# define SHIFT  (SHIFT_PRESSED)
# define CTRL   (RIGHT_CTRL_PRESSED | LEFT_CTRL_PRESSED)
# define ALT    (RIGHT_ALT_PRESSED  | LEFT_ALT_PRESSED)
# define ALT_GR (RIGHT_ALT_PRESSED  | LEFT_CTRL_PRESSED)









static const struct
{
    WORD    wVirtKey;
    BOOL    fAnsiKey;
    int	    chAlone;
    int	    chShift;
    int	    chCtrl;
    int	    chAlt;
} VirtKeyMap[] =
{

    { VK_ESCAPE,FALSE,	ESC,	ESC,	ESC,	    ESC,    },

    { VK_F1,	TRUE,	';',	'T',	'^',	    'h', },
    { VK_F2,	TRUE,	'<',	'U',	'_',	    'i', },
    { VK_F3,	TRUE,	'=',	'V',	'`',	    'j', },
    { VK_F4,	TRUE,	'>',	'W',	'a',	    'k', },
    { VK_F5,	TRUE,	'?',	'X',	'b',	    'l', },
    { VK_F6,	TRUE,	'@',	'Y',	'c',	    'm', },
    { VK_F7,	TRUE,	'A',	'Z',	'd',	    'n', },
    { VK_F8,	TRUE,	'B',	'[',	'e',	    'o', },
    { VK_F9,	TRUE,	'C',	'\\',	'f',	    'p', },
    { VK_F10,	TRUE,	'D',	']',	'g',	    'q', },
    { VK_F11,	TRUE,	'\205',	'\207',	'\211',	    '\213', },
    { VK_F12,	TRUE,	'\206',	'\210',	'\212',	    '\214', },

    { VK_HOME,	TRUE,	'G',	'\302',	'w',	    '\303', },
    { VK_UP,	TRUE,	'H',	'\304',	'\305',	    '\306', },
    { VK_PRIOR,	TRUE,	'I',	'\307',	'\204',	    '\310', }, 
    { VK_LEFT,	TRUE,	'K',	'\311',	's',	    '\312', },
    { VK_RIGHT,	TRUE,	'M',	'\313',	't',	    '\314', },
    { VK_END,	TRUE,	'O',	'\315',	'u',	    '\316', },
    { VK_DOWN,	TRUE,	'P',	'\317',	'\320',	    '\321', },
    { VK_NEXT,	TRUE,	'Q',	'\322',	'v',	    '\323', }, 
    { VK_INSERT,TRUE,	'R',	'\324',	'\325',	    '\326', },
    { VK_DELETE,TRUE,	'S',	'\327',	'\330',	    '\331', },
    { VK_BACK,	TRUE,	'x',	'y',	'z',	    '{', }, 

    { VK_SNAPSHOT,TRUE,	0,	0,	0,	    'r', }, 

# if 0
    
    { VK_F13,	TRUE,	'\332',	'\333',	'\334',	    '\335', },
    { VK_F14,	TRUE,	'\336',	'\337',	'\340',	    '\341', },
    { VK_F15,	TRUE,	'\342',	'\343',	'\344',	    '\345', },
    { VK_F16,	TRUE,	'\346',	'\347',	'\350',	    '\351', },
    { VK_F17,	TRUE,	'\352',	'\353',	'\354',	    '\355', },
    { VK_F18,	TRUE,	'\356',	'\357',	'\360',	    '\361', },
    { VK_F19,	TRUE,	'\362',	'\363',	'\364',	    '\365', },
    { VK_F20,	TRUE,	'\366',	'\367',	'\370',	    '\371', },
# endif
    { VK_ADD,	TRUE,   'N',    'N',    'N',	'N',	}, 
    { VK_SUBTRACT, TRUE,'J',	'J',    'J',	'J',	}, 
 
    { VK_MULTIPLY, TRUE,'7',	'7',    '7',	'7',	}, 

    { VK_NUMPAD0,TRUE,  '\332',	'\333',	'\334',	    '\335', },
    { VK_NUMPAD1,TRUE,  '\336',	'\337',	'\340',	    '\341', },
    { VK_NUMPAD2,TRUE,  '\342',	'\343',	'\344',	    '\345', },
    { VK_NUMPAD3,TRUE,  '\346',	'\347',	'\350',	    '\351', },
    { VK_NUMPAD4,TRUE,  '\352',	'\353',	'\354',	    '\355', },
    { VK_NUMPAD5,TRUE,  '\356',	'\357',	'\360',	    '\361', },
    { VK_NUMPAD6,TRUE,  '\362',	'\363',	'\364',	    '\365', },
    { VK_NUMPAD7,TRUE,  '\366',	'\367',	'\370',	    '\371', },
    { VK_NUMPAD8,TRUE,  '\372',	'\373',	'\374',	    '\375', },
    
    { VK_NUMPAD9,TRUE,  '\376',	'\377',	'|',	    '}', },
};



    static int
win32_kbd_patch_key(
    KEY_EVENT_RECORD *pker)
{
    UINT uMods = pker->dwControlKeyState;
    static int s_iIsDead = 0;
    static WORD awAnsiCode[2];
    static BYTE abKeystate[256];


    if (s_iIsDead == 2)
    {
	pker->uChar.UnicodeChar = (WCHAR) awAnsiCode[1];
	s_iIsDead = 0;
	return 1;
    }

    
    if (pker->uChar.UnicodeChar != 0)
	return 1;

    CLEAR_FIELD(abKeystate);

    
    ToUnicode(VK_SPACE, MapVirtualKey(VK_SPACE, 0), abKeystate, awAnsiCode, 2, 0);

    if (uMods & SHIFT_PRESSED)
	abKeystate[VK_SHIFT] = 0x80;
    if (uMods & CAPSLOCK_ON)
	abKeystate[VK_CAPITAL] = 1;

    if ((uMods & ALT_GR) == ALT_GR)
    {
	abKeystate[VK_CONTROL] = abKeystate[VK_LCONTROL] =
	    abKeystate[VK_MENU] = abKeystate[VK_RMENU] = 0x80;
    }

    s_iIsDead = ToUnicode(pker->wVirtualKeyCode, pker->wVirtualScanCode,
			abKeystate, awAnsiCode, 2, 0);

    if (s_iIsDead > 0)
	pker->uChar.UnicodeChar = (WCHAR) awAnsiCode[0];

    return s_iIsDead;
}

static BOOL g_fJustGotFocus = FALSE;


    static BOOL
decode_key_event(
    KEY_EVENT_RECORD	*pker,
    WCHAR		*pch,
    WCHAR		*pch2,
    int			*pmodifiers,
    BOOL		fDoPost UNUSED)
{
    int i;
    const int nModifs = pker->dwControlKeyState & (SHIFT | ALT | CTRL);

    *pch = *pch2 = NUL;
    g_fJustGotFocus = FALSE;

    
    if (!pker->bKeyDown)
	return FALSE;

    
    switch (pker->wVirtualKeyCode)
    {
    
    case VK_SHIFT:
    case VK_CONTROL:
    case VK_MENU:   
	return FALSE;

    default:
	break;
    }

    
    if (pker->wVirtualKeyCode == VK_TAB && (nModifs & SHIFT_PRESSED))
    {
	*pch = K_NUL;
	*pch2 = '\017';
	return TRUE;
    }

    for (i = ARRAY_LENGTH(VirtKeyMap);  --i >= 0;  )
    {
	if (VirtKeyMap[i].wVirtKey == pker->wVirtualKeyCode)
	{
	    *pch = VirtKeyMap[i].chAlone;
	    if ((nModifs & SHIFT) != 0)
		*pch = VirtKeyMap[i].chShift;
	    else if ((nModifs & CTRL) != 0 && (nModifs & ~CTRL) == 0)
		*pch = VirtKeyMap[i].chCtrl;
	    else if ((nModifs & ALT) != 0)
		*pch = VirtKeyMap[i].chAlt;

	    if (*pch != 0)
	    {
		if (VirtKeyMap[i].fAnsiKey)
		{
		    *pch2 = *pch;
		    *pch = K_NUL;
		    if (pmodifiers)
		    {
			if (pker->wVirtualKeyCode >= VK_F1
			    && pker->wVirtualKeyCode <= VK_F12)
			{
			    if ((nModifs & ALT) != 0)
			    {
				*pmodifiers |= MOD_MASK_ALT;
				if ((nModifs & SHIFT) == 0)
				    *pch2 = VirtKeyMap[i].chAlone;
			    }
			    if ((nModifs & CTRL) != 0)
			    {
				*pmodifiers |= MOD_MASK_CTRL;
				if ((nModifs & SHIFT) == 0)
				    *pch2 = VirtKeyMap[i].chAlone;
			    }
			}
			else if (pker->wVirtualKeyCode >= VK_END
				&& pker->wVirtualKeyCode <= VK_DOWN)
			{
			    
			    

			    *pmodifiers = 0;
			    *pch2 = VirtKeyMap[i].chAlone;
			    if ((nModifs & SHIFT) != 0
						    && (nModifs & ~SHIFT) == 0)
			    {
				*pch2 = VirtKeyMap[i].chShift;
			    }
			    if ((nModifs & CTRL) != 0
						     && (nModifs & ~CTRL) == 0)
			    {
				*pch2 = VirtKeyMap[i].chCtrl;
				if (pker->wVirtualKeyCode == VK_UP
				    || pker->wVirtualKeyCode == VK_DOWN)
				{
				    *pmodifiers |= MOD_MASK_CTRL;
				    *pch2 = VirtKeyMap[i].chAlone;
				}
			    }
			    if ((nModifs & SHIFT) != 0
						      && (nModifs & CTRL) != 0)
			    {
				*pmodifiers |= MOD_MASK_CTRL;
				*pch2 = VirtKeyMap[i].chShift;
			    }
			    if ((nModifs & ALT) != 0)
			    {
				*pch2 = VirtKeyMap[i].chAlt;
				*pmodifiers |= MOD_MASK_ALT;
				if ((nModifs & ~ALT) == 0)
				{
				    *pch2 = VirtKeyMap[i].chAlone;
				}
				else if ((nModifs & SHIFT) != 0)
				{
				    *pch2 = VirtKeyMap[i].chShift;
				}
				else if ((nModifs & CTRL) != 0)
				{
				    if (pker->wVirtualKeyCode == VK_UP
					|| pker->wVirtualKeyCode == VK_DOWN)
				    {
					*pmodifiers |= MOD_MASK_CTRL;
					*pch2 = VirtKeyMap[i].chAlone;
				    }
				    else
				    {
					*pch2 = VirtKeyMap[i].chCtrl;
				    }
				}
			    }
			}
			else
			{
			    *pch2 = VirtKeyMap[i].chAlone;
			    if ((nModifs & SHIFT) != 0)
				*pmodifiers |= MOD_MASK_SHIFT;
			    if ((nModifs & CTRL) != 0)
				*pmodifiers |= MOD_MASK_CTRL;
			    if ((nModifs & ALT) != 0)
				*pmodifiers |= MOD_MASK_ALT;
			}
		    }
		}

		return TRUE;
	    }
	}
    }

    i = win32_kbd_patch_key(pker);

    if (i < 0)
	*pch = NUL;
    else
    {
	*pch = (i > 0) ? pker->uChar.UnicodeChar : NUL;

	if (pmodifiers != NULL)
	{
	    
	    
	    if ((nModifs & ALT) != 0 && (nModifs & CTRL) == 0)
		*pmodifiers |= MOD_MASK_ALT;

	    
	    
	    if ((nModifs & SHIFT) != 0 && *pch <= 0x20)
		*pmodifiers |= MOD_MASK_SHIFT;

	    
	    
	    
	    if ((nModifs & CTRL) != 0 && (nModifs & ALT) == 0
					       && *pch >= 0x20 && *pch < 0x80)
		*pmodifiers |= MOD_MASK_CTRL;
	}
    }

    return (*pch != NUL);
}

# if defined(FEAT_EVAL)
    static int
encode_key_event(dict_T *args, INPUT_RECORD *ir)
{
    static int s_dwMods = 0;

    char_u *action = dict_get_string(args, "event", TRUE);
    if (action && (STRICMP(action, "keydown") == 0
					|| STRICMP(action, "keyup") == 0))
    {
	BOOL isKeyDown = STRICMP(action, "keydown") == 0;
	WORD vkCode = dict_get_number_def(args, "keycode", 0);
	if (vkCode <= 0 || vkCode >= 0xFF)
	{
	    semsg(_(e_invalid_argument_nr), (int)vkCode);
	    return FALSE;
	}

	ir->EventType = KEY_EVENT;
	KEY_EVENT_RECORD ker;
	ZeroMemory(&ker, sizeof(ker));
	ker.bKeyDown = isKeyDown;
	ker.wRepeatCount = 1;
	ker.wVirtualScanCode = 0;
	ker.dwControlKeyState = 0;
	int mods = (int)dict_get_number(args, "modifiers");
	
	if (mods)
	{
	    
	    
	    
	    
	    s_dwMods = 0;
	    if (mods & MOD_MASK_SHIFT)
		ker.dwControlKeyState |= SHIFT_PRESSED;
	    if (mods & MOD_MASK_CTRL)
		ker.dwControlKeyState |= LEFT_CTRL_PRESSED;
	    if (mods & MOD_MASK_ALT)
		ker.dwControlKeyState |= LEFT_ALT_PRESSED;
	}

	if (vkCode == VK_LSHIFT || vkCode == VK_RSHIFT || vkCode == VK_SHIFT)
	{
	    if (isKeyDown)
		s_dwMods |= SHIFT_PRESSED;
	    else
		s_dwMods &= ~SHIFT_PRESSED;
	}
	else if (vkCode == VK_LCONTROL || vkCode == VK_CONTROL)
	{
	    if (isKeyDown)
		s_dwMods |= LEFT_CTRL_PRESSED;
	    else
		s_dwMods &= ~LEFT_CTRL_PRESSED;
	}
	else if (vkCode == VK_RCONTROL)
	{
	    if (isKeyDown)
		s_dwMods |= RIGHT_CTRL_PRESSED;
	    else
		s_dwMods &= ~RIGHT_CTRL_PRESSED;
	}
	else if (vkCode == VK_LMENU || vkCode == VK_MENU)
	{
	    if (isKeyDown)
		s_dwMods |= LEFT_ALT_PRESSED;
	    else
		s_dwMods &= ~LEFT_ALT_PRESSED;
	}
	else if (vkCode == VK_RMENU)
	{
	    if (isKeyDown)
		s_dwMods |= RIGHT_ALT_PRESSED;
	    else
		s_dwMods &= ~RIGHT_ALT_PRESSED;
	}
	ker.dwControlKeyState |= s_dwMods;
	ker.wVirtualKeyCode = vkCode;
	ker.uChar.UnicodeChar = 0;
	ir->Event.KeyEvent = ker;
	vim_free(action);
    }
    else
    {
	if (action == NULL)
	{
	    semsg(_(e_missing_argument_str), "event");
	}
	else
	{
	    semsg(_(e_invalid_value_for_argument_str_str), "event", action);
	    vim_free(action);
	}
	return FALSE;
    }
    return TRUE;
}
# endif  
#endif 



#if defined(FEAT_GUI_MSWIN) && !defined(VIMDLL)
    void
mch_setmouse(int on UNUSED)
{
}
#else  
static int g_fMouseAvail = FALSE;   
static int g_fMouseActive = FALSE;  
static int g_nMouseClick = -1;	    
static int g_xMouse;		    
static int g_yMouse;		    
static DWORD g_cmodein = 0;	    
static DWORD g_cmodeout = 0;	    


    void
mch_setmouse(int on)
{
    DWORD cmodein;

# ifdef VIMDLL
    if (gui.in_use)
	return;
# endif
    if (!g_fMouseAvail)
	return;

    g_fMouseActive = on;
    GetConsoleMode(g_hConIn, &cmodein);

    if (g_fMouseActive)
    {
	cmodein |= ENABLE_MOUSE_INPUT;
	cmodein &= ~ENABLE_QUICK_EDIT_MODE;
    }
    else
    {
	cmodein &= ~ENABLE_MOUSE_INPUT;
	cmodein |= g_cmodein & ENABLE_QUICK_EDIT_MODE;
    }

    SetConsoleMode(g_hConIn, cmodein | ENABLE_EXTENDED_FLAGS);
}


# if defined(FEAT_BEVAL_TERM) || defined(PROTO)

    void
mch_bevalterm_changed(void)
{
    mch_setmouse(g_fMouseActive);
}
# endif


    static void
decode_mouse_wheel(MOUSE_EVENT_RECORD *pmer)
{
    int	    horizontal = (pmer->dwEventFlags == MOUSE_HWHEELED);
    int	    zDelta = pmer->dwButtonState;

    g_xMouse = pmer->dwMousePosition.X;
    g_yMouse = pmer->dwMousePosition.Y;

# ifdef FEAT_PROP_POPUP
    int lcol = g_xMouse;
    int lrow = g_yMouse;
    win_T *wp = mouse_find_win(&lrow, &lcol, FIND_POPUP);
    if (wp != NULL && popup_is_popup(wp))
    {
	g_nMouseClick = -1;
	cmdarg_T cap;
	oparg_T oa;
	CLEAR_FIELD(cap);
	clear_oparg(&oa);
	cap.oap = &oa;
	if (horizontal)
	{
	    cap.arg = zDelta < 0 ? MSCR_LEFT : MSCR_RIGHT;
	    cap.cmdchar = zDelta < 0 ? K_MOUSELEFT : K_MOUSERIGHT;
	}
	else
	{
	    cap.cmdchar = zDelta < 0 ? K_MOUSEUP : K_MOUSEDOWN;
	    cap.arg = zDelta < 0 ? MSCR_UP : MSCR_DOWN;
	}

	
	mouse_row = wp->w_winrow;
	mouse_col = wp->w_wincol;
	nv_mousescroll(&cap);
	update_screen(0);
	setcursor();
	out_flush();
	return;
    }
# endif
    mouse_col = g_xMouse;
    mouse_row = g_yMouse;

    char_u modifiers = 0;
    char_u direction = 0;

    
    if (horizontal)
	direction = zDelta >= 0 ? KE_MOUSELEFT : KE_MOUSERIGHT;
    else
	direction = zDelta >= 0 ? KE_MOUSEDOWN : KE_MOUSEUP;

    
    if (pmer->dwControlKeyState & SHIFT_PRESSED)
	modifiers |= MOD_MASK_SHIFT; 
    if (pmer->dwControlKeyState & (RIGHT_CTRL_PRESSED | LEFT_CTRL_PRESSED))
	modifiers |= MOD_MASK_CTRL; 
    if (pmer->dwControlKeyState & (RIGHT_ALT_PRESSED  | LEFT_ALT_PRESSED))
	modifiers |= MOD_MASK_ALT; 

    
    
    g_nMouseClick = ((direction << 8) | modifiers);

    return;
}


    static BOOL
decode_mouse_event(
    MOUSE_EVENT_RECORD *pmer)
{
    static int s_nOldButton = -1;
    static int s_nOldMouseClick = -1;
    static int s_xOldMouse = -1;
    static int s_yOldMouse = -1;
    static linenr_T s_old_topline = 0;
# ifdef FEAT_DIFF
    static int s_old_topfill = 0;
# endif
    static int s_cClicks = 1;
    static BOOL s_fReleased = TRUE;
    static DWORD s_dwLastClickTime = 0;
    static BOOL s_fNextIsMiddle = FALSE;

    static DWORD cButtons = 0;	

    const DWORD LEFT = FROM_LEFT_1ST_BUTTON_PRESSED;
    const DWORD MIDDLE = FROM_LEFT_2ND_BUTTON_PRESSED;
    const DWORD RIGHT = RIGHTMOST_BUTTON_PRESSED;
    const DWORD LEFT_RIGHT = LEFT | RIGHT;

    int nButton;

    if (cButtons == 0 && !GetNumberOfConsoleMouseButtons(&cButtons))
	cButtons = 2;

    if (!g_fMouseAvail || !g_fMouseActive)
    {
	g_nMouseClick = -1;
	return FALSE;
    }

    
    if (g_fJustGotFocus)
    {
	g_fJustGotFocus = FALSE;
	return FALSE;
    }

    
    if (g_nMouseClick != -1)
	return TRUE;

    if (pmer->dwEventFlags == MOUSE_WHEELED
				       || pmer->dwEventFlags == MOUSE_HWHEELED)
    {
	decode_mouse_wheel(pmer);
	return TRUE;  
    }

    nButton = -1;
    g_xMouse = pmer->dwMousePosition.X;
    g_yMouse = pmer->dwMousePosition.Y;

    if (pmer->dwEventFlags == MOUSE_MOVED)
    {
	
	
	if (s_xOldMouse == g_xMouse && s_yOldMouse == g_yMouse)
	    return FALSE;
    }

    
    if ((pmer->dwButtonState & ((1 << cButtons) - 1)) == 0)
    {
	nButton = MOUSE_RELEASE;

	
	if (s_fReleased)
	{
# ifdef FEAT_BEVAL_TERM
	    
	    if (p_bevalterm)
		nButton = MOUSE_DRAG;
	    else
# endif
		return FALSE;
	}

	s_fReleased = TRUE;
    }
    else    
    {
	
	

	if (cButtons == 2 && s_nOldButton != MOUSE_DRAG)
	{
	    DWORD dwLR = (pmer->dwButtonState & LEFT_RIGHT);

	    
	    
	    if (dwLR == LEFT || dwLR == RIGHT)
	    {
		for (;;)
		{
		    
		    if (WaitForSingleObject(g_hConIn, p_mouset / 3)
							     != WAIT_OBJECT_0)
			break;
		    else
		    {
			DWORD cRecords = 0;
			INPUT_RECORD ir;
			MOUSE_EVENT_RECORD* pmer2 = &ir.Event.MouseEvent;

			peek_console_input(g_hConIn, &ir, 1, &cRecords);

			if (cRecords == 0 || ir.EventType != MOUSE_EVENT
				|| !(pmer2->dwButtonState & LEFT_RIGHT))
			    break;
			else
			{
			    if (pmer2->dwEventFlags != MOUSE_MOVED)
			    {
				read_console_input(g_hConIn, &ir, 1, &cRecords);

				return decode_mouse_event(pmer2);
			    }
			    else if (s_xOldMouse == pmer2->dwMousePosition.X &&
				     s_yOldMouse == pmer2->dwMousePosition.Y)
			    {
				
				read_console_input(g_hConIn, &ir, 1, &cRecords);

				
				peek_console_input(g_hConIn, &ir, 1, &cRecords);

				if (cRecords==0 || ir.EventType != MOUSE_EVENT)
				    break;
			    }
			    else
				break;
			}
		    }
		}
	    }
	}

	if (s_fNextIsMiddle)
	{
	    nButton = (pmer->dwEventFlags == MOUSE_MOVED)
		? MOUSE_DRAG : MOUSE_MIDDLE;
	    s_fNextIsMiddle = FALSE;
	}
	else if (cButtons == 2	&&
	    ((pmer->dwButtonState & LEFT_RIGHT) == LEFT_RIGHT))
	{
	    nButton = MOUSE_MIDDLE;

	    if (! s_fReleased && pmer->dwEventFlags != MOUSE_MOVED)
	    {
		s_fNextIsMiddle = TRUE;
		nButton = MOUSE_RELEASE;
	    }
	}
	else if ((pmer->dwButtonState & LEFT) == LEFT)
	    nButton = MOUSE_LEFT;
	else if ((pmer->dwButtonState & MIDDLE) == MIDDLE)
	    nButton = MOUSE_MIDDLE;
	else if ((pmer->dwButtonState & RIGHT) == RIGHT)
	    nButton = MOUSE_RIGHT;

	if (! s_fReleased && ! s_fNextIsMiddle
		&& nButton != s_nOldButton && s_nOldButton != MOUSE_DRAG)
	    return FALSE;

	s_fReleased = s_fNextIsMiddle;
    }

    if (pmer->dwEventFlags == 0 || pmer->dwEventFlags == DOUBLE_CLICK)
    {
	
	if (nButton != -1 && nButton != MOUSE_RELEASE)
	{
	    DWORD dwCurrentTime = GetTickCount();

	    if (s_xOldMouse != g_xMouse
		    || s_yOldMouse != g_yMouse
		    || s_nOldButton != nButton
		    || s_old_topline != curwin->w_topline
# ifdef FEAT_DIFF
		    || s_old_topfill != curwin->w_topfill
# endif
		    || (int)(dwCurrentTime - s_dwLastClickTime) > p_mouset)
	    {
		s_cClicks = 1;
	    }
	    else if (++s_cClicks > 4)
	    {
		s_cClicks = 1;
	    }

	    s_dwLastClickTime = dwCurrentTime;
	}
    }
    else if (pmer->dwEventFlags == MOUSE_MOVED)
    {
	if (nButton != -1 && nButton != MOUSE_RELEASE)
	    nButton = MOUSE_DRAG;

	s_cClicks = 1;
    }

    if (nButton == -1)
	return FALSE;

    if (nButton != MOUSE_RELEASE)
	s_nOldButton = nButton;

    g_nMouseClick = nButton;

    if (pmer->dwControlKeyState & SHIFT_PRESSED)
	g_nMouseClick |= MOUSE_SHIFT;
    if (pmer->dwControlKeyState & (RIGHT_CTRL_PRESSED | LEFT_CTRL_PRESSED))
	g_nMouseClick |= MOUSE_CTRL;
    if (pmer->dwControlKeyState & (RIGHT_ALT_PRESSED  | LEFT_ALT_PRESSED))
	g_nMouseClick |= MOUSE_ALT;

    if (nButton != MOUSE_DRAG && nButton != MOUSE_RELEASE)
	SET_NUM_MOUSE_CLICKS(g_nMouseClick, s_cClicks);

    
    if (s_xOldMouse == g_xMouse
	    && s_yOldMouse == g_yMouse
	    && s_nOldMouseClick == g_nMouseClick)
    {
	g_nMouseClick = -1;
	return FALSE;
    }

    s_xOldMouse = g_xMouse;
    s_yOldMouse = g_yMouse;
    s_old_topline = curwin->w_topline;
# ifdef FEAT_DIFF
    s_old_topfill = curwin->w_topfill;
# endif
    s_nOldMouseClick = g_nMouseClick;

    return TRUE;
}

# ifdef FEAT_EVAL
    static int
encode_mouse_event(dict_T *args, INPUT_RECORD *ir)
{
    int		button;
    int		row;
    int		col;
    int		repeated_click;
    int_u	mods = 0;
    int		move;

    if (!dict_has_key(args, "row") || !dict_has_key(args, "col"))
	return FALSE;

    
    move = (int)dict_get_bool(args, "move", FALSE);
    if (!move && (!dict_has_key(args, "button")
	    || !dict_has_key(args, "multiclick")
	    || !dict_has_key(args, "modifiers")))
	return FALSE;

    row = (int)dict_get_number(args, "row") - 1;
    col = (int)dict_get_number(args, "col") - 1;

    ir->EventType = MOUSE_EVENT;
    MOUSE_EVENT_RECORD mer;
    ZeroMemory(&mer, sizeof(mer));
    mer.dwMousePosition.X  = col;
    mer.dwMousePosition.Y  = row;

    if (move)
    {
	mer.dwButtonState = 0;
	mer.dwEventFlags = MOUSE_MOVED;
    }
    else
    {
	button = (int)dict_get_number(args, "button");
	repeated_click = (int)dict_get_number(args, "multiclick");
	mods = (int)dict_get_number(args, "modifiers");
	
	
	mouse_set_hor_scroll_step(6);
	mouse_set_vert_scroll_step(3);

	switch (button)
	{
	    case MOUSE_LEFT:
		mer.dwButtonState = FROM_LEFT_1ST_BUTTON_PRESSED;
		mer.dwEventFlags = repeated_click == 1 ? DOUBLE_CLICK : 0;
		break;
	    case MOUSE_MIDDLE:
		mer.dwButtonState = FROM_LEFT_2ND_BUTTON_PRESSED;
		mer.dwEventFlags = repeated_click == 1 ? DOUBLE_CLICK : 0;
		break;
	    case MOUSE_RIGHT:
		mer.dwButtonState = RIGHTMOST_BUTTON_PRESSED;
		mer.dwEventFlags = repeated_click == 1 ? DOUBLE_CLICK : 0;
		break;
	    case MOUSE_RELEASE:
		
		mer.dwEventFlags = 0;

	    case MOUSE_MOVE:
		mer.dwButtonState = 0;
		mer.dwEventFlags = MOUSE_MOVED;
		break;
	    case MOUSE_X1:
		mer.dwButtonState = FROM_LEFT_3RD_BUTTON_PRESSED;
		break;
	    case MOUSE_X2:
		mer.dwButtonState = FROM_LEFT_4TH_BUTTON_PRESSED;
		break;
	    case MOUSE_4:  
		mer.dwButtonState = -1;
		mer.dwEventFlags = MOUSE_WHEELED;
		break;
	    case MOUSE_5:  
		mer.dwButtonState = +1;
		mer.dwEventFlags = MOUSE_WHEELED;
		break;
	    case MOUSE_6:  
		mer.dwButtonState = -1;
		mer.dwEventFlags = MOUSE_HWHEELED;
		break;
	    case MOUSE_7:  
		mer.dwButtonState = +1;
		mer.dwEventFlags = MOUSE_HWHEELED;
		break;
	    default:
		semsg(_(e_invalid_argument_str), "button");
		return FALSE;
	}
    }

    mer.dwControlKeyState = 0;
    if (mods != 0)
    {
	
	if (mods & MOUSE_SHIFT)
	    mer.dwControlKeyState |= SHIFT_PRESSED;
	if (mods & MOUSE_CTRL)
	    mer.dwControlKeyState |= LEFT_CTRL_PRESSED;
	if (mods & MOUSE_ALT)
	    mer.dwControlKeyState |= LEFT_ALT_PRESSED;
    }
    ir->Event.MouseEvent = mer;
    return TRUE;
}
# endif  

    static int
write_input_record_buffer(INPUT_RECORD* irEvents, int nLength)
{
    int nCount = 0;
    while (nCount < nLength)
    {
	input_record_buffer.length++;
	input_record_buffer_node_T *event_node =
				    malloc(sizeof(input_record_buffer_node_T));
	event_node->ir = irEvents[nCount++];
	event_node->next = NULL;
	if (input_record_buffer.tail == NULL)
	{
	    input_record_buffer.head = event_node;
	    input_record_buffer.tail = event_node;
	}
	else
	{
	    input_record_buffer.tail->next = event_node;
	    input_record_buffer.tail = input_record_buffer.tail->next;
	}
    }
    return nCount;
}

    static int
read_input_record_buffer(INPUT_RECORD* irEvents, int nMaxLength)
{
    int nCount = 0;
    while (nCount < nMaxLength && input_record_buffer.head != NULL)
    {
	input_record_buffer.length--;
	input_record_buffer_node_T *pop_head = input_record_buffer.head;
	irEvents[nCount++] = pop_head->ir;
	input_record_buffer.head = pop_head->next;
	vim_free(pop_head);
	if (input_record_buffer.length == 0)
	    input_record_buffer.tail = NULL;
    }
    return nCount;
}
#endif 

#ifdef FEAT_EVAL

    int
test_mswin_event(char_u *event, dict_T *args)
{
    int lpEventsWritten = 0;

# if defined(VIMDLL) || defined(FEAT_GUI_MSWIN)
    if (gui.in_use)
	return test_gui_w32_sendevent(event, args);
# endif

# if defined(VIMDLL) || !defined(FEAT_GUI_MSWIN)





    INPUT_RECORD ir;
    BOOL input_encoded = FALSE;
    BOOL execute = FALSE;
    if (STRCMP(event, "key") == 0)
    {
	execute = dict_get_bool(args, "execute", FALSE);
	if (dict_has_key(args, "event"))
	    input_encoded = encode_key_event(args, &ir);
	else if (!execute)
	{
	    semsg(_(e_missing_argument_str), "event");
	    return FALSE;
	}
    }
    else if (STRCMP(event, "mouse") == 0)
    {
	execute = TRUE;
	input_encoded = encode_mouse_event(args, &ir);
    }
    else
    {
	semsg(_(e_invalid_value_for_argument_str_str), "event", event);
	return FALSE;
    }

    
    
    
    if (input_encoded)
	lpEventsWritten = write_input_record_buffer(&ir, 1);

    
    if (execute)
    {
	int save_msg_scroll = msg_scroll;
	
	msg_scroll = FALSE;
	ch_log(NULL, "test_mswin_event() executing");
	exec_normal(TRUE, TRUE, TRUE);
	msg_scroll |= save_msg_scroll;
    }

# endif
    return lpEventsWritten;
}
#endif 

#ifdef MCH_CURSOR_SHAPE

    static void
mch_set_cursor_shape(int thickness)
{
    if (vtp_working)
    {
	if (*T_CSI == NUL)
	{
	    
	    if (thickness < 50)
		vtp_printf("\033[3 q");	
	    else
		vtp_printf("\033[0 q");	
	}
    }
    else
    {
	CONSOLE_CURSOR_INFO ConsoleCursorInfo;
	ConsoleCursorInfo.dwSize = thickness;
	ConsoleCursorInfo.bVisible = s_cursor_visible;

	SetConsoleCursorInfo(g_hConOut, &ConsoleCursorInfo);
	if (s_cursor_visible)
	    SetConsoleCursorPosition(g_hConOut, g_coord);
    }
}

    void
mch_update_cursor(void)
{
    int		idx;
    int		thickness;

# ifdef VIMDLL
    if (gui.in_use)
	return;
# endif

    
    idx = get_shape_idx(FALSE);

    if (shape_table[idx].shape == SHAPE_BLOCK)
	thickness = 99;	
    else
	thickness = shape_table[idx].percentage;
    mch_set_cursor_shape(thickness);
}
#endif

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)

    static void
handle_focus_event(INPUT_RECORD ir)
{
    g_fJustGotFocus = ir.Event.FocusEvent.bSetFocus;
    ui_focus_change((int)g_fJustGotFocus);
}

static void ResizeConBuf(HANDLE hConsole, COORD coordScreen);


    static int
WaitForChar(int msec, int ignore_input)
{
    DWORD	    dwNow = 0, dwEndTime = 0;
    INPUT_RECORD    ir;
    DWORD	    cRecords;
    WCHAR	    ch, ch2;
# ifdef FEAT_TIMERS
    int		    tb_change_cnt = typebuf.tb_change_cnt;
# endif

    if (msec > 0)
	
	dwEndTime = GetTickCount() + msec;
    else if (msec < 0)
	
	dwEndTime = INFINITE;

    
    
    for (;;)
    {
	
	if (msec != 0)
	{
# ifdef MESSAGE_QUEUE
	    parse_queued_messages();
# endif
# ifdef FEAT_MZSCHEME
	    mzvim_check_threads();
# endif
# ifdef FEAT_CLIENTSERVER
	    serverProcessPendingMessages();
# endif
	}

	if (g_nMouseClick != -1
# ifdef FEAT_CLIENTSERVER
		|| (!ignore_input && input_available())
# endif
	   )
	    return TRUE;

	if (msec > 0)
	{
	    
	    
	    dwNow = GetTickCount();
	    if ((int)(dwNow - dwEndTime) >= 0)
		break;
	}
	if (msec != 0)
	{
	    DWORD dwWaitTime = dwEndTime - dwNow;

	    
	    
	    
	    if (dwWaitTime > 11)
		dwWaitTime = 11;

# ifdef FEAT_MZSCHEME
	    if (mzthreads_allowed() && p_mzq > 0 && (int)dwWaitTime > p_mzq)
		dwWaitTime = p_mzq; 
# endif
# ifdef FEAT_TIMERS
	    
	    if (dwWaitTime > 10)
	    {
		int	due_time;

		
		
		due_time = check_due_timer();
		if (typebuf.tb_change_cnt != tb_change_cnt)
		{
		    
		    return FALSE;
		}
		if (due_time > 0 && dwWaitTime > (DWORD)due_time)
		    dwWaitTime = due_time;
	    }
# endif
	    if (
# ifdef FEAT_CLIENTSERVER
		    
		    
		    msg_wait_for_multiple_objects(1, &g_hConIn, FALSE,
				  dwWaitTime, QS_SENDMESSAGE) != WAIT_OBJECT_0
# else
		    wait_for_single_object(g_hConIn, dwWaitTime)
							      != WAIT_OBJECT_0
# endif
		    )
		continue;
	}

	cRecords = 0;
	peek_console_input(g_hConIn, &ir, 1, &cRecords);

# ifdef FEAT_MBYTE_IME
	
	
	if (State == MODE_CMDLINE && msg_row == Rows - 1 && msec != 0)
	{
	    CONSOLE_SCREEN_BUFFER_INFO csbi;

	    if (GetConsoleScreenBufferInfo(g_hConOut, &csbi))
	    {
		if (csbi.dwCursorPosition.Y != msg_row)
		{
		    
		    
		    redraw_all_later(UPD_CLEAR);
		    compute_cmdrow();
		    redrawcmd();
		}
	    }
	}
# endif

	if (cRecords > 0)
	{
	    if (ir.EventType == KEY_EVENT && ir.Event.KeyEvent.bKeyDown)
	    {
# ifdef FEAT_MBYTE_IME
		
		
		if (ir.Event.KeyEvent.uChar.UnicodeChar == 0
			&& ir.Event.KeyEvent.wVirtualKeyCode == 13)
		{
		    read_console_input(g_hConIn, &ir, 1, &cRecords);
		    continue;
		}
# endif
		if (decode_key_event(&ir.Event.KeyEvent, &ch, &ch2,
								 NULL, FALSE))
		    return TRUE;
	    }

	    read_console_input(g_hConIn, &ir, 1, &cRecords);

	    if (ir.EventType == FOCUS_EVENT)
		handle_focus_event(ir);
	    else if (ir.EventType == WINDOW_BUFFER_SIZE_EVENT)
	    {
		COORD dwSize = ir.Event.WindowBufferSizeEvent.dwSize;

		
		
		if (dwSize.X != Columns || dwSize.Y != Rows)
		{
		    CONSOLE_SCREEN_BUFFER_INFO csbi;
		    GetConsoleScreenBufferInfo(g_hConOut, &csbi);
		    dwSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
		    dwSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
		    if (dwSize.X != Columns || dwSize.Y != Rows)
		    {
			ResizeConBuf(g_hConOut, dwSize);
			shell_resized();
		    }
		}
	    }
	    else if (ir.EventType == MOUSE_EVENT
		    && decode_mouse_event(&ir.Event.MouseEvent))
		return TRUE;
	}
	else if (msec == 0)
	    break;
    }

# ifdef FEAT_CLIENTSERVER
    
    if (input_available())
	return TRUE;
# endif

    return FALSE;
}


    int
mch_char_avail(void)
{
# ifdef VIMDLL
    if (gui.in_use)
	return TRUE;
# endif
    return WaitForChar(0L, FALSE);
}

# if defined(FEAT_TERMINAL) || defined(PROTO)

    int
mch_check_messages(void)
{
#  ifdef VIMDLL
    if (gui.in_use)
	return TRUE;
#  endif
    return WaitForChar(0L, TRUE);
}
# endif


    static void
create_conin(void)
{
    g_hConIn =	CreateFile("CONIN$", GENERIC_READ|GENERIC_WRITE,
			FILE_SHARE_READ|FILE_SHARE_WRITE,
			(LPSECURITY_ATTRIBUTES) NULL,
			OPEN_EXISTING, 0, (HANDLE)NULL);
    did_create_conin = TRUE;
}


    static WCHAR
tgetch(int *pmodifiers, WCHAR *pch2)
{
    WCHAR ch;

    for (;;)
    {
	INPUT_RECORD ir;
	DWORD cRecords = 0;

# ifdef FEAT_CLIENTSERVER
	(void)WaitForChar(-1L, FALSE);
	if (input_available())
	    return 0;
	if (g_nMouseClick != -1)
	    return 0;
# endif
	if (read_console_input(g_hConIn, &ir, 1, &cRecords) == 0)
	{
	    if (did_create_conin)
		read_error_exit();
	    create_conin();
	    continue;
	}

	if (ir.EventType == KEY_EVENT)
	{
	    if (decode_key_event(&ir.Event.KeyEvent, &ch, pch2,
							    pmodifiers, TRUE))
		return ch;
	}
	else if (ir.EventType == FOCUS_EVENT)
	    handle_focus_event(ir);
	else if (ir.EventType == WINDOW_BUFFER_SIZE_EVENT)
	    shell_resized();
	else if (ir.EventType == MOUSE_EVENT)
	{
	    if (decode_mouse_event(&ir.Event.MouseEvent))
		return 0;
	}
    }
}
#endif 



    int
mch_inchar(
    char_u	*buf UNUSED,
    int		maxlen UNUSED,
    int	time UNUSED,
    int		tb_change_cnt UNUSED)
{
#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)

    int		len;
    int		c;
# ifdef VIMDLL

#  define TYPEAHEADSPACE    6
# else
#  define TYPEAHEADSPACE    0
# endif
# define TYPEAHEADLEN	    (20 + TYPEAHEADSPACE)
    static char_u   typeahead[TYPEAHEADLEN];	
    static int	    typeaheadlen = 0;

# ifdef VIMDLL
    if (gui.in_use)
	return 0;
# endif

    
    if (typeaheadlen > 0)
	goto theend;

    if (time >= 0)
    {
	if (!WaitForChar(time, FALSE))     
	    return 0;
    }
    else    
    {
	mch_set_winsize_now();	

	
	if (!WaitForChar(p_ut, FALSE))
	{
	    if (trigger_cursorhold() && maxlen >= 3)
	    {
		buf[0] = K_SPECIAL;
		buf[1] = KS_EXTRA;
		buf[2] = (int)KE_CURSORHOLD;
		return 3;
	    }
	    before_blocking();
	}
    }

    

    
    g_fCBrkPressed = FALSE;

# ifdef MCH_WRITE_DUMP
    if (fdDump)
	fputc('[', fdDump);
# endif

    
    
    
    while ((typeaheadlen == 0 || WaitForChar(0L, FALSE))
			  && typeaheadlen + 5 + TYPEAHEADSPACE <= TYPEAHEADLEN)
    {
	if (typebuf_changed(tb_change_cnt))
	{
	    
	    
	    typeaheadlen = 0;
	    break;
	}
	if (g_nMouseClick != -1)
	{
# ifdef MCH_WRITE_DUMP
	    if (fdDump)
		fprintf(fdDump, "{%02x @ %d, %d}",
			g_nMouseClick, g_xMouse, g_yMouse);
# endif
	    char_u modifiers = ((char_u *)(&g_nMouseClick))[0];
	    char_u scroll_dir = ((char_u *)(&g_nMouseClick))[1];

	    if (scroll_dir == KE_MOUSEDOWN
		    || scroll_dir == KE_MOUSEUP
		    || scroll_dir == KE_MOUSELEFT
		    || scroll_dir == KE_MOUSERIGHT)
	    {
		if (modifiers > 0)
		{
		    
		    typeahead[typeaheadlen++] = K_SPECIAL;
		    typeahead[typeaheadlen++] = KS_MODIFIER;
		    typeahead[typeaheadlen++] = modifiers;
		}
		typeahead[typeaheadlen++] = CSI;
		typeahead[typeaheadlen++] = KS_EXTRA;
		typeahead[typeaheadlen++] = scroll_dir;
	    }
	    else
	    {
		typeahead[typeaheadlen++] = ESC + 128;
		typeahead[typeaheadlen++] = 'M';
		typeahead[typeaheadlen++] = g_nMouseClick;
	    }

	    
	    
	    
	    typeahead[typeaheadlen++] = (char_u)(g_xMouse / 128 + ' ' + 1);
	    typeahead[typeaheadlen++] = (char_u)(g_xMouse % 128 + ' ' + 1);
	    typeahead[typeaheadlen++] = (char_u)(g_yMouse / 128 + ' ' + 1);
	    typeahead[typeaheadlen++] = (char_u)(g_yMouse % 128 + ' ' + 1);

	    g_nMouseClick = -1;
	}
	else
	{
	    WCHAR	ch2 = NUL;
	    int		modifiers = 0;

	    c = tgetch(&modifiers, &ch2);

	    c = simplify_key(c, &modifiers);

	    
	    ++no_reduce_keys;
	    c = may_adjust_key_for_ctrl(modifiers, c);
	    --no_reduce_keys;

	    
	    
	    modifiers = may_remove_shift_modifier(modifiers, c);

	    if (typebuf_changed(tb_change_cnt))
	    {
		
		
		typeaheadlen = 0;
		break;
	    }

	    if (c == Ctrl_C && ctrl_c_interrupts)
	    {
# if defined(FEAT_CLIENTSERVER)
		trash_input_buf();
# endif
		got_int = TRUE;
	    }

	    if (g_nMouseClick == -1)
	    {
		int	n = 1;

		if (ch2 == NUL)
		{
		    int	    i, j;
		    char_u  *p;
		    WCHAR   ch[2];

		    ch[0] = c;
		    if (c >= 0xD800 && c <= 0xDBFF)	
		    {
			ch[1] = tgetch(&modifiers, &ch2);
			n++;
		    }
		    p = utf16_to_enc(ch, &n);
		    if (p != NULL)
		    {
			for (i = 0, j = 0; i < n; i++)
			{
			    typeahead[typeaheadlen + j++] = p[i];
# ifdef VIMDLL
			    if (p[i] == CSI)
			    {
				typeahead[typeaheadlen + j++] = KS_EXTRA;
				typeahead[typeaheadlen + j++] = KE_CSI;
			    }
# endif
			}
			n = j;
			vim_free(p);
		    }
		}
		else
		{
		    typeahead[typeaheadlen] = c;
# ifdef VIMDLL
		    if (c == CSI)
		    {
			typeahead[typeaheadlen + 1] = KS_EXTRA;
			typeahead[typeaheadlen + 2] = KE_CSI;
			n = 3;
		    }
# endif
		}
		if (ch2 != NUL)
		{
		    if (c == K_NUL)
		    {
			switch (ch2)
			{
			case (WCHAR)'\324': 
			case (WCHAR)'\325': 
			case (WCHAR)'\327': 
			case (WCHAR)'\330': 
			    typeahead[typeaheadlen + n] = (char_u)ch2;
			    n++;
			    break;

			default:
			    typeahead[typeaheadlen + n] = 3;
			    typeahead[typeaheadlen + n + 1] = (char_u)ch2;
			    n += 2;
			    break;
			}
		    }
		    else
		    {
			typeahead[typeaheadlen + n] = 3;
			typeahead[typeaheadlen + n + 1] = (char_u)ch2;
			n += 2;
		    }
		}

		
		
		
		
		if ((modifiers & MOD_MASK_ALT)
			&& n == 1
			&& (typeahead[typeaheadlen] & 0x80) == 0
			&& !enc_dbcs
		   )
		{
		    n = (*mb_char2bytes)(typeahead[typeaheadlen] | 0x80,
						    typeahead + typeaheadlen);
		    modifiers &= ~MOD_MASK_ALT;
		}

		if (modifiers != 0)
		{
		    
		    mch_memmove(typeahead + typeaheadlen + 3,
						 typeahead + typeaheadlen, n);
		    typeahead[typeaheadlen++] = K_SPECIAL;
		    typeahead[typeaheadlen++] = (char_u)KS_MODIFIER;
		    typeahead[typeaheadlen++] =  modifiers;
		}

		typeaheadlen += n;

# ifdef MCH_WRITE_DUMP
		if (fdDump)
		    fputc(c, fdDump);
# endif
	    }
	}
    }

# ifdef MCH_WRITE_DUMP
    if (fdDump)
    {
	fputs("]\n", fdDump);
	fflush(fdDump);
    }
# endif

theend:
    
    len = 0;
    while (len < maxlen && typeaheadlen > 0)
    {
	buf[len++] = typeahead[0];
	mch_memmove(typeahead, typeahead + 1, --typeaheadlen);
    }
# ifdef FEAT_EVAL
    if (len > 0)
    {
	buf[len] = NUL;
	ch_log(NULL, "raw key input: \"%s\"", buf);
    }
# endif
    return len;

#else 
    return 0;
#endif 
}


    static int
executable_file(char *name, char_u **path)
{
    int attrs = win32_getattrs((char_u *)name);

    
    if (attrs == -1 || (attrs & FILE_ATTRIBUTE_DIRECTORY))
	return FALSE;
    
    
    if (attrs & FILE_ATTRIBUTE_REPARSE_POINT)
    {
	char_u	*res = resolve_appexeclink((char_u *)name);
	if (res == NULL)
	    res = resolve_reparse_point((char_u *)name);
	if (res == NULL)
	    return FALSE;
	
	if (path != NULL)
	    *path = res;
	else
	    vim_free(res);
    }
    else if (path != NULL)
	*path = FullName_save((char_u *)name, FALSE);
    return TRUE;
}


    static int
executable_exists(char *name, char_u **path, int use_path, int use_pathext)
{
    
    
    
    char_u	buf[_MAX_PATH * 3];
    size_t	len = STRLEN(name);
    size_t	tmplen;
    char_u	*p, *e, *e2;
    char_u	*pathbuf = NULL;
    char_u	*pathext = NULL;
    char_u	*pathextbuf = NULL;
    char_u	*shname = NULL;
    int		noext = FALSE;
    int		retval = FALSE;

    if (len >= sizeof(buf))	
	return FALSE;

    
    shname = gettail(p_sh);
    if (strstr((char *)shname, "sh") != NULL &&
	!(strstr((char *)shname, "powershell") != NULL
				    || strstr((char *)shname, "pwsh") != NULL))
	noext = TRUE;

    if (use_pathext)
    {
	pathext = mch_getenv("PATHEXT");
	if (pathext == NULL)
	    pathext = (char_u *)".com;.exe;.bat;.cmd";

	if (noext == FALSE)
	{
	    
	    p = pathext;
	    while (*p)
	    {
		if (p[0] == ';'
			    || (p[0] == '.' && (p[1] == NUL || p[1] == ';')))
		{
		    
		    ++p;
		    continue;
		}
		e = vim_strchr(p, ';');
		if (e == NULL)
		    e = p + STRLEN(p);
		tmplen = e - p;

		if (_strnicoll(name + len - tmplen, (char *)p, tmplen) == 0)
		{
		    noext = TRUE;
		    break;
		}

		p = e;
	    }
	}
    }

    
    if (pathext == NULL)
	pathext = (char_u *)".";
    else if (noext == TRUE)
    {
	if (pathextbuf == NULL)
	    pathextbuf = alloc(STRLEN(pathext) + 3);
	if (pathextbuf == NULL)
	{
	    retval = FALSE;
	    goto theend;
	}
	STRCPY(pathextbuf, ".;");
	STRCAT(pathextbuf, pathext);
	pathext = pathextbuf;
    }

    
    if (use_path && gettail((char_u *)name) == (char_u *)name)
    {
	p = mch_getenv("PATH");
	if (p != NULL)
	{
	    pathbuf = alloc(STRLEN(p) + 3);
	    if (pathbuf == NULL)
	    {
		retval = FALSE;
		goto theend;
	    }

	    if (mch_getenv("NoDefaultCurrentDirectoryInExePath") == NULL)
		STRCPY(pathbuf, ".;");
	    else
		*pathbuf = NUL;
	    STRCAT(pathbuf, p);
	}
    }

    
    p = (pathbuf != NULL) ? pathbuf : (char_u *)".";
    while (*p)
    {
	if (*p == ';') 
	{
	    ++p;
	    continue;
	}
	e = vim_strchr(p, ';');
	if (e == NULL)
	    e = p + STRLEN(p);

	if (e - p + len + 2 > sizeof(buf))
	{
	    retval = FALSE;
	    goto theend;
	}
	
	if (e - p == 1 && *p == '.')
	    STRCPY(buf, name);
	else
	{
	    vim_strncpy(buf, p, e - p);
	    add_pathsep(buf);
	    STRCAT(buf, name);
	}
	tmplen = STRLEN(buf);

	
	p = pathext;
	while (*p)
	{
	    if (*p == ';')
	    {
		
		++p;
		continue;
	    }
	    e2 = vim_strchr(p, (int)';');
	    if (e2 == NULL)
		e2 = p + STRLEN(p);

	    if (!(p[0] == '.' && (p[1] == NUL || p[1] == ';')))
	    {
		
		if (e2 - p + tmplen + 1 > sizeof(buf))
		{
		    retval = FALSE;
		    goto theend;
		}
		vim_strncpy(buf + tmplen, p, e2 - p);
	    }
	    if (executable_file((char *)buf, path))
	    {
		retval = TRUE;
		goto theend;
	    }

	    p = e2;
	}

	p = e;
    }

theend:
    free(pathextbuf);
    free(pathbuf);
    return retval;
}

#if (defined(__MINGW32__) && __MSVCRT_VERSION__ >= 0x800) || \
	(defined(_MSC_VER) && _MSC_VER >= 1400)

    static void
bad_param_handler(const wchar_t *expression UNUSED,
    const wchar_t *function UNUSED,
    const wchar_t *file UNUSED,
    unsigned int line UNUSED,
    uintptr_t pReserved UNUSED)
{
}

# define SET_INVALID_PARAM_HANDLER \
	((void)_set_invalid_parameter_handler(bad_param_handler))
#else
# define SET_INVALID_PARAM_HANDLER
#endif

#ifdef FEAT_GUI_MSWIN


    static void
mch_init_g(void)
{
# ifndef __MINGW32__
    extern int _fmode;
# endif

    
    SET_INVALID_PARAM_HANDLER;

    
    
    SetErrorMode(SEM_FAILCRITICALERRORS);

    _fmode = O_BINARY;		

    
    Rows = 25;
    Columns = 80;

    
    {
	char_u vimrun_location[_MAX_PATH + 4];

	
	STRCPY(vimrun_location, exe_name);
	STRCPY(gettail(vimrun_location), "vimrun.exe");
	if (mch_getperm(vimrun_location) >= 0)
	{
	    if (*skiptowhite(vimrun_location) != NUL)
	    {
		
		mch_memmove(vimrun_location + 1, vimrun_location,
						 STRLEN(vimrun_location) + 1);
		*vimrun_location = '"';
		STRCPY(gettail(vimrun_location), "vimrun\" ");
	    }
	    else
		STRCPY(gettail(vimrun_location), "vimrun ");

	    vimrun_path = (char *)vim_strsave(vimrun_location);
	    s_dont_use_vimrun = FALSE;
	}
	else if (executable_exists("vimrun.exe", NULL, TRUE, FALSE))
	    s_dont_use_vimrun = FALSE;

	
	
	
	if (s_dont_use_vimrun)
	    need_vimrun_warning = TRUE;
    }

    
    if (!executable_exists("findstr.exe", NULL, TRUE, FALSE))
	set_option_value_give_err((char_u *)"grepprg",
						    0, (char_u *)"grep -n", 0);

# ifdef FEAT_CLIPBOARD
    win_clip_init();
# endif

    vtp_flag_init();
}


#endif 

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)

# define SRWIDTH(sr) ((sr).Right - (sr).Left + 1)
# define SRHEIGHT(sr) ((sr).Bottom - (sr).Top + 1)


    static BOOL
ClearConsoleBuffer(WORD wAttribute)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD coord;
    DWORD NumCells, dummy;

    if (!GetConsoleScreenBufferInfo(g_hConOut, &csbi))
	return FALSE;

    NumCells = csbi.dwSize.X * csbi.dwSize.Y;
    coord.X = 0;
    coord.Y = 0;
    if (!FillConsoleOutputCharacter(g_hConOut, ' ', NumCells,
	    coord, &dummy))
	return FALSE;
    if (!FillConsoleOutputAttribute(g_hConOut, wAttribute, NumCells,
	    coord, &dummy))
	return FALSE;

    return TRUE;
}


    static BOOL
FitConsoleWindow(
    COORD dwBufferSize,
    BOOL WantAdjust)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD dwWindowSize;
    BOOL NeedAdjust = FALSE;

    if (!GetConsoleScreenBufferInfo(g_hConOut, &csbi))
	return FALSE;

    
    if (csbi.srWindow.Right >= dwBufferSize.X)
    {
	dwWindowSize.X = SRWIDTH(csbi.srWindow);
	if (dwWindowSize.X > dwBufferSize.X)
	    dwWindowSize.X = dwBufferSize.X;
	csbi.srWindow.Right = dwBufferSize.X - 1;
	csbi.srWindow.Left = dwBufferSize.X - dwWindowSize.X;
	NeedAdjust = TRUE;
    }
    if (csbi.srWindow.Bottom >= dwBufferSize.Y)
    {
	dwWindowSize.Y = SRHEIGHT(csbi.srWindow);
	if (dwWindowSize.Y > dwBufferSize.Y)
	    dwWindowSize.Y = dwBufferSize.Y;
	csbi.srWindow.Bottom = dwBufferSize.Y - 1;
	csbi.srWindow.Top = dwBufferSize.Y - dwWindowSize.Y;
	NeedAdjust = TRUE;
    }
    if (NeedAdjust && WantAdjust)
    {
	if (!SetConsoleWindowInfo(g_hConOut, TRUE, &csbi.srWindow))
	    return FALSE;
    }
    return TRUE;
}

typedef struct ConsoleBufferStruct
{
    BOOL			IsValid;
    CONSOLE_SCREEN_BUFFER_INFO	Info;
    PCHAR_INFO			Buffer;
    COORD			BufferSize;
    PSMALL_RECT			Regions;
    int				NumRegions;
} ConsoleBuffer;


    static BOOL
SaveConsoleBuffer(
    ConsoleBuffer *cb)
{
    DWORD NumCells;
    COORD BufferCoord;
    SMALL_RECT ReadRegion;
    WORD Y, Y_incr;
    int i, numregions;

    if (cb == NULL)
	return FALSE;

    if (!GetConsoleScreenBufferInfo(g_hConOut, &cb->Info))
    {
	cb->IsValid = FALSE;
	return FALSE;
    }
    cb->IsValid = TRUE;

    
    
    if (use_alternate_screen_buffer)
	return TRUE;

    
    if (!cb->IsValid || cb->Buffer == NULL ||
	    cb->BufferSize.X != cb->Info.dwSize.X ||
	    cb->BufferSize.Y != cb->Info.dwSize.Y)
    {
	cb->BufferSize.X = cb->Info.dwSize.X;
	cb->BufferSize.Y = cb->Info.dwSize.Y;
	NumCells = cb->BufferSize.X * cb->BufferSize.Y;
	vim_free(cb->Buffer);
	cb->Buffer = ALLOC_MULT(CHAR_INFO, NumCells);
	if (cb->Buffer == NULL)
	    return FALSE;
    }

    
    BufferCoord.X = 0;
    ReadRegion.Left = 0;
    ReadRegion.Right = cb->Info.dwSize.X - 1;
    Y_incr = 12000 / cb->Info.dwSize.X;

    numregions = (cb->Info.dwSize.Y + Y_incr - 1) / Y_incr;
    if (cb->Regions == NULL || numregions != cb->NumRegions)
    {
	cb->NumRegions = numregions;
	vim_free(cb->Regions);
	cb->Regions = ALLOC_MULT(SMALL_RECT, cb->NumRegions);
	if (cb->Regions == NULL)
	{
	    VIM_CLEAR(cb->Buffer);
	    return FALSE;
	}
    }

    for (i = 0, Y = 0; i < cb->NumRegions; i++, Y += Y_incr)
    {
	
	BufferCoord.Y = Y;
	
	ReadRegion.Top = Y;
	ReadRegion.Bottom = Y + Y_incr - 1;
	if (!ReadConsoleOutputW(g_hConOut,	
		cb->Buffer,			
		cb->BufferSize,			
		BufferCoord,			
		&ReadRegion))			
	{
	    VIM_CLEAR(cb->Buffer);
	    VIM_CLEAR(cb->Regions);
	    return FALSE;
	}
	cb->Regions[i] = ReadRegion;
    }

    return TRUE;
}


    static BOOL
RestoreConsoleBuffer(
    ConsoleBuffer   *cb,
    BOOL	    RestoreScreen)
{
    COORD BufferCoord;
    SMALL_RECT WriteRegion;
    int i;

    
    
    if (use_alternate_screen_buffer)
	return TRUE;

    if (cb == NULL || !cb->IsValid)
	return FALSE;

    
    if (RestoreScreen)
	ClearConsoleBuffer(cb->Info.wAttributes);

    FitConsoleWindow(cb->Info.dwSize, TRUE);
    if (!SetConsoleScreenBufferSize(g_hConOut, cb->Info.dwSize))
	return FALSE;
    if (!SetConsoleTextAttribute(g_hConOut, cb->Info.wAttributes))
	return FALSE;

    if (!RestoreScreen)
    {
	
	return TRUE;
    }

    if (!SetConsoleCursorPosition(g_hConOut, cb->Info.dwCursorPosition))
	return FALSE;
    if (!SetConsoleWindowInfo(g_hConOut, TRUE, &cb->Info.srWindow))
	return FALSE;

    
    if (cb->Buffer != NULL)
    {
	for (i = 0; i < cb->NumRegions; i++)
	{
	    BufferCoord.X = cb->Regions[i].Left;
	    BufferCoord.Y = cb->Regions[i].Top;
	    WriteRegion = cb->Regions[i];
	    if (!WriteConsoleOutputW(g_hConOut,	
			cb->Buffer,		
			cb->BufferSize,		
			BufferCoord,		
			&WriteRegion))		
		return FALSE;
	}
    }

    return TRUE;
}

# define FEAT_RESTORE_ORIG_SCREEN
# ifdef FEAT_RESTORE_ORIG_SCREEN
static ConsoleBuffer g_cbOrig = { 0 };
# endif
static ConsoleBuffer g_cbNonTermcap = { 0 };
static ConsoleBuffer g_cbTermcap = { 0 };

char g_szOrigTitle[256] = { 0 };
HWND g_hWnd = NULL;	
static HICON g_hOrigIconSmall = NULL;
static HICON g_hOrigIcon = NULL;
static HICON g_hVimIcon = NULL;
static BOOL g_fCanChangeIcon = FALSE;


    static BOOL
GetConsoleIcon(
    HWND	hWnd,
    HICON	*phIconSmall,
    HICON	*phIcon)
{
    if (hWnd == NULL)
	return FALSE;

    if (phIconSmall != NULL)
	*phIconSmall = (HICON)SendMessage(hWnd, WM_GETICON,
					       (WPARAM)ICON_SMALL, (LPARAM)0);
    if (phIcon != NULL)
	*phIcon = (HICON)SendMessage(hWnd, WM_GETICON,
						 (WPARAM)ICON_BIG, (LPARAM)0);
    return TRUE;
}


    static BOOL
SetConsoleIcon(
    HWND    hWnd,
    HICON   hIconSmall,
    HICON   hIcon)
{
    if (hWnd == NULL)
	return FALSE;

    if (hIconSmall != NULL)
	SendMessage(hWnd, WM_SETICON,
			    (WPARAM)ICON_SMALL, (LPARAM)hIconSmall);
    if (hIcon != NULL)
	SendMessage(hWnd, WM_SETICON,
			    (WPARAM)ICON_BIG, (LPARAM) hIcon);
    return TRUE;
}


    static void
SaveConsoleTitleAndIcon(void)
{
    
    if (!GetConsoleTitle(g_szOrigTitle, sizeof(g_szOrigTitle)))
	return;

    
    g_hWnd = GetConsoleWindow();
    if (g_hWnd == NULL)
	return;

    
    GetConsoleIcon(g_hWnd, &g_hOrigIconSmall, &g_hOrigIcon);
    if (g_hOrigIconSmall == NULL || g_hOrigIcon == NULL)
	return;

    
    if (
# ifdef FEAT_LIBCALL
	    mch_icon_load((HANDLE *)&g_hVimIcon) == FAIL ||
# endif
	    g_hVimIcon == NULL)
	g_hVimIcon = ExtractIcon(NULL, (LPCSTR)exe_name, 0);
    if (g_hVimIcon != NULL)
	g_fCanChangeIcon = TRUE;
}

static int g_fWindInitCalled = FALSE;
static int g_fTermcapMode = FALSE;
static CONSOLE_CURSOR_INFO g_cci;


    static void
mch_init_c(void)
{
# ifndef FEAT_RESTORE_ORIG_SCREEN
    CONSOLE_SCREEN_BUFFER_INFO csbi;
# endif
# ifndef __MINGW32__
    extern int _fmode;
# endif

    
    SET_INVALID_PARAM_HANDLER;

    
    
    SetErrorMode(SEM_FAILCRITICALERRORS);

    _fmode = O_BINARY;		
    out_flush();

    
    if (read_cmd_fd == 0)
	g_hConIn =  GetStdHandle(STD_INPUT_HANDLE);
    else
	create_conin();
    g_hConOut = GetStdHandle(STD_OUTPUT_HANDLE);

    wt_init();
    vtp_flag_init();
# ifdef FEAT_RESTORE_ORIG_SCREEN
    
    SaveConsoleBuffer(&g_cbOrig);
    g_attrCurrent = g_attrDefault = g_cbOrig.Info.wAttributes;
# else
    
    GetConsoleScreenBufferInfo(g_hConOut, &csbi);
    g_attrCurrent = g_attrDefault = csbi.wAttributes;
# endif
    if (cterm_normal_fg_color == 0)
	cterm_normal_fg_color = (g_attrCurrent & 0xf) + 1;
    if (cterm_normal_bg_color == 0)
	cterm_normal_bg_color = ((g_attrCurrent >> 4) & 0xf) + 1;

    
    g_color_index_fg = g_attrDefault & 0xf;
    g_color_index_bg = (g_attrDefault >> 4) & 0xf;

    
    update_tcap(g_attrCurrent);

    GetConsoleCursorInfo(g_hConOut, &g_cci);
    GetConsoleMode(g_hConIn,  &g_cmodein);
    GetConsoleMode(g_hConOut, &g_cmodeout);

    SaveConsoleTitleAndIcon();
    
    if (g_fCanChangeIcon)
	SetConsoleIcon(g_hWnd, g_hVimIcon, g_hVimIcon);

    ui_get_shellsize();

    vtp_init();
    
    if (use_alternate_screen_buffer)
	vtp_printf("\033[?1049h");

# ifdef MCH_WRITE_DUMP
    fdDump = fopen("dump", "wt");

    if (fdDump)
    {
	time_t t;

	time(&t);
	fputs(ctime(&t), fdDump);
	fflush(fdDump);
    }
# endif

    g_fWindInitCalled = TRUE;

    g_fMouseAvail = GetSystemMetrics(SM_MOUSEPRESENT);

# ifdef FEAT_CLIPBOARD
    win_clip_init();
# endif
}


    static void
mch_exit_c(int r)
{
    exiting = TRUE;

    vtp_exit();

    stoptermcap();
    if (g_fWindInitCalled)
	settmode(TMODE_COOK);

    ml_close_all(TRUE);		

    if (g_fWindInitCalled)
    {
	mch_restore_title(SAVE_RESTORE_BOTH);
	
	if (g_fCanChangeIcon && !g_fForceExit)
	    SetConsoleIcon(g_hWnd, g_hOrigIconSmall, g_hOrigIcon);

# ifdef MCH_WRITE_DUMP
	if (fdDump)
	{
	    time_t t;

	    time(&t);
	    fputs(ctime(&t), fdDump);
	    fclose(fdDump);
	}
	fdDump = NULL;
# endif
    }

    SetConsoleCursorInfo(g_hConOut, &g_cci);
    SetConsoleMode(g_hConIn,  g_cmodein | ENABLE_EXTENDED_FLAGS);
    SetConsoleMode(g_hConOut, g_cmodeout);

# ifdef DYNAMIC_GETTEXT
    dyn_libintl_end();
# endif

    exit(r);
}
#endif 

    void
mch_init(void)
{
#ifdef VIMDLL
    if (gui.starting)
	mch_init_g();
    else
	mch_init_c();
#elif defined(FEAT_GUI_MSWIN)
    mch_init_g();
#else
    mch_init_c();
#endif
}

    void
mch_exit(int r)
{
#ifdef FEAT_NETBEANS_INTG
    netbeans_send_disconnect();
#endif

#ifdef VIMDLL
    if (gui.in_use || gui.starting)
	mch_exit_g(r);
    else
	mch_exit_c(r);
#elif defined(FEAT_GUI_MSWIN)
    mch_exit_g(r);
#else
    mch_exit_c(r);
#endif
}


    int
mch_check_win(
    int argc UNUSED,
    char **argv UNUSED)
{
    mch_get_exe_name();

#if defined(FEAT_GUI_MSWIN) && !defined(VIMDLL)
    return OK;	    
#else
# ifdef VIMDLL
    if (gui.in_use)
	return OK;
# endif
    if (isatty(1))
	return OK;
    return FAIL;
#endif
}


    void
fname_case(
    char_u	*name,
    int		len)
{
    int	    flen;
    WCHAR   *p;
    WCHAR   buf[_MAX_PATH + 1];

    flen = (int)STRLEN(name);
    if (flen == 0)
	return;

    slash_adjust(name);

    p = enc_to_utf16(name, NULL);
    if (p == NULL)
	return;

    if (GetLongPathNameW(p, buf, _MAX_PATH))
    {
	char_u	*q = utf16_to_enc(buf, NULL);

	if (q != NULL)
	{
	    if (len > 0 || flen >= (int)STRLEN(q))
		vim_strncpy(name, q, (len > 0) ? len - 1 : flen);
	    vim_free(q);
	}
    }
    vim_free(p);
}



    int
mch_get_user_name(
    char_u  *s,
    int	    len)
{
    WCHAR wszUserName[256 + 1];	
    DWORD wcch = ARRAY_LENGTH(wszUserName);

    if (GetUserNameW(wszUserName, &wcch))
    {
	char_u  *p = utf16_to_enc(wszUserName, NULL);

	if (p != NULL)
	{
	    vim_strncpy(s, p, len - 1);
	    vim_free(p);
	    return OK;
	}
    }
    s[0] = NUL;
    return FAIL;
}



    void
mch_get_host_name(
    char_u	*s,
    int		len)
{
    WCHAR wszHostName[256 + 1];
    DWORD wcch = ARRAY_LENGTH(wszHostName);

    if (!GetComputerNameW(wszHostName, &wcch))
	return;

    char_u  *p = utf16_to_enc(wszHostName, NULL);
    if (p == NULL)
	return;

    vim_strncpy(s, p, len - 1);
    vim_free(p);
}



    int
mch_get_pid(void)
{
    return (int)GetCurrentProcessId();
}


    int
mch_process_running(int pid)
{
    HANDLE  hProcess = OpenProcess(PROCESS_QUERY_INFORMATION, 0, (DWORD)pid);
    DWORD   status = 0;
    int	    ret = FALSE;

    if (hProcess == NULL)
	return FALSE;  
    if (GetExitCodeProcess(hProcess, &status) )
	ret = status == STILL_ACTIVE;
    CloseHandle(hProcess);
    return ret;
}


    int
mch_dirname(
    char_u	*buf,
    int		len)
{
    WCHAR   wbuf[_MAX_PATH + 1];

    
    if (GetCurrentDirectoryW(_MAX_PATH, wbuf) == 0)
	return FAIL;

    WCHAR   wcbuf[_MAX_PATH + 1];
    char_u  *p = NULL;

    if (GetLongPathNameW(wbuf, wcbuf, _MAX_PATH) != 0)
    {
	p = utf16_to_enc(wcbuf, NULL);
	if (STRLEN(p) >= (size_t)len)
	{
	    
	    VIM_CLEAR(p);
	}
    }
    if (p == NULL)
	p = utf16_to_enc(wbuf, NULL);

    if (p == NULL)
	return FAIL;

    vim_strncpy(buf, p, len - 1);
    vim_free(p);
    return OK;
}


    int
mch_getperm(char_u *name)
{
    stat_T	st;
    int		n;

    n = mch_stat((char *)name, &st);
    return n == 0 ? (int)(unsigned short)st.st_mode : -1L;
}



    int
mch_setperm(char_u *name, int perm)
{
    int	n;
    WCHAR	*p;

    p = enc_to_utf16(name, NULL);
    if (p == NULL)
	return FAIL;

    n = _wchmod(p, perm);
    vim_free(p);
    if (n == -1)
	return FAIL;

    win32_set_archive(name);

    return OK;
}


    void
mch_hide(char_u *name)
{
    int attrs = win32_getattrs(name);
    if (attrs == -1)
	return;

    attrs |= FILE_ATTRIBUTE_HIDDEN;
    win32_setattrs(name, attrs);
}


    int
mch_ishidden(char_u *name)
{
    int f = win32_getattrs(name);

    if (f == -1)
	return FALSE;		    

    return (f & FILE_ATTRIBUTE_HIDDEN) != 0;
}


    int
mch_isdir(char_u *name)
{
    int f = win32_getattrs(name);

    if (f == -1)
	return FALSE;		    

    return (f & FILE_ATTRIBUTE_DIRECTORY) != 0;
}


    int
mch_isrealdir(char_u *name)
{
    return mch_isdir(name) && !mch_is_symbolic_link(name);
}


    int
mch_mkdir(char_u *name)
{
    WCHAR   *p;
    int	    retval;

    p = enc_to_utf16(name, NULL);
    if (p == NULL)
	return -1;
    retval = _wmkdir(p);
    vim_free(p);
    return retval;
}


    int
mch_rmdir(char_u *name)
{
    WCHAR   *p;
    int	    retval;

    p = enc_to_utf16(name, NULL);
    if (p == NULL)
	return -1;
    retval = _wrmdir(p);
    vim_free(p);
    return retval;
}


    int
mch_is_hard_link(char_u *fname)
{
    BY_HANDLE_FILE_INFORMATION info;

    return win32_fileinfo(fname, &info) == FILEINFO_OK
						   && info.nNumberOfLinks > 1;
}


    int
mch_is_symbolic_link(char_u *name)
{
    HANDLE		hFind;
    int			res = FALSE;
    DWORD		fileFlags = 0, reparseTag = 0;
    WCHAR		*wn;
    WIN32_FIND_DATAW	findDataW;

    wn = enc_to_utf16(name, NULL);
    if (wn == NULL)
	return FALSE;

    hFind = FindFirstFileW(wn, &findDataW);
    vim_free(wn);
    if (hFind != INVALID_HANDLE_VALUE)
    {
	fileFlags = findDataW.dwFileAttributes;
	reparseTag = findDataW.dwReserved0;
	FindClose(hFind);
    }

    if ((fileFlags & FILE_ATTRIBUTE_REPARSE_POINT)
	    && (reparseTag == IO_REPARSE_TAG_SYMLINK
		|| reparseTag == IO_REPARSE_TAG_MOUNT_POINT))
	res = TRUE;

    return res;
}


    int
mch_is_linked(char_u *fname)
{
    if (mch_is_hard_link(fname) || mch_is_symbolic_link(fname))
	return TRUE;
    return FALSE;
}


    int
win32_fileinfo(char_u *fname, BY_HANDLE_FILE_INFORMATION *info)
{
    HANDLE	hFile;
    int		res = FILEINFO_READ_FAIL;
    WCHAR	*wn;

    wn = enc_to_utf16(fname, NULL);
    if (wn == NULL)
	return FILEINFO_ENC_FAIL;

    hFile = CreateFileW(wn,	
	    GENERIC_READ,	
	    FILE_SHARE_READ | FILE_SHARE_WRITE,	
	    NULL,		
	    OPEN_EXISTING,	
	    FILE_FLAG_BACKUP_SEMANTICS,	
	    NULL);		
    vim_free(wn);

    if (hFile == INVALID_HANDLE_VALUE)
	return FILEINFO_READ_FAIL;

    if (GetFileInformationByHandle(hFile, info) != 0)
	res = FILEINFO_OK;
    else
	res = FILEINFO_INFO_FAIL;
    CloseHandle(hFile);

    return res;
}


    static int
win32_getattrs(char_u *name)
{
    int		attr;
    WCHAR	*p;

    p = enc_to_utf16(name, NULL);
    if (p == NULL)
	return INVALID_FILE_ATTRIBUTES;

    attr = GetFileAttributesW(p);
    vim_free(p);

    return attr;
}


    static int
win32_setattrs(char_u *name, int attrs)
{
    int	    res;
    WCHAR   *p;

    p = enc_to_utf16(name, NULL);
    if (p == NULL)
	return -1;

    res = SetFileAttributesW(p, attrs);
    vim_free(p);

    return res ? 0 : -1;
}


    static int
win32_set_archive(char_u *name)
{
    int attrs = win32_getattrs(name);
    if (attrs == -1)
	return -1;

    attrs |= FILE_ATTRIBUTE_ARCHIVE;
    return win32_setattrs(name, attrs);
}


    int
mch_writable(char_u *name)
{
    int attrs = win32_getattrs(name);

    return (attrs != -1 && (!(attrs & FILE_ATTRIBUTE_READONLY)
			  || (attrs & FILE_ATTRIBUTE_DIRECTORY)));
}


    int
mch_can_exe(char_u *name, char_u **path, int use_path UNUSED)
{
    return executable_exists((char *)name, path, TRUE, TRUE);
}


    int
mch_nodetype(char_u *name)
{
    HANDLE	hFile;
    int		type;
    WCHAR	*wn;

    
    
    
    if (STRNCMP(name, "\\\\.\\", 4) == 0)
	return NODE_WRITABLE;

    wn = enc_to_utf16(name, NULL);
    if (wn == NULL)
	return NODE_NORMAL;

    hFile = CreateFileW(wn,	    
	    GENERIC_WRITE,	    
	    0,			    
	    NULL,		    
	    OPEN_EXISTING,	    
	    0,			    
	    NULL);		    
    vim_free(wn);
    if (hFile == INVALID_HANDLE_VALUE)
	return NODE_NORMAL;

    type = GetFileType(hFile);
    CloseHandle(hFile);
    if (type == FILE_TYPE_CHAR)
	return NODE_WRITABLE;
    if (type == FILE_TYPE_DISK)
	return NODE_NORMAL;
    return NODE_OTHER;
}

#ifdef HAVE_ACL
struct my_acl
{
    PSECURITY_DESCRIPTOR    pSecurityDescriptor;
    PSID		    pSidOwner;
    PSID		    pSidGroup;
    PACL		    pDacl;
    PACL		    pSacl;
};
#endif


    vim_acl_T
mch_get_acl(char_u *fname)
{
#ifndef HAVE_ACL
    return (vim_acl_T)NULL;
#else
    struct my_acl   *p = NULL;
    DWORD   err;

    p = ALLOC_CLEAR_ONE(struct my_acl);
    if (p != NULL)
    {
	WCHAR	*wn;

	wn = enc_to_utf16(fname, NULL);
	if (wn == NULL)
	{
	    vim_free(p);
	    return NULL;
	}

	
	err = GetNamedSecurityInfoW(
		wn,			
		SE_FILE_OBJECT,		
		OWNER_SECURITY_INFORMATION |
		GROUP_SECURITY_INFORMATION |
		DACL_SECURITY_INFORMATION |
		SACL_SECURITY_INFORMATION,
		&p->pSidOwner,		
		&p->pSidGroup,		
		&p->pDacl,		
		&p->pSacl,		
		&p->pSecurityDescriptor);
	if (err == ERROR_ACCESS_DENIED ||
		err == ERROR_PRIVILEGE_NOT_HELD)
	{
	    
	    (void)GetNamedSecurityInfoW(
		    wn,
		    SE_FILE_OBJECT,
		    DACL_SECURITY_INFORMATION,
		    NULL,
		    NULL,
		    &p->pDacl,
		    NULL,
		    &p->pSecurityDescriptor);
	}
	if (p->pSecurityDescriptor == NULL)
	{
	    mch_free_acl((vim_acl_T)p);
	    p = NULL;
	}
	vim_free(wn);
    }

    return (vim_acl_T)p;
#endif
}

#ifdef HAVE_ACL

    static BOOL
is_acl_inherited(PACL acl)
{
    DWORD   i;
    ACL_SIZE_INFORMATION    acl_info;
    PACCESS_ALLOWED_ACE	    ace;

    acl_info.AceCount = 0;
    GetAclInformation(acl, &acl_info, sizeof(acl_info), AclSizeInformation);
    for (i = 0; i < acl_info.AceCount; i++)
    {
	GetAce(acl, i, (LPVOID *)&ace);
	if (ace->Header.AceFlags & INHERITED_ACE)
	    return TRUE;
    }
    return FALSE;
}
#endif


    void
mch_set_acl(char_u *fname, vim_acl_T acl)
{
#ifdef HAVE_ACL
    struct my_acl   *p = (struct my_acl *)acl;
    SECURITY_INFORMATION    sec_info = 0;
    WCHAR	    *wn;

    if (p == NULL)
	return;

    wn = enc_to_utf16(fname, NULL);
    if (wn == NULL)
	return;

    
    if (p->pSidOwner)
	sec_info |= OWNER_SECURITY_INFORMATION;
    if (p->pSidGroup)
	sec_info |= GROUP_SECURITY_INFORMATION;
    if (p->pDacl)
    {
	sec_info |= DACL_SECURITY_INFORMATION;
	
	
	if (!is_acl_inherited(p->pDacl))
	    sec_info |= PROTECTED_DACL_SECURITY_INFORMATION;
    }
    if (p->pSacl)
	sec_info |= SACL_SECURITY_INFORMATION;

    (void)SetNamedSecurityInfoW(
	    wn,			
	    SE_FILE_OBJECT,	
	    sec_info,
	    p->pSidOwner,	
	    p->pSidGroup,	
	    p->pDacl,		
	    p->pSacl		
	    );
    vim_free(wn);
#endif
}

    void
mch_free_acl(vim_acl_T acl)
{
#ifdef HAVE_ACL
    struct my_acl   *p = (struct my_acl *)acl;

    if (p != NULL)
    {
	LocalFree(p->pSecurityDescriptor);	
	vim_free(p);
    }
#endif
}

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)


    static BOOL WINAPI
handler_routine(
    DWORD dwCtrlType)
{
    INPUT_RECORD ir;
    DWORD out;

    switch (dwCtrlType)
    {
    case CTRL_C_EVENT:
	if (ctrl_c_interrupts)
	    g_fCtrlCPressed = TRUE;
	return TRUE;

    case CTRL_BREAK_EVENT:
	g_fCBrkPressed	= TRUE;
	ctrl_break_was_pressed = TRUE;
	
	ir.EventType = KEY_EVENT;
	ir.Event.KeyEvent.bKeyDown = TRUE;
	ir.Event.KeyEvent.wRepeatCount = 1;
	ir.Event.KeyEvent.wVirtualKeyCode = VK_CANCEL;
	ir.Event.KeyEvent.wVirtualScanCode = 0;
	ir.Event.KeyEvent.dwControlKeyState = 0;
	ir.Event.KeyEvent.uChar.UnicodeChar = 0;
	WriteConsoleInput(g_hConIn, &ir, 1, &out);
	return TRUE;

    
    case CTRL_CLOSE_EVENT:
    case CTRL_LOGOFF_EVENT:
    case CTRL_SHUTDOWN_EVENT:
	windgoto((int)Rows - 1, 0);
	g_fForceExit = TRUE;

	vim_snprintf((char *)IObuff, IOSIZE, _("Vim: Caught %s event\n"),
		(dwCtrlType == CTRL_CLOSE_EVENT
		     ? _("close")
		     : dwCtrlType == CTRL_LOGOFF_EVENT
			 ? _("logoff")
			 : _("shutdown")));
# ifdef DEBUG
	OutputDebugString(IObuff);
# endif

	preserve_exit();	

	return TRUE;		

    default:
	return FALSE;
    }
}



    void
mch_settmode(tmode_T tmode)
{
    DWORD cmodein;
    DWORD cmodeout;
    BOOL bEnableHandler;

# ifdef VIMDLL
    if (gui.in_use)
	return;
# endif
    GetConsoleMode(g_hConIn, &cmodein);
    GetConsoleMode(g_hConOut, &cmodeout);
    if (tmode == TMODE_RAW)
    {
	cmodein &= ~(ENABLE_LINE_INPUT | ENABLE_PROCESSED_INPUT |
		     ENABLE_ECHO_INPUT);
	if (g_fMouseActive)
	{
	    cmodein |= ENABLE_MOUSE_INPUT;
	    cmodein &= ~ENABLE_QUICK_EDIT_MODE;
	}
	else
	{
	    cmodein |= g_cmodein & ENABLE_QUICK_EDIT_MODE;
	}
	cmodeout &= ~(
# ifdef FEAT_TERMGUICOLORS
	    
	    
	    ((vtp_working) ? 0 : ENABLE_PROCESSED_OUTPUT) |
# else
	    ENABLE_PROCESSED_OUTPUT |
# endif
	    ENABLE_WRAP_AT_EOL_OUTPUT);
	bEnableHandler = TRUE;
    }
    else 
    {
	cmodein |= (ENABLE_LINE_INPUT | ENABLE_PROCESSED_INPUT |
		    ENABLE_ECHO_INPUT);
	cmodeout |= (ENABLE_PROCESSED_OUTPUT | ENABLE_WRAP_AT_EOL_OUTPUT);
	bEnableHandler = FALSE;
    }
    SetConsoleMode(g_hConIn, cmodein | ENABLE_EXTENDED_FLAGS);
    SetConsoleMode(g_hConOut, cmodeout);
    SetConsoleCtrlHandler(handler_routine, bEnableHandler);

# ifdef MCH_WRITE_DUMP
    if (fdDump)
    {
	fprintf(fdDump, "mch_settmode(%s, in = %x, out = %x)\n",
		tmode == TMODE_RAW ? "raw" :
				    tmode == TMODE_COOK ? "cooked" : "normal",
		cmodein, cmodeout);
	fflush(fdDump);
    }
# endif
}



    int
mch_get_shellsize(void)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;

# ifdef VIMDLL
    if (gui.in_use)
	return OK;
# endif
    if (!g_fTermcapMode && g_cbTermcap.IsValid)
    {
	
	Rows = g_cbTermcap.Info.dwSize.Y;
	Columns = g_cbTermcap.Info.dwSize.X;
    }
    else if (GetConsoleScreenBufferInfo(g_hConOut, &csbi))
    {
	Rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	Columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    }
    else
    {
	Rows = 25;
	Columns = 80;
    }
    return OK;
}


    static void
ResizeConBuf(
    HANDLE  hConsole,
    COORD   coordScreen)
{
    if (use_alternate_screen_buffer)
	return;

    if (!SetConsoleScreenBufferSize(hConsole, coordScreen))
    {
# ifdef MCH_WRITE_DUMP
	if (fdDump)
	{
	    fprintf(fdDump, "SetConsoleScreenBufferSize failed: %lx\n",
		    GetLastError());
	    fflush(fdDump);
	}
# endif
    }
}


    static void
ResizeWindow(
    HANDLE     hConsole,
    SMALL_RECT srWindowRect)
{
    if (!SetConsoleWindowInfo(hConsole, TRUE, &srWindowRect))
    {
# ifdef MCH_WRITE_DUMP
	if (fdDump)
	{
	    fprintf(fdDump, "SetConsoleWindowInfo failed: %lx\n",
		    GetLastError());
	    fflush(fdDump);
	}
# endif
    }
}


    static void
ResizeConBufAndWindow(
    HANDLE  hConsole,
    int	    xSize,
    int	    ySize)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;	
    SMALL_RECT	    srWindowRect;	
    COORD	    coordScreen;
    COORD	    cursor;
    static int	    resized = FALSE;

# ifdef MCH_WRITE_DUMP
    if (fdDump)
    {
	fprintf(fdDump, "ResizeConBufAndWindow(%d, %d)\n", xSize, ySize);
	fflush(fdDump);
    }
# endif

    
    coordScreen = GetLargestConsoleWindowSize(hConsole);

    
    srWindowRect.Left = srWindowRect.Top = (SHORT) 0;
    srWindowRect.Right =  (SHORT) (min(xSize, coordScreen.X) - 1);
    srWindowRect.Bottom = (SHORT) (min(ySize, coordScreen.Y) - 1);

    if (GetConsoleScreenBufferInfo(g_hConOut, &csbi))
    {
	int sx, sy;

	sx = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	sy = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	if (sy < ySize || sx < xSize)
	{
	    
	    if (sy < ySize)
		coordScreen.Y = ySize;
	    else
		coordScreen.Y = sy;
	    if (sx < xSize)
		coordScreen.X = xSize;
	    else
		coordScreen.X = sx;
	    SetConsoleScreenBufferSize(hConsole, coordScreen);
	}
    }

    
    coordScreen.X = xSize;
    coordScreen.Y = ySize;

    
    if (!vtp_working || resized)
    {
	ResizeWindow(hConsole, srWindowRect);
	ResizeConBuf(hConsole, coordScreen);
    }
    else
    {
	
	cursor.X = srWindowRect.Left;
	cursor.Y = srWindowRect.Top;
	SetConsoleCursorPosition(hConsole, cursor);

	ResizeConBuf(hConsole, coordScreen);
	ResizeWindow(hConsole, srWindowRect);
	resized = TRUE;
    }
}



    void
mch_set_shellsize(void)
{
    COORD coordScreen;

# ifdef VIMDLL
    if (gui.in_use)
	return;
# endif
    
    if (suppress_winsize != 0)
    {
	suppress_winsize = 2;
	return;
    }

    if (term_console)
    {
	coordScreen = GetLargestConsoleWindowSize(g_hConOut);

	
	if (Rows > coordScreen.Y)
	    Rows = coordScreen.Y;
	if (Columns > coordScreen.X)
	    Columns = coordScreen.X;

	ResizeConBufAndWindow(g_hConOut, Columns, Rows);
    }
}


    void
mch_new_shellsize(void)
{
# ifdef VIMDLL
    if (gui.in_use)
	return;
# endif
    set_scroll_region(0, 0, Columns - 1, Rows - 1);
}



    void
mch_set_winsize_now(void)
{
    if (suppress_winsize == 2)
    {
	suppress_winsize = 0;
	mch_set_shellsize();
	shell_resized();
    }
    suppress_winsize = 0;
}
#endif 

    static BOOL
vim_create_process(
    char		*cmd,
    BOOL		inherit_handles,
    DWORD		flags,
    STARTUPINFO		*si,
    PROCESS_INFORMATION *pi,
    LPVOID		*env,
    char		*cwd)
{
    BOOL	ret = FALSE;
    WCHAR	*wcmd, *wcwd = NULL;

    wcmd = enc_to_utf16((char_u *)cmd, NULL);
    if (wcmd == NULL)
	return FALSE;
    if (cwd != NULL)
    {
	wcwd = enc_to_utf16((char_u *)cwd, NULL);
	if (wcwd == NULL)
	    goto theend;
    }

    ret = CreateProcessW(
	    NULL,		
	    wcmd,		
	    NULL,		
	    NULL,		
	    inherit_handles,	
	    flags,		
	    env,		
	    wcwd,		
	    (LPSTARTUPINFOW)si,	
	    pi);		
theend:
    vim_free(wcmd);
    vim_free(wcwd);
    return ret;
}


    static HINSTANCE
vim_shell_execute(
    char *cmd,
    INT	 n_show_cmd)
{
    HINSTANCE	ret;
    WCHAR	*wcmd;

    wcmd = enc_to_utf16((char_u *)cmd, NULL);
    if (wcmd == NULL)
	return (HINSTANCE) 0;

    ret = ShellExecuteW(NULL, NULL, wcmd, NULL, NULL, n_show_cmd);
    vim_free(wcmd);
    return ret;
}


#if defined(FEAT_GUI_MSWIN) || defined(PROTO)


    static int
mch_system_classic(char *cmd, int options)
{
    STARTUPINFO		si;
    PROCESS_INFORMATION pi;
    DWORD		ret = 0;
    HWND		hwnd = GetFocus();

    si.cb = sizeof(si);
    si.lpReserved = NULL;
    si.lpDesktop = NULL;
    si.lpTitle = NULL;
    si.dwFlags = STARTF_USESHOWWINDOW;
    
    if (options & SHELL_DOOUT)
	si.wShowWindow = SW_SHOWMINNOACTIVE;
    else
	si.wShowWindow = SW_SHOWNORMAL;
    si.cbReserved2 = 0;
    si.lpReserved2 = NULL;

    
    vim_create_process(cmd, FALSE,
	    CREATE_DEFAULT_ERROR_MODE |	CREATE_NEW_CONSOLE,
	    &si, &pi, NULL, NULL);

    
    {
# ifdef FEAT_GUI
	int	    delay = 1;

	
	for (;;)
	{
	    MSG	msg;

	    if (PeekMessageW(&msg, (HWND)NULL, 0, 0, PM_REMOVE))
	    {
		TranslateMessage(&msg);
		DispatchMessageW(&msg);
		delay = 1;
		continue;
	    }
	    if (WaitForSingleObject(pi.hProcess, delay) != WAIT_TIMEOUT)
		break;

	    
	    
	    
	    if (delay < 50)
		delay += 10;
	}
# else
	WaitForSingleObject(pi.hProcess, INFINITE);
# endif

	
	GetExitCodeProcess(pi.hProcess, &ret);
    }

    
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    
    PostMessage(hwnd, WM_SETFOCUS, 0, 0);

    return ret;
}


    static unsigned int __stdcall
sub_process_writer(LPVOID param)
{
    HANDLE	    g_hChildStd_IN_Wr = param;
    linenr_T	    lnum = curbuf->b_op_start.lnum;
    DWORD	    len = 0;
    DWORD	    l;
    char_u	    *lp = ml_get(lnum);
    char_u	    *s;
    int		    written = 0;

    for (;;)
    {
	l = (DWORD)STRLEN(lp + written);
	if (l == 0)
	    len = 0;
	else if (lp[written] == NL)
	{
	    
	    WriteFile(g_hChildStd_IN_Wr, "", 1, &len, NULL);
	}
	else
	{
	    s = vim_strchr(lp + written, NL);
	    WriteFile(g_hChildStd_IN_Wr, (char *)lp + written,
		      s == NULL ? l : (DWORD)(s - (lp + written)),
		      &len, NULL);
	}
	if (len == l)
	{
	    
	    
	    if (lnum != curbuf->b_op_end.lnum
		|| (!curbuf->b_p_bin
		    && curbuf->b_p_fixeol)
		|| (lnum != curbuf->b_no_eol_lnum
		    && (lnum != curbuf->b_ml.ml_line_count
			|| curbuf->b_p_eol)))
	    {
		WriteFile(g_hChildStd_IN_Wr, "\n", 1,
						  (LPDWORD)&vim_ignored, NULL);
	    }

	    ++lnum;
	    if (lnum > curbuf->b_op_end.lnum)
		break;

	    lp = ml_get(lnum);
	    written = 0;
	}
	else if (len > 0)
	    written += len;
    }

    
    CloseHandle(g_hChildStd_IN_Wr);
    return 0;
}


# define BUFLEN 100	


    static void
dump_pipe(int	    options,
	  HANDLE    g_hChildStd_OUT_Rd,
	  garray_T  *ga,
	  char_u    buffer[],
	  DWORD	    *buffer_off)
{
    DWORD	availableBytes = 0;
    DWORD	i;
    int		ret;
    DWORD	len;
    DWORD	toRead;

    
    
    ret = PeekNamedPipe(g_hChildStd_OUT_Rd, 
			NULL,		    
			0,		    
			NULL,		    
			&availableBytes,    
			NULL);		    

    
    while (ret != 0 && availableBytes > 0)
    {
	toRead = (DWORD)(BUFLEN - *buffer_off);
	toRead = availableBytes < toRead ? availableBytes : toRead;
	ReadFile(g_hChildStd_OUT_Rd, buffer + *buffer_off, toRead , &len, NULL);

	
	if (len == 0)
	    break;

	availableBytes -= len;

	if (options & SHELL_READ)
	{
	    
	    
	    for (i = 0; i < len; ++i)
	    {
		if (buffer[i] == NL)
		    append_ga_line(ga);
		else if (buffer[i] == NUL)
		    ga_append(ga, NL);
		else
		    ga_append(ga, buffer[i]);
	    }
	}
	else if (has_mbyte)
	{
	    int		l;
	    int		c;
	    char_u	*p;

	    len += *buffer_off;
	    buffer[len] = NUL;

	    
	    
	    
	    for (p = buffer; p < buffer + len; p += l)
	    {
		l = MB_CPTR2LEN(p);
		if (l == 0)
		    l = 1;  
		else if (MB_BYTE2LEN(*p) != l)
		    break;
	    }
	    if (p == buffer)	
	    {
		
		if (len >= 12)
		    ++p;
		else
		{
		    *buffer_off = len;
		    return;
		}
	    }
	    c = *p;
	    *p = NUL;
	    msg_puts((char *)buffer);
	    if (p < buffer + len)
	    {
		*p = c;
		*buffer_off = (DWORD)((buffer + len) - p);
		mch_memmove(buffer, p, *buffer_off);
		return;
	    }
	    *buffer_off = 0;
	}
	else
	{
	    buffer[len] = NUL;
	    msg_puts((char *)buffer);
	}

	windgoto(msg_row, msg_col);
	cursor_on();
	out_flush();
    }
}


    static int
mch_system_piped(char *cmd, int options)
{
    STARTUPINFO		si;
    PROCESS_INFORMATION pi;
    DWORD		ret = 0;

    HANDLE g_hChildStd_IN_Rd = NULL;
    HANDLE g_hChildStd_IN_Wr = NULL;
    HANDLE g_hChildStd_OUT_Rd = NULL;
    HANDLE g_hChildStd_OUT_Wr = NULL;

    char_u	buffer[BUFLEN + 1]; 
    DWORD	len;

    
    char_u	ta_buf[BUFLEN + 1];	
    int		ta_len = 0;		

    DWORD	i;
    int		noread_cnt = 0;
    garray_T	ga;
    int		delay = 1;
    DWORD	buffer_off = 0;	
    char	*p = NULL;

    SECURITY_ATTRIBUTES saAttr;

    
    saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
    saAttr.bInheritHandle = TRUE;
    saAttr.lpSecurityDescriptor = NULL;

    if ( ! CreatePipe(&g_hChildStd_OUT_Rd, &g_hChildStd_OUT_Wr, &saAttr, 0)
	
       || ! SetHandleInformation(g_hChildStd_OUT_Rd, HANDLE_FLAG_INHERIT, 0)
	
       || ! CreatePipe(&g_hChildStd_IN_Rd, &g_hChildStd_IN_Wr, &saAttr, 0)
	
       || ! SetHandleInformation(g_hChildStd_IN_Wr, HANDLE_FLAG_INHERIT, 0) )
    {
	CloseHandle(g_hChildStd_IN_Rd);
	CloseHandle(g_hChildStd_IN_Wr);
	CloseHandle(g_hChildStd_OUT_Rd);
	CloseHandle(g_hChildStd_OUT_Wr);
	msg_puts(_("\nCannot create pipes\n"));
    }

    si.cb = sizeof(si);
    si.lpReserved = NULL;
    si.lpDesktop = NULL;
    si.lpTitle = NULL;
    si.dwFlags = STARTF_USESHOWWINDOW | STARTF_USESTDHANDLES;

    
    si.hStdError = g_hChildStd_OUT_Wr;
    si.hStdOutput = g_hChildStd_OUT_Wr;
    si.hStdInput = g_hChildStd_IN_Rd;
    si.wShowWindow = SW_HIDE;
    si.cbReserved2 = 0;
    si.lpReserved2 = NULL;

    if (options & SHELL_READ)
	ga_init2(&ga, 1, BUFLEN);

    if (cmd != NULL)
    {
	p = (char *)vim_strsave((char_u *)cmd);
	if (p != NULL)
	    unescape_shellxquote((char_u *)p, p_sxe);
	else
	    p = cmd;
    }

    
    
    
    
     vim_create_process(p, TRUE, CREATE_DEFAULT_ERROR_MODE,
	     &si, &pi, NULL, NULL);

    if (p != cmd)
	vim_free(p);

    
    CloseHandle(g_hChildStd_IN_Rd);
    CloseHandle(g_hChildStd_OUT_Wr);

    if (options & SHELL_WRITE)
    {
	HANDLE thread = (HANDLE)
	 _beginthreadex(NULL,  
			0,     
			sub_process_writer, 
			g_hChildStd_IN_Wr,  
			0,		 
			NULL);		    
	CloseHandle(thread);
	g_hChildStd_IN_Wr = NULL;
    }

    
    for (;;)
    {
	MSG	msg;

	if (PeekMessageW(&msg, (HWND)NULL, 0, 0, PM_REMOVE))
	{
	    TranslateMessage(&msg);
	    DispatchMessageW(&msg);
	}

	
	if ((options & (SHELL_READ|SHELL_WRITE))
# ifdef FEAT_GUI
		|| gui.in_use
# endif
	    )
	{
	    len = 0;
	    if (((options &
			(SHELL_READ|SHELL_WRITE|SHELL_COOKED))
		    != (SHELL_READ|SHELL_WRITE|SHELL_COOKED)
# ifdef FEAT_GUI
		    || gui.in_use
# endif
		    )
		&& (ta_len > 0 || noread_cnt > 4))
	    {
		if (ta_len == 0)
		{
		    
		    
		    noread_cnt = 0;
		    len = ui_inchar(ta_buf, BUFLEN, 10L, 0);
		}
		if (ta_len > 0 || len > 0)
		{
		    
		    if (len == 1 && cmd != NULL)
		    {
			if (ta_buf[ta_len] == Ctrl_C)
			{
			    
			
			    TerminateProcess(pi.hProcess, 9);
			}
		    }

		    
		    if ((len == 1 || len == 4 ) && cmd != NULL)
		    {
			if (ta_buf[0] == Ctrl_D
			    || (ta_buf[0] == CSI
				&& ta_buf[1] == KS_MODIFIER
				&& ta_buf[3] == Ctrl_D))
			{
			    CloseHandle(g_hChildStd_IN_Wr);
			    g_hChildStd_IN_Wr = NULL;
			    len = 0;
			}
		    }

		    len = term_replace_keycodes(ta_buf, ta_len, len);

		    
		    for (i = ta_len; i < ta_len + len; ++i)
		    {
			if (ta_buf[i] == '\n' || ta_buf[i] == '\b')
			    msg_putchar(ta_buf[i]);
			else if (has_mbyte)
			{
			    int l = (*mb_ptr2len)(ta_buf + i);

			    msg_outtrans_len(ta_buf + i, l);
			    i += l - 1;
			}
			else
			    msg_outtrans_len(ta_buf + i, 1);
		    }
		    windgoto(msg_row, msg_col);
		    out_flush();

		    ta_len += len;

		    
		    if (options & SHELL_WRITE)
			ta_len = 0;
		    else if (g_hChildStd_IN_Wr != NULL)
		    {
			WriteFile(g_hChildStd_IN_Wr, (char*)ta_buf,
				    1, &len, NULL);
			
			delay = 1;
			if (len > 0)
			{
			    ta_len -= len;
			    mch_memmove(ta_buf, ta_buf + len, ta_len);
			}
		    }
		}
	    }
	}

	if (ta_len)
	    ui_inchar_undo(ta_buf, ta_len);

	if (WaitForSingleObject(pi.hProcess, delay) != WAIT_TIMEOUT)
	{
	    dump_pipe(options, g_hChildStd_OUT_Rd, &ga, buffer, &buffer_off);
	    break;
	}

	++noread_cnt;
	dump_pipe(options, g_hChildStd_OUT_Rd, &ga, buffer, &buffer_off);

	
	
	
	if (delay < 50)
	    delay += 10;
    }

    
    CloseHandle(g_hChildStd_OUT_Rd);
    if (g_hChildStd_IN_Wr != NULL)
	CloseHandle(g_hChildStd_IN_Wr);

    WaitForSingleObject(pi.hProcess, INFINITE);

    
    GetExitCodeProcess(pi.hProcess, &ret);

    if (options & SHELL_READ)
    {
	if (ga.ga_len > 0)
	{
	    append_ga_line(&ga);
	    
	    curbuf->b_no_eol_lnum = curwin->w_cursor.lnum;
	}
	else
	    curbuf->b_no_eol_lnum = 0;
	ga_clear(&ga);
    }

    
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    return ret;
}

    static int
mch_system_g(char *cmd, int options)
{
    
    if (!p_stmp)
	return mch_system_piped(cmd, options);
    else
	return mch_system_classic(cmd, options);
}
#endif

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)
    static int
mch_system_c(char *cmd, int options UNUSED)
{
    int		ret;
    WCHAR	*wcmd;
    char_u	*buf;
    size_t	len;

    
    
    len = STRLEN(cmd);
    if (len >= 2 && cmd[0] == '"' && cmd[len - 1] == '"')
    {
	len += 3;
	buf = alloc(len);
	if (buf == NULL)
	    return -1;
	vim_snprintf((char *)buf, len, "(%s)", cmd);
	wcmd = enc_to_utf16(buf, NULL);
	free(buf);
    }
    else
	wcmd = enc_to_utf16((char_u *)cmd, NULL);

    if (wcmd == NULL)
	return -1;

    ret = _wsystem(wcmd);
    vim_free(wcmd);
    return ret;
}

#endif

    static int
mch_system(char *cmd, int options)
{
#ifdef VIMDLL
    if (gui.in_use || gui.starting)
	return mch_system_g(cmd, options);
    else
	return mch_system_c(cmd, options);
#elif defined(FEAT_GUI_MSWIN)
    return mch_system_g(cmd, options);
#else
    return mch_system_c(cmd, options);
#endif
}

#if defined(FEAT_GUI) && defined(FEAT_TERMINAL)

    static int
mch_call_shell_terminal(
    char_u	*cmd,
    int		options UNUSED)	
{
    jobopt_T	opt;
    char_u	*newcmd = NULL;
    typval_T	argvar[2];
    long_u	cmdlen;
    int		retval = -1;
    buf_T	*buf;
    job_T	*job;
    aco_save_T	aco;
    oparg_T	oa;		

    if (cmd == NULL)
	cmdlen = STRLEN(p_sh) + 1;
    else
	cmdlen = STRLEN(p_sh) + STRLEN(p_shcf) + STRLEN(cmd) + 10;
    newcmd = alloc(cmdlen);
    if (newcmd == NULL)
	return 255;
    if (cmd == NULL)
    {
	STRCPY(newcmd, p_sh);
	ch_log(NULL, "starting terminal to run a shell");
    }
    else
    {
	vim_snprintf((char *)newcmd, cmdlen, "%s %s %s", p_sh, p_shcf, cmd);
	ch_log(NULL, "starting terminal for system command '%s'", cmd);
    }

    init_job_options(&opt);

    argvar[0].v_type = VAR_STRING;
    argvar[0].vval.v_string = newcmd;
    argvar[1].v_type = VAR_UNKNOWN;
    buf = term_start(argvar, NULL, &opt, TERM_START_SYSTEM);
    if (buf == NULL)
    {
	vim_free(newcmd);
	return 255;
    }

    job = term_getjob(buf->b_term);
    ++job->jv_refcount;

    
    aucmd_prepbuf(&aco, buf);
    if (curbuf == buf)
    {
	
	clear_oparg(&oa);
	while (term_use_loop())
	{
	    if (oa.op_type == OP_NOP && oa.regname == NUL && !VIsual_active)
	    {
		
		
		if (terminal_loop(TRUE) == OK)
		    normal_cmd(&oa, TRUE);
	    }
	    else
		normal_cmd(&oa, TRUE);
	}
	retval = job->jv_exitval;
	ch_log(NULL, "system command finished");

	job_unref(job);

	
	aucmd_restbuf(&aco);
    }

    wait_return(TRUE);
    do_buffer(DOBUF_WIPE, DOBUF_FIRST, FORWARD, buf->b_fnum, TRUE);

    vim_free(newcmd);
    return retval;
}
#endif


    int
mch_call_shell(
    char_u  *cmd,
    int	    options)	
{
    int		x = 0;
    int		tmode = cur_tmode;
    WCHAR	szShellTitle[512];

#ifdef FEAT_EVAL
    ch_log(NULL, "executing shell command: %s", cmd);
#endif
    
    if (GetConsoleTitleW(szShellTitle, ARRAY_LENGTH(szShellTitle) - 4) > 0)
    {
	if (cmd == NULL)
	    wcscat(szShellTitle, L" :sh");
	else
	{
	    WCHAR *wn = enc_to_utf16((char_u *)cmd, NULL);

	    if (wn != NULL)
	    {
		wcscat(szShellTitle, L" - !");
		if ((wcslen(szShellTitle) + wcslen(wn) <
			    ARRAY_LENGTH(szShellTitle)))
		    wcscat(szShellTitle, wn);
		SetConsoleTitleW(szShellTitle);
		vim_free(wn);
	    }
	}
    }

    out_flush();

#ifdef MCH_WRITE_DUMP
    if (fdDump)
    {
	fprintf(fdDump, "mch_call_shell(\"%s\", %d)\n", cmd, options);
	fflush(fdDump);
    }
#endif
#if defined(FEAT_GUI) && defined(FEAT_TERMINAL)
    
    if (
# ifdef VIMDLL
	    gui.in_use &&
# endif
	    vim_strchr(p_go, GO_TERMINAL) != NULL
	 && (options & (SHELL_FILTER|SHELL_DOOUT|SHELL_WRITE|SHELL_READ)) == 0)
    {
	char_u	*cmdbase = cmd;

	if (cmdbase != NULL)
	    
	    while (*cmdbase == '"' || *cmdbase == '(')
		++cmdbase;

	
	if (cmdbase == NULL || STRNICMP(cmdbase, "start", 5) != 0
						   || !VIM_ISWHITE(cmdbase[5]))
	{
	    
	    x = mch_call_shell_terminal(cmd, options);
	    resettitle();
	    return x;
	}
    }
#endif

    
    mch_signal(SIGINT, SIG_IGN);
    mch_signal(SIGBREAK, SIG_IGN);
    mch_signal(SIGILL, SIG_IGN);
    mch_signal(SIGFPE, SIG_IGN);
    mch_signal(SIGSEGV, SIG_IGN);
    mch_signal(SIGTERM, SIG_IGN);
    mch_signal(SIGABRT, SIG_IGN);

    if (options & SHELL_COOKED)
	settmode(TMODE_COOK);	

    if (cmd == NULL)
    {
	x = mch_system((char *)p_sh, options);
    }
    else
    {
	
	char_u	*newcmd = NULL;
	char_u	*cmdbase = cmd;
	long_u	cmdlen;

	
	if (*cmdbase == '"' )
	    ++cmdbase;
	if (*cmdbase == '(')
	    ++cmdbase;

	if ((STRNICMP(cmdbase, "start", 5) == 0) && VIM_ISWHITE(cmdbase[5]))
	{
	    STARTUPINFO		si;
	    PROCESS_INFORMATION	pi;
	    DWORD		flags = CREATE_NEW_CONSOLE;
	    INT			n_show_cmd = SW_SHOWNORMAL;
	    char_u		*p;

	    ZeroMemory(&si, sizeof(si));
	    si.cb = sizeof(si);
	    si.lpReserved = NULL;
	    si.lpDesktop = NULL;
	    si.lpTitle = NULL;
	    si.dwFlags = 0;
	    si.cbReserved2 = 0;
	    si.lpReserved2 = NULL;

	    cmdbase = skipwhite(cmdbase + 5);
	    if ((STRNICMP(cmdbase, "/min", 4) == 0)
		    && VIM_ISWHITE(cmdbase[4]))
	    {
		cmdbase = skipwhite(cmdbase + 4);
		si.dwFlags = STARTF_USESHOWWINDOW;
		si.wShowWindow = SW_SHOWMINNOACTIVE;
		n_show_cmd = SW_SHOWMINNOACTIVE;
	    }
	    else if ((STRNICMP(cmdbase, "/b", 2) == 0)
		    && VIM_ISWHITE(cmdbase[2]))
	    {
		cmdbase = skipwhite(cmdbase + 2);
		flags = CREATE_NO_WINDOW;
		si.dwFlags = STARTF_USESTDHANDLES;
		si.hStdInput = CreateFile("\\\\.\\NUL",	
		    GENERIC_READ,			
		    0,					
		    NULL,				
		    OPEN_EXISTING,			
		    FILE_ATTRIBUTE_NORMAL,		
		    NULL);				
		si.hStdOutput = si.hStdInput;
		si.hStdError = si.hStdInput;
	    }

	    
	    
	    if (cmdbase > cmd)
	    {
		p = cmdbase + STRLEN(cmdbase);
		if (p > cmdbase && p[-1] == '"' && *cmd == '"')
		    *--p = NUL;
		if (p > cmdbase && p[-1] == ')'
			&& (*cmd =='(' || cmd[1] == '('))
		    *--p = NUL;
	    }

	    newcmd = cmdbase;
	    unescape_shellxquote(cmdbase, p_sxe);

	    
	    if (flags != CREATE_NEW_CONSOLE)
	    {
		char_u	*subcmd;
		char_u	*cmd_shell = mch_getenv("COMSPEC");

		if (cmd_shell == NULL || *cmd_shell == NUL)
		    cmd_shell = (char_u *)default_shell();

		subcmd = vim_strsave_escaped_ext(cmdbase,
			(char_u *)"|", '^', FALSE);
		if (subcmd != NULL)
		{
		    
		    cmdlen = STRLEN(cmd_shell) + STRLEN(subcmd) + 5;
		    newcmd = alloc(cmdlen);
		    if (newcmd != NULL)
			vim_snprintf((char *)newcmd, cmdlen, "%s /c %s",
						       cmd_shell, subcmd);
		    else
			newcmd = cmdbase;
		    vim_free(subcmd);
		}
	    }

	    
	    if (vim_create_process((char *)newcmd, FALSE, flags,
			&si, &pi, NULL, NULL))
		x = 0;
	    else if (vim_shell_execute((char *)newcmd, n_show_cmd)
							       > (HINSTANCE)32)
		x = 0;
	    else
	    {
		x = -1;
#ifdef FEAT_GUI_MSWIN
# ifdef VIMDLL
		if (gui.in_use)
# endif
		    emsg(_(e_command_not_found));
#endif
	    }

	    if (newcmd != cmdbase)
		vim_free(newcmd);

	    if (si.dwFlags == STARTF_USESTDHANDLES && si.hStdInput != NULL)
	    {
		
		CloseHandle(si.hStdInput);
	    }
	    
	    CloseHandle(pi.hThread);
	    CloseHandle(pi.hProcess);
	}
	else
	{
	    cmdlen =
#ifdef FEAT_GUI_MSWIN
		((gui.in_use || gui.starting) ?
		    (!s_dont_use_vimrun && p_stmp ?
			STRLEN(vimrun_path) : STRLEN(p_sh) + STRLEN(p_shcf))
		    : 0) +
#endif
		STRLEN(p_sh) + STRLEN(p_shcf) + STRLEN(cmd) + 10;

	    newcmd = alloc(cmdlen);
	    if (newcmd != NULL)
	    {
#if defined(FEAT_GUI_MSWIN)
		if (
# ifdef VIMDLL
		    (gui.in_use || gui.starting) &&
# endif
		    need_vimrun_warning)
		{
		    char *msg = _("VIMRUN.EXE not found in your $PATH.\n"
			"External commands will not pause after completion.\n"
			"See  :help win32-vimrun  for more information.");
		    char *title = _("Vim Warning");
		    WCHAR *wmsg = enc_to_utf16((char_u *)msg, NULL);
		    WCHAR *wtitle = enc_to_utf16((char_u *)title, NULL);

		    if (wmsg != NULL && wtitle != NULL)
			MessageBoxW(NULL, wmsg, wtitle, MB_ICONWARNING);
		    vim_free(wmsg);
		    vim_free(wtitle);
		    need_vimrun_warning = FALSE;
		}
		if (
# ifdef VIMDLL
		    (gui.in_use || gui.starting) &&
# endif
		    !s_dont_use_vimrun && p_stmp)
		    
		    
		    vim_snprintf((char *)newcmd, cmdlen, "%s%s%s %s %s",
			    vimrun_path,
			    (msg_silent != 0 || (options & SHELL_DOOUT))
								 ? "-s " : "",
			    p_sh, p_shcf, cmd);
		else if (
# ifdef VIMDLL
			(gui.in_use || gui.starting) &&
# endif
			s_dont_use_vimrun && STRCMP(p_shcf, "/c") == 0)
		    
		    vim_snprintf((char *)newcmd, cmdlen, "%s %s %s %s %s",
					   p_sh, p_shcf, p_sh, p_shcf, cmd);
		else
#endif
		    vim_snprintf((char *)newcmd, cmdlen, "%s %s %s",
							   p_sh, p_shcf, cmd);
		x = mch_system((char *)newcmd, options);
		vim_free(newcmd);
	    }
	}
    }

    if (tmode == TMODE_RAW)
    {
	
	cur_tmode = TMODE_UNKNOWN;
	settmode(TMODE_RAW);	
    }

    
    if (x != 0 && !(options & SHELL_SILENT) && !emsg_silent
#if defined(FEAT_GUI_MSWIN)
	    && ((gui.in_use || gui.starting) ?
		((options & SHELL_DOOUT) || s_dont_use_vimrun || !p_stmp) : 1)
#endif
	    )
    {
	smsg(_("shell returned %d"), x);
	msg_putchar('\n');
    }
    resettitle();

    mch_signal(SIGINT, SIG_DFL);
    mch_signal(SIGBREAK, SIG_DFL);
    mch_signal(SIGILL, SIG_DFL);
    mch_signal(SIGFPE, SIG_DFL);
    mch_signal(SIGSEGV, SIG_DFL);
    mch_signal(SIGTERM, SIG_DFL);
    mch_signal(SIGABRT, SIG_DFL);

    return x;
}

#if defined(FEAT_JOB_CHANNEL) || defined(PROTO)
    static HANDLE
job_io_file_open(
	char_u *fname,
	DWORD dwDesiredAccess,
	DWORD dwShareMode,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition,
	DWORD dwFlagsAndAttributes)
{
    HANDLE h;
    WCHAR *wn;

    wn = enc_to_utf16(fname, NULL);
    if (wn == NULL)
	return INVALID_HANDLE_VALUE;

    h = CreateFileW(wn, dwDesiredAccess, dwShareMode,
	    lpSecurityAttributes, dwCreationDisposition,
	    dwFlagsAndAttributes, NULL);
    vim_free(wn);
    return h;
}


    void
win32_build_env(dict_T *env, garray_T *gap, int is_terminal)
{
    hashitem_T	*hi;
    long_u	todo = env != NULL ? env->dv_hashtab.ht_used : 0;
    LPVOID	base = GetEnvironmentStringsW();

    
    if (ga_grow(gap, 1) == FAIL)
	return;

    if (env != NULL)
    {
	FOR_ALL_HASHTAB_ITEMS(&env->dv_hashtab, hi, todo)
	{
	    if (!HASHITEM_EMPTY(hi))
	    {
		typval_T *item = &dict_lookup(hi)->di_tv;
		WCHAR   *wkey = enc_to_utf16((char_u *)hi->hi_key, NULL);
		WCHAR   *wval = enc_to_utf16(tv_get_string(item), NULL);
		--todo;
		if (wkey != NULL && wval != NULL)
		{
		    size_t	n;
		    size_t	lkey = wcslen(wkey);
		    size_t	lval = wcslen(wval);

		    if (ga_grow(gap, (int)(lkey + lval + 2)) == FAIL)
			continue;
		    for (n = 0; n < lkey; n++)
			*((WCHAR*)gap->ga_data + gap->ga_len++) = wkey[n];
		    *((WCHAR*)gap->ga_data + gap->ga_len++) = L'=';
		    for (n = 0; n < lval; n++)
			*((WCHAR*)gap->ga_data + gap->ga_len++) = wval[n];
		    *((WCHAR*)gap->ga_data + gap->ga_len++) = L'\0';
		}
		vim_free(wkey);
		vim_free(wval);
	    }
	}
    }

    if (base)
    {
	WCHAR	*p = (WCHAR*) base;

	
	if (ga_grow(gap, 1) == FAIL)
	    return;

	while (*p != 0 || *(p + 1) != 0)
	{
	    if (ga_grow(gap, 1) == OK)
		*((WCHAR*)gap->ga_data + gap->ga_len++) = *p;
	    p++;
	}
	FreeEnvironmentStringsW(base);
	*((WCHAR*)gap->ga_data + gap->ga_len++) = L'\0';
    }

# if defined(FEAT_CLIENTSERVER) || defined(FEAT_TERMINAL)
    {
#  ifdef FEAT_CLIENTSERVER
	char_u	*servername = get_vim_var_str(VV_SEND_SERVER);
	size_t	servername_len = STRLEN(servername);
#  endif
#  ifdef FEAT_TERMINAL
	char_u	*version = get_vim_var_str(VV_VERSION);
	size_t	version_len = STRLEN(version);
#  endif
	
	
	
	size_t	n = 0
#  ifdef FEAT_CLIENTSERVER
		    + 15 + servername_len
#  endif
#  ifdef FEAT_TERMINAL
		    + 13 + version_len + 2
#  endif
		    ;

	if (ga_grow(gap, (int)n) == OK)
	{
#  ifdef FEAT_CLIENTSERVER
	    for (n = 0; n < 15; n++)
		*((WCHAR*)gap->ga_data + gap->ga_len++) =
		    (WCHAR)"VIM_SERVERNAME="[n];
	    for (n = 0; n < servername_len; n++)
		*((WCHAR*)gap->ga_data + gap->ga_len++) =
		    (WCHAR)servername[n];
	    *((WCHAR*)gap->ga_data + gap->ga_len++) = L'\0';
#  endif
#  ifdef FEAT_TERMINAL
	    if (is_terminal)
	    {
		for (n = 0; n < 13; n++)
		    *((WCHAR*)gap->ga_data + gap->ga_len++) =
			(WCHAR)"VIM_TERMINAL="[n];
		for (n = 0; n < version_len; n++)
		    *((WCHAR*)gap->ga_data + gap->ga_len++) =
			(WCHAR)version[n];
		*((WCHAR*)gap->ga_data + gap->ga_len++) = L'\0';
	    }
#  endif
	}
    }
# endif
}


    static BOOL
create_pipe_pair(HANDLE handles[2])
{
    static LONG		s;
    char		name[64];
    SECURITY_ATTRIBUTES sa;

    sprintf(name, "\\\\?\\pipe\\vim-%08lx-%08lx",
	    GetCurrentProcessId(),
	    InterlockedIncrement(&s));

    
    handles[1] = CreateNamedPipe(
	    name,
	    PIPE_ACCESS_OUTBOUND | FILE_FLAG_OVERLAPPED,
	    PIPE_TYPE_BYTE | PIPE_NOWAIT,
	    1, MAX_NAMED_PIPE_SIZE, 0, 0, NULL);

    if (handles[1] == INVALID_HANDLE_VALUE)
	return FALSE;

    sa.nLength = sizeof(sa);
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;

    handles[0] = CreateFile(name,
	    FILE_GENERIC_READ,
	    FILE_SHARE_READ, &sa,
	    OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);

    if (handles[0] == INVALID_HANDLE_VALUE)
    {
	CloseHandle(handles[1]);
	return FALSE;
    }

    return TRUE;
}

    void
mch_job_start(char *cmd, job_T *job, jobopt_T *options)
{
    STARTUPINFO		si;
    PROCESS_INFORMATION	pi;
    HANDLE		jo;
    SECURITY_ATTRIBUTES saAttr;
    channel_T		*channel = NULL;
    HANDLE		ifd[2];
    HANDLE		ofd[2];
    HANDLE		efd[2];
    garray_T		ga;

    int		use_null_for_in = options->jo_io[PART_IN] == JIO_NULL;
    int		use_null_for_out = options->jo_io[PART_OUT] == JIO_NULL;
    int		use_null_for_err = options->jo_io[PART_ERR] == JIO_NULL;
    int		use_file_for_in = options->jo_io[PART_IN] == JIO_FILE;
    int		use_file_for_out = options->jo_io[PART_OUT] == JIO_FILE;
    int		use_file_for_err = options->jo_io[PART_ERR] == JIO_FILE;
    int		use_out_for_err = options->jo_io[PART_ERR] == JIO_OUT;

    if (use_out_for_err && use_null_for_out)
	use_null_for_err = TRUE;

    ifd[0] = INVALID_HANDLE_VALUE;
    ifd[1] = INVALID_HANDLE_VALUE;
    ofd[0] = INVALID_HANDLE_VALUE;
    ofd[1] = INVALID_HANDLE_VALUE;
    efd[0] = INVALID_HANDLE_VALUE;
    efd[1] = INVALID_HANDLE_VALUE;
    ga_init2(&ga, sizeof(wchar_t), 500);

    jo = CreateJobObject(NULL, NULL);
    if (jo == NULL)
    {
	job->jv_status = JOB_FAILED;
	goto failed;
    }

    if (options->jo_env != NULL)
	win32_build_env(options->jo_env, &ga, FALSE);

    ZeroMemory(&pi, sizeof(pi));
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    si.dwFlags |= STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_HIDE;

    saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
    saAttr.bInheritHandle = TRUE;
    saAttr.lpSecurityDescriptor = NULL;

    if (use_file_for_in)
    {
	char_u *fname = options->jo_io_name[PART_IN];

	ifd[0] = job_io_file_open(fname, GENERIC_READ,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		&saAttr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL);
	if (ifd[0] == INVALID_HANDLE_VALUE)
	{
	    semsg(_(e_cant_open_file_str), fname);
	    goto failed;
	}
    }
    else if (!use_null_for_in
	    && (!create_pipe_pair(ifd)
		|| !SetHandleInformation(ifd[1], HANDLE_FLAG_INHERIT, 0)))
	goto failed;

    if (use_file_for_out)
    {
	char_u *fname = options->jo_io_name[PART_OUT];

	ofd[1] = job_io_file_open(fname, GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		&saAttr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL);
	if (ofd[1] == INVALID_HANDLE_VALUE)
	{
	    semsg(_(e_cant_open_file_str), fname);
	    goto failed;
	}
    }
    else if (!use_null_for_out &&
	    (!CreatePipe(&ofd[0], &ofd[1], &saAttr, 0)
	    || !SetHandleInformation(ofd[0], HANDLE_FLAG_INHERIT, 0)))
	goto failed;

    if (use_file_for_err)
    {
	char_u *fname = options->jo_io_name[PART_ERR];

	efd[1] = job_io_file_open(fname, GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		&saAttr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL);
	if (efd[1] == INVALID_HANDLE_VALUE)
	{
	    semsg(_(e_cant_open_file_str), fname);
	    goto failed;
	}
    }
    else if (!use_out_for_err && !use_null_for_err &&
	    (!CreatePipe(&efd[0], &efd[1], &saAttr, 0)
	    || !SetHandleInformation(efd[0], HANDLE_FLAG_INHERIT, 0)))
	goto failed;

    si.dwFlags |= STARTF_USESTDHANDLES;
    si.hStdInput = ifd[0];
    si.hStdOutput = ofd[1];
    si.hStdError = use_out_for_err ? ofd[1] : efd[1];

    if (!use_null_for_in || !use_null_for_out || !use_null_for_err)
    {
	if (options->jo_set & JO_CHANNEL)
	{
	    channel = options->jo_channel;
	    if (channel != NULL)
		++channel->ch_refcount;
	}
	else
	    channel = add_channel();
	if (channel == NULL)
	    goto failed;
    }

    if (!vim_create_process(cmd, TRUE,
	    CREATE_SUSPENDED |
	    CREATE_DEFAULT_ERROR_MODE |
	    CREATE_NEW_PROCESS_GROUP |
	    CREATE_UNICODE_ENVIRONMENT |
	    CREATE_NEW_CONSOLE,
	    &si, &pi,
	    ga.ga_data,
	    (char *)options->jo_cwd))
    {
	CloseHandle(jo);
	job->jv_status = JOB_FAILED;
	goto failed;
    }

    ga_clear(&ga);

    if (!AssignProcessToJobObject(jo, pi.hProcess))
    {
	
	
	CloseHandle(jo);
	jo = NULL;
    }
    ResumeThread(pi.hThread);
    CloseHandle(pi.hThread);
    job->jv_proc_info = pi;
    job->jv_job_object = jo;
    job->jv_status = JOB_STARTED;

    CloseHandle(ifd[0]);
    CloseHandle(ofd[1]);
    if (!use_out_for_err && !use_null_for_err)
	CloseHandle(efd[1]);

    job->jv_channel = channel;
    if (channel != NULL)
    {
	channel_set_pipes(channel,
		      use_file_for_in || use_null_for_in
					      ? INVALID_FD : (sock_T)ifd[1],
		      use_file_for_out || use_null_for_out
					     ? INVALID_FD : (sock_T)ofd[0],
		      use_out_for_err || use_file_for_err || use_null_for_err
					    ? INVALID_FD : (sock_T)efd[0]);
	channel_set_job(channel, job, options);
    }
    return;

failed:
    CloseHandle(ifd[0]);
    CloseHandle(ofd[0]);
    CloseHandle(efd[0]);
    CloseHandle(ifd[1]);
    CloseHandle(ofd[1]);
    CloseHandle(efd[1]);
    channel_unref(channel);
    ga_clear(&ga);
}

    char *
mch_job_status(job_T *job)
{
    DWORD dwExitCode = 0;

    if (!GetExitCodeProcess(job->jv_proc_info.hProcess, &dwExitCode)
	    || dwExitCode != STILL_ACTIVE)
    {
	job->jv_exitval = (int)dwExitCode;
	if (job->jv_status < JOB_ENDED)
	{
	    ch_log(job->jv_channel, "Job ended");
	    job->jv_status = JOB_ENDED;
	}
	return "dead";
    }
    return "run";
}

    job_T *
mch_detect_ended_job(job_T *job_list)
{
    HANDLE jobHandles[MAXIMUM_WAIT_OBJECTS];
    job_T *jobArray[MAXIMUM_WAIT_OBJECTS];
    job_T *job = job_list;

    while (job != NULL)
    {
	DWORD n;
	DWORD result;

	for (n = 0; n < MAXIMUM_WAIT_OBJECTS
				       && job != NULL; job = job->jv_next)
	{
	    if (job->jv_status == JOB_STARTED)
	    {
		jobHandles[n] = job->jv_proc_info.hProcess;
		jobArray[n] = job;
		++n;
	    }
	}
	if (n == 0)
	    continue;
	result = WaitForMultipleObjects(n, jobHandles, FALSE, 0);
	if (result >= WAIT_OBJECT_0 && result < WAIT_OBJECT_0 + n)
	{
	    job_T *wait_job = jobArray[result - WAIT_OBJECT_0];

	    if (STRCMP(mch_job_status(wait_job), "dead") == 0)
		return wait_job;
	}
    }
    return NULL;
}

    static BOOL
terminate_all(HANDLE process, int code)
{
    PROCESSENTRY32  pe;
    HANDLE	    h = INVALID_HANDLE_VALUE;
    DWORD	    pid = GetProcessId(process);

    if (pid != 0)
    {
	h = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (h != INVALID_HANDLE_VALUE)
	{
	    pe.dwSize = sizeof(PROCESSENTRY32);
	    if (!Process32First(h, &pe))
		goto theend;

	    do
	    {
		if (pe.th32ParentProcessID == pid)
		{
		    HANDLE ph = OpenProcess(
				  PROCESS_ALL_ACCESS, FALSE, pe.th32ProcessID);
		    if (ph != NULL)
		    {
			terminate_all(ph, code);
			CloseHandle(ph);
		    }
		}
	    } while (Process32Next(h, &pe));

	    CloseHandle(h);
	}
    }

theend:
    return TerminateProcess(process, code);
}


    int
mch_signal_job(job_T *job, char_u *how)
{
    int ret;

    if (STRCMP(how, "term") == 0 || STRCMP(how, "kill") == 0 || *how == NUL)
    {
	
	if (job->jv_job_object != NULL)
	{
	    if (job->jv_channel != NULL && job->jv_channel->ch_anonymous_pipe)
		job->jv_channel->ch_killing = TRUE;
	    return TerminateJobObject(job->jv_job_object, (UINT)-1) ? OK : FAIL;
	}
	return terminate_all(job->jv_proc_info.hProcess, -1) ? OK : FAIL;
    }

    if (!AttachConsole(job->jv_proc_info.dwProcessId))
	return FAIL;
    ret = GenerateConsoleCtrlEvent(
		STRCMP(how, "int") == 0 ? CTRL_C_EVENT : CTRL_BREAK_EVENT,
		job->jv_proc_info.dwProcessId)
	    ? OK : FAIL;
    FreeConsole();
    return ret;
}


    void
mch_clear_job(job_T *job)
{
    if (job->jv_status == JOB_FAILED)
	return;

    if (job->jv_job_object != NULL)
	CloseHandle(job->jv_job_object);
    CloseHandle(job->jv_proc_info.hProcess);
}
#endif


#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)


    static void
termcap_mode_start(void)
{
    DWORD cmodein;

    if (g_fTermcapMode)
	return;

    SaveConsoleBuffer(&g_cbNonTermcap);

    if (g_cbTermcap.IsValid)
    {
	
	RestoreConsoleBuffer(&g_cbTermcap, FALSE);
	reset_console_color_rgb();
	SetConsoleWindowInfo(g_hConOut, TRUE, &g_cbTermcap.Info.srWindow);
	Rows = g_cbTermcap.Info.dwSize.Y;
	Columns = g_cbTermcap.Info.dwSize.X;
    }
    else
    {
	
	ClearConsoleBuffer(g_attrCurrent);
	set_console_color_rgb();
	ResizeConBufAndWindow(g_hConOut, Columns, Rows);
    }

    resettitle();

    GetConsoleMode(g_hConIn, &cmodein);
    if (g_fMouseActive)
    {
	cmodein |= ENABLE_MOUSE_INPUT;
	cmodein &= ~ENABLE_QUICK_EDIT_MODE;
    }
    else
    {
	cmodein &= ~ENABLE_MOUSE_INPUT;
	cmodein |= g_cmodein & ENABLE_QUICK_EDIT_MODE;
    }
    cmodein |= ENABLE_WINDOW_INPUT;
    SetConsoleMode(g_hConIn, cmodein | ENABLE_EXTENDED_FLAGS);

    redraw_later_clear();
    g_fTermcapMode = TRUE;
}



    static void
termcap_mode_end(void)
{
    DWORD cmodein;
    ConsoleBuffer *cb;
    COORD coord;
    DWORD dwDummy;

    if (!g_fTermcapMode)
	return;

    SaveConsoleBuffer(&g_cbTermcap);

    GetConsoleMode(g_hConIn, &cmodein);
    cmodein &= ~(ENABLE_MOUSE_INPUT | ENABLE_WINDOW_INPUT);
    cmodein |= g_cmodein & ENABLE_QUICK_EDIT_MODE;
    SetConsoleMode(g_hConIn, cmodein | ENABLE_EXTENDED_FLAGS);

# ifdef FEAT_RESTORE_ORIG_SCREEN
    cb = exiting ? &g_cbOrig : &g_cbNonTermcap;
# else
    cb = &g_cbNonTermcap;
# endif
    RestoreConsoleBuffer(cb, p_rs);
    restore_console_color_rgb();

    
    if (exiting && use_alternate_screen_buffer)
	vtp_printf("\033[?1049l");

    if (!USE_WT && (p_rs || exiting))
    {
	
	coord.X = 0;
	coord.Y = (SHORT) (p_rs ? cb->Info.dwCursorPosition.Y : (Rows - 1));
	FillConsoleOutputCharacter(g_hConOut, ' ',
		cb->Info.dwSize.X, coord, &dwDummy);
	
	if (exiting && !p_rs)
	    coord.Y--;
	
	SetConsoleCursorPosition(g_hConOut, coord);
    }
    SetConsoleCursorInfo(g_hConOut, &g_cci);
    g_fTermcapMode = FALSE;
}
#endif 


#if defined(FEAT_GUI_MSWIN) && !defined(VIMDLL)
    void
mch_write(
    char_u  *s UNUSED,
    int	    len UNUSED)
{
    
}

#else


    static void
clear_chars(
    COORD coord,
    DWORD n)
{
    if (!vtp_working)
    {
	DWORD dwDummy;

	FillConsoleOutputCharacter(g_hConOut, ' ', n, coord, &dwDummy);
	FillConsoleOutputAttribute(g_hConOut, g_attrCurrent, n, coord,
								     &dwDummy);
    }
    else
    {
	set_console_color_rgb();
	gotoxy(coord.X + 1, coord.Y + 1);
	vtp_printf("\033[%dX", n);
    }
}



    static void
clear_screen(void)
{
    g_coord.X = g_coord.Y = 0;

    if (!vtp_working)
	clear_chars(g_coord, Rows * Columns);
    else
    {
	set_console_color_rgb();
	gotoxy(1, 1);
	vtp_printf("\033[2J");
    }
}



    static void
clear_to_end_of_display(void)
{
    COORD save = g_coord;

    if (!vtp_working)
	clear_chars(g_coord, (Rows - g_coord.Y - 1)
					   * Columns + (Columns - g_coord.X));
    else
    {
	set_console_color_rgb();
	gotoxy(g_coord.X + 1, g_coord.Y + 1);
	vtp_printf("\033[0J");

	gotoxy(save.X + 1, save.Y + 1);
	g_coord = save;
    }
}



    static void
clear_to_end_of_line(void)
{
    COORD save = g_coord;

    if (!vtp_working)
	clear_chars(g_coord, Columns - g_coord.X);
    else
    {
	set_console_color_rgb();
	gotoxy(g_coord.X + 1, g_coord.Y + 1);
	vtp_printf("\033[0K");

	gotoxy(save.X + 1, save.Y + 1);
	g_coord = save;
    }
}



    static void
scroll(unsigned cLines)
{
    COORD oldcoord = g_coord;

    gotoxy(g_srScrollRegion.Left + 1, g_srScrollRegion.Top + 1);
    delete_lines(cLines);

    g_coord = oldcoord;
}



    static void
set_scroll_region(
    unsigned left,
    unsigned top,
    unsigned right,
    unsigned bottom)
{
    if (left >= right
	    || top >= bottom
	    || right > (unsigned) Columns - 1
	    || bottom > (unsigned) Rows - 1)
	return;

    g_srScrollRegion.Left =   left;
    g_srScrollRegion.Top =    top;
    g_srScrollRegion.Right =  right;
    g_srScrollRegion.Bottom = bottom;
}

    static void
set_scroll_region_tb(
    unsigned top,
    unsigned bottom)
{
    if (top >= bottom || bottom > (unsigned)Rows - 1)
	return;

    g_srScrollRegion.Top = top;
    g_srScrollRegion.Bottom = bottom;
}

    static void
set_scroll_region_lr(
    unsigned left,
    unsigned right)
{
    if (left >= right || right > (unsigned)Columns - 1)
	return;

    g_srScrollRegion.Left = left;
    g_srScrollRegion.Right = right;
}



    static void
insert_lines(unsigned cLines)
{
    SMALL_RECT	    source, clip;
    COORD	    dest;
    CHAR_INFO	    fill;

    gotoxy(g_srScrollRegion.Left + 1, g_srScrollRegion.Top + 1);

    dest.X = g_srScrollRegion.Left;
    dest.Y = g_coord.Y + cLines;

    source.Left   = g_srScrollRegion.Left;
    source.Top	  = g_coord.Y;
    source.Right  = g_srScrollRegion.Right;
    source.Bottom = g_srScrollRegion.Bottom - cLines;

    clip.Left   = g_srScrollRegion.Left;
    clip.Top    = g_coord.Y;
    clip.Right  = g_srScrollRegion.Right;
    clip.Bottom = g_srScrollRegion.Bottom;

    fill.Char.AsciiChar = ' ';
    if (!USE_VTP)
	fill.Attributes = g_attrCurrent;
    else
	fill.Attributes = g_attrDefault;

    set_console_color_rgb();

    ScrollConsoleScreenBuffer(g_hConOut, &source, &clip, dest, &fill);

    
    
    
    
    
    

    if (source.Bottom < dest.Y)
    {
	COORD coord;
	int   i;

	coord.X = source.Left;
	for (i = clip.Top; i < dest.Y; ++i)
	{
	    coord.Y = i;
	    clear_chars(coord, source.Right - source.Left + 1);
	}
    }

    if (vtp_working)
    {
	COORD coord;
	int i;

	coord.X = source.Left;
	for (i = source.Top; i < dest.Y; ++i)
	{
	    coord.Y = i;
	    clear_chars(coord, source.Right - source.Left + 1);
	}
    }
}



    static void
delete_lines(unsigned cLines)
{
    SMALL_RECT	    source, clip;
    COORD	    dest;
    CHAR_INFO	    fill;
    int		    nb;

    gotoxy(g_srScrollRegion.Left + 1, g_srScrollRegion.Top + 1);

    dest.X = g_srScrollRegion.Left;
    dest.Y = g_coord.Y;

    source.Left   = g_srScrollRegion.Left;
    source.Top	  = g_coord.Y + cLines;
    source.Right  = g_srScrollRegion.Right;
    source.Bottom = g_srScrollRegion.Bottom;

    clip.Left   = g_srScrollRegion.Left;
    clip.Top    = g_coord.Y;
    clip.Right  = g_srScrollRegion.Right;
    clip.Bottom = g_srScrollRegion.Bottom;

    fill.Char.AsciiChar = ' ';
    if (!vtp_working)
	fill.Attributes = g_attrCurrent;
    else
	fill.Attributes = g_attrDefault;

    set_console_color_rgb();

    ScrollConsoleScreenBuffer(g_hConOut, &source, &clip, dest, &fill);

    
    

    nb = dest.Y + (source.Bottom - source.Top) + 1;

    if (nb < source.Top)
    {
	COORD coord;
	int   i;

	coord.X = source.Left;
	for (i = nb; i < clip.Bottom; ++i)
	{
	    coord.Y = i;
	    clear_chars(coord, source.Right - source.Left + 1);
	}
    }

    if (vtp_working)
    {
	COORD coord;
	int i;

	coord.X = source.Left;
	for (i = nb; i <= source.Bottom; ++i)
	{
	    coord.Y = i;
	    clear_chars(coord, source.Right - source.Left + 1);
	}
    }
}



    static void
gotoxy(
    unsigned x,
    unsigned y)
{
    if (x < 1 || x > (unsigned)Columns || y < 1 || y > (unsigned)Rows)
	return;

    if (!USE_VTP)
    {
	
	
	
	g_coord.X = 0;
	SetConsoleCursorPosition(g_hConOut, g_coord);

	
	g_coord.X = x - 1;
	g_coord.Y = y - 1;
	SetConsoleCursorPosition(g_hConOut, g_coord);
    }
    else
    {
	
	
	
	vtp_printf("\033[%d;%dH", g_coord.Y + 1, 1);

	vtp_printf("\033[%d;%dH", y, x);

	g_coord.X = x - 1;
	g_coord.Y = y - 1;
    }
}



    static void
textattr(WORD wAttr)
{
    g_attrCurrent = wAttr & 0xff;

    SetConsoleTextAttribute(g_hConOut, wAttr);
}


    static void
textcolor(WORD wAttr)
{
    g_attrCurrent = (g_attrCurrent & 0xf0) + (wAttr & 0x0f);

    if (!vtp_working)
	SetConsoleTextAttribute(g_hConOut, g_attrCurrent);
    else
	vtp_sgr_bulk(wAttr);
}


    static void
textbackground(WORD wAttr)
{
    g_attrCurrent = (g_attrCurrent & 0x0f) + ((wAttr & 0x0f) << 4);

    if (!vtp_working)
	SetConsoleTextAttribute(g_hConOut, g_attrCurrent);
    else
	vtp_sgr_bulk(wAttr);
}



    static void
normvideo(void)
{
    if (!vtp_working)
	textattr(g_attrDefault);
    else
	vtp_sgr_bulk(0);
}


static WORD g_attrPreStandout = 0;


    static void
standout(void)
{
    g_attrPreStandout = g_attrCurrent;

    textattr((WORD) (g_attrCurrent|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY));
}



    static void
standend(void)
{
    if (g_attrPreStandout)
	textattr(g_attrPreStandout);

    g_attrPreStandout = 0;
}



    void
mch_set_normal_colors(void)
{
    char_u	*p;
    int		n;

    cterm_normal_fg_color = (g_attrDefault & 0xf) + 1;
    cterm_normal_bg_color = ((g_attrDefault >> 4) & 0xf) + 1;
    if (
# ifdef FEAT_TERMGUICOLORS
	!p_tgc &&
# endif
	T_ME[0] == ESC && T_ME[1] == '|')
    {
	p = T_ME + 2;
	n = getdigits(&p);
	if (*p == 'm' && n > 0)
	{
	    cterm_normal_fg_color = (n & 0xf) + 1;
	    cterm_normal_bg_color = ((n >> 4) & 0xf) + 1;
	}
    }
# ifdef FEAT_TERMGUICOLORS
    cterm_normal_fg_gui_color = INVALCOLOR;
    cterm_normal_bg_gui_color = INVALCOLOR;
# endif
}



    static void
visual_bell(void)
{
    COORD   coordOrigin = {0, 0};
    WORD    attrFlash = ~g_attrCurrent & 0xff;

    DWORD   dwDummy;
    LPWORD  oldattrs = NULL;

# ifdef FEAT_TERMGUICOLORS
    if (!(p_tgc || t_colors >= 256))
# endif
    {
	oldattrs = ALLOC_MULT(WORD, Rows * Columns);
	if (oldattrs == NULL)
	    return;
	ReadConsoleOutputAttribute(g_hConOut, oldattrs, Rows * Columns,
			       coordOrigin, &dwDummy);
    }

    FillConsoleOutputAttribute(g_hConOut, attrFlash, Rows * Columns,
			       coordOrigin, &dwDummy);

    Sleep(15);	    

    if (oldattrs != NULL)
    {
	WriteConsoleOutputAttribute(g_hConOut, oldattrs, Rows * Columns,
				coordOrigin, &dwDummy);
	vim_free(oldattrs);
    }
}



    static void
cursor_visible(BOOL fVisible)
{
    s_cursor_visible = fVisible;

    if (vtp_working)
	vtp_printf("\033[?25%c", fVisible ? 'h' : 'l');

# ifdef MCH_CURSOR_SHAPE
    mch_update_cursor();
# endif
}



    static DWORD
write_chars(
    char_u *pchBuf,
    DWORD  cbToWrite)
{
    COORD	    coord = g_coord;
    DWORD	    written;
    DWORD	    n, cchwritten;
    static DWORD    cells;
    static WCHAR    *unicodebuf = NULL;
    static int	    unibuflen = 0;
    static int	    length;
    int		    cp = enc_utf8 ? CP_UTF8 : enc_codepage;
    static WCHAR    *utf8spbuf = NULL;
    static int	    utf8splength;
    static DWORD    utf8spcells;
    static WCHAR    **utf8usingbuf = &unicodebuf;

    if (cbToWrite != 1 || *pchBuf != ' ' || !enc_utf8)
    {
	utf8usingbuf = &unicodebuf;
	do
	{
	    length = MultiByteToWideChar(cp, 0, (LPCSTR)pchBuf, cbToWrite,
							unicodebuf, unibuflen);
	    if (length && length <= unibuflen)
		break;
	    vim_free(unicodebuf);
	    unicodebuf = length ? LALLOC_MULT(WCHAR, length) : NULL;
	    unibuflen = unibuflen ? 0 : length;
	} while (TRUE);
	cells = mb_string2cells(pchBuf, cbToWrite);
    }
    else 
    {
	if (utf8usingbuf != &utf8spbuf)
	{
	    if (utf8spbuf == NULL)
	    {
		cells = mb_string2cells((char_u *)" ", 1);
		length = MultiByteToWideChar(CP_UTF8, 0, " ", 1, NULL, 0);
		utf8spbuf = LALLOC_MULT(WCHAR, length);
		if (utf8spbuf != NULL)
		{
		    MultiByteToWideChar(CP_UTF8, 0, " ", 1, utf8spbuf, length);
		    utf8usingbuf = &utf8spbuf;
		    utf8splength = length;
		    utf8spcells = cells;
		}
	    }
	    else
	    {
		utf8usingbuf = &utf8spbuf;
		length = utf8splength;
		cells = utf8spcells;
	    }
	}
    }

    if (!USE_VTP)
    {
	FillConsoleOutputAttribute(g_hConOut, g_attrCurrent, cells,
				    coord, &written);
	
	
	if (WriteConsoleOutputCharacterW(g_hConOut, *utf8usingbuf, length,
		    coord, &cchwritten) == 0
		|| cchwritten == 0 || cchwritten == (DWORD)-1)
	    cchwritten = 1;
    }
    else
    {
	if (WriteConsoleW(g_hConOut, *utf8usingbuf, length, &cchwritten,
		    NULL) == 0 || cchwritten == 0)
	    cchwritten = 1;
    }

    if (cchwritten == (DWORD)length)
    {
	written = cbToWrite;
	g_coord.X += (SHORT)cells;
    }
    else
    {
	char_u *p = pchBuf;
	for (n = 0; n < cchwritten; n++)
	    MB_CPTR_ADV(p);
	written = p - pchBuf;
	g_coord.X += (SHORT)mb_string2cells(pchBuf, written);
    }

    while (g_coord.X > g_srScrollRegion.Right)
    {
	g_coord.X -= (SHORT) Columns;
	if (g_coord.Y < g_srScrollRegion.Bottom)
	    g_coord.Y++;
    }

    
    if (!USE_VTP)
	gotoxy(g_coord.X + 1, g_coord.Y + 1);

    return written;
}

    static char_u *
get_seq(
    int *args,
    int *count,
    char_u *head)
{
    int argc;
    char_u *p;

    if (head == NULL || *head != '\033')
	return NULL;

    argc = 0;
    p = head;
    ++p;
    do
    {
	++p;
	args[argc] = getdigits(&p);
	argc += (argc < 15) ? 1 : 0;
    } while (*p == ';');
    *count = argc;

    return p;
}

    static char_u *
get_sgr(
    int *args,
    int *count,
    char_u *head)
{
    char_u *p = get_seq(args, count, head);

    return (p && *p == 'm') ? ++p : NULL;
}


    static char_u *
sgrn2(
    char_u *head,
    int	   n)
{
    int argc;
    int args[16];
    char_u *p = get_sgr(args, &argc, head);

    return p && argc == 5 && args[0] == n && args[1] == 2 ? p : NULL;
}


    static char_u *
sgrnc(
    char_u *head,
    int	   n)
{
    int argc;
    int args[16];
    char_u *p = get_sgr(args, &argc, head);

    return p && argc == 1 && args[0] == n && (p = skipwhite(p)) && *p == '\033'
								    ? p : NULL;
}

    static char_u *
skipblank(char_u *q)
{
    char_u *p = q;

    while (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r')
	++p;
    return p;
}


    static char_u *
sgrn2c(
    char_u *head,
    int	   n)
{
    char_u *p = sgrn2(head, n);

    return p && *p != NUL && (p = skipblank(p)) && *p == '\033' ? p : NULL;
}


    static char_u *
sgrn2cn(
    char_u *head,
    int n)
{
    char_u *p = sgrn2(head, n);

    return p && p[0] == 0x0a && p[1] == '\033' ? ++p : NULL;
}


    void
mch_write(
    char_u  *s,
    int	    len)
{
    char_u  *end = s + len;

# ifdef VIMDLL
    if (gui.in_use)
	return;
# endif

    if (!term_console)
    {
	write(1, s, (unsigned)len);
	return;
    }

    
    while (len--)
    {
	int prefix = -1;
	char_u ch;

	
	
	if (len < 0)
	{
	    redraw_all_later(UPD_CLEAR);
	    return;
	}

	while (s + ++prefix < end)
	{
	    ch = s[prefix];
	    if (ch <= 0x1e && !(ch != '\n' && ch != '\r' && ch != '\b'
						&& ch != '\a' && ch != '\033'))
		break;
	}

	if (p_wd)
	{
	    WaitForChar(p_wd, FALSE);
	    if (prefix != 0)
		prefix = 1;
	}

	if (prefix != 0)
	{
	    DWORD nWritten;

	    nWritten = write_chars(s, prefix);
# ifdef MCH_WRITE_DUMP
	    if (fdDump)
	    {
		fputc('>', fdDump);
		fwrite(s, sizeof(char_u), nWritten, fdDump);
		fputs("<\n", fdDump);
	    }
# endif
	    len -= (nWritten - 1);
	    s += nWritten;
	}
	else if (s[0] == '\n')
	{
	    
	    if (g_coord.Y == g_srScrollRegion.Bottom)
	    {
		scroll(1);
		gotoxy(g_srScrollRegion.Left + 1, g_srScrollRegion.Bottom + 1);
	    }
	    else
	    {
		gotoxy(g_srScrollRegion.Left + 1, g_coord.Y + 2);
	    }
# ifdef MCH_WRITE_DUMP
	    if (fdDump)
		fputs("\\n\n", fdDump);
# endif
	    s++;
	}
	else if (s[0] == '\r')
	{
	    
	    gotoxy(g_srScrollRegion.Left+1, g_coord.Y + 1);
# ifdef MCH_WRITE_DUMP
	    if (fdDump)
		fputs("\\r\n", fdDump);
# endif
	    s++;
	}
	else if (s[0] == '\b')
	{
	    
	    if (g_coord.X > g_srScrollRegion.Left)
		g_coord.X--;
	    else if (g_coord.Y > g_srScrollRegion.Top)
	    {
		g_coord.X = g_srScrollRegion.Right;
		g_coord.Y--;
	    }
	    gotoxy(g_coord.X + 1, g_coord.Y + 1);
# ifdef MCH_WRITE_DUMP
	    if (fdDump)
		fputs("\\b\n", fdDump);
# endif
	    s++;
	}
	else if (s[0] == '\a')
	{
	    
	    MessageBeep(0xFFFFFFFF);
# ifdef MCH_WRITE_DUMP
	    if (fdDump)
		fputs("\\a\n", fdDump);
# endif
	    s++;
	}
	else if (s[0] == ESC && len >= 3-1 && s[1] == '|')
	{
# ifdef MCH_WRITE_DUMP
	    char_u  *old_s = s;
# endif
	    char_u  *p;
	    int	    arg1 = 0, arg2 = 0, argc = 0, args[16];
	    char_u  *sp;

	    switch (s[2])
	    {
	    case '0': case '1': case '2': case '3': case '4':
	    case '5': case '6': case '7': case '8': case '9':
		if (*(p = get_seq(args, &argc, s)) != 'm')
		    goto notsgr;

		p = s;

		
		

		
		
		if (sgrn2(sgrn2(sgrn2cn(sgrn2(sgrnc(p, 39), 38), 48), 48), 38))
		{
		    p = sgrn2(sgrn2(sgrnc(p, 39), 38), 48);
		    len = len + 1 - (int)(p - s);
		    s = p;
		    break;
		}

		
		
		if (sgrn2(sgrn2(sgrn2c((sp = sgrn2(p, 38)), 48), 48), 38))
		    p = sp;

		
		
		if (sgrn2(sgrn2(sgrn2c((sp = sgrn2(p, 38)), 48), 38), 48))
		    p = sp;

		
		if (sgrn2((sp = sgrn2(p, 48)), 48))
		    p = sp;

		
		
		if (sgrn2((sp = sgrnc(p, 39)), 38))
		    p = sp;

		p = get_seq(args, &argc, p);

notsgr:
		arg1 = args[0];
		arg2 = args[1];
		if (*p == 'm')
		{
		    if (argc == 1 && args[0] == 0)
			normvideo();
		    else if (argc == 1)
		    {
			if (USE_VTP)
			    textcolor((WORD)arg1);
			else
			    textattr((WORD)arg1);
		    }
		    else if (vtp_working)
			vtp_sgr_bulks(argc, args);
		}
		else if (argc == 2 && *p == 'H')
		{
		    gotoxy(arg2, arg1);
		}
		else if (argc == 2 && *p == 'r')
		{
		    set_scroll_region(0, arg1 - 1, Columns - 1, arg2 - 1);
		}
		else if (argc == 2 && *p == 'R')
		{
		    set_scroll_region_tb(arg1, arg2);
		}
		else if (argc == 2 && *p == 'V')
		{
		    set_scroll_region_lr(arg1, arg2);
		}
		else if (argc == 1 && *p == 'A')
		{
		    gotoxy(g_coord.X + 1,
			   max(g_srScrollRegion.Top, g_coord.Y - arg1) + 1);
		}
		else if (argc == 1 && *p == 'b')
		{
		    textbackground((WORD) arg1);
		}
		else if (argc == 1 && *p == 'C')
		{
		    gotoxy(min(g_srScrollRegion.Right, g_coord.X + arg1) + 1,
			   g_coord.Y + 1);
		}
		else if (argc == 1 && *p == 'f')
		{
		    textcolor((WORD) arg1);
		}
		else if (argc == 1 && *p == 'H')
		{
		    gotoxy(1, arg1);
		}
		else if (argc == 1 && *p == 'L')
		{
		    insert_lines(arg1);
		}
		else if (argc == 1 && *p == 'M')
		{
		    delete_lines(arg1);
		}

		len -= (int)(p - s);
		s = p + 1;
		break;

	    case 'A':
		gotoxy(g_coord.X + 1,
		       max(g_srScrollRegion.Top, g_coord.Y - 1) + 1);
		goto got3;

	    case 'B':
		visual_bell();
		goto got3;

	    case 'C':
		gotoxy(min(g_srScrollRegion.Right, g_coord.X + 1) + 1,
		       g_coord.Y + 1);
		goto got3;

	    case 'E':
		termcap_mode_end();
		goto got3;

	    case 'F':
		standout();
		goto got3;

	    case 'f':
		standend();
		goto got3;

	    case 'H':
		gotoxy(1, 1);
		goto got3;

	    case 'j':
		clear_to_end_of_display();
		goto got3;

	    case 'J':
		clear_screen();
		goto got3;

	    case 'K':
		clear_to_end_of_line();
		goto got3;

	    case 'L':
		insert_lines(1);
		goto got3;

	    case 'M':
		delete_lines(1);
		goto got3;

	    case 'S':
		termcap_mode_start();
		goto got3;

	    case 'V':
		cursor_visible(TRUE);
		goto got3;

	    case 'v':
		cursor_visible(FALSE);
		goto got3;

	    got3:
		s += 3;
		len -= 2;
	    }

# ifdef MCH_WRITE_DUMP
	    if (fdDump)
	    {
		fputs("ESC | ", fdDump);
		fwrite(old_s + 2, sizeof(char_u), s - old_s - 2, fdDump);
		fputc('\n', fdDump);
	    }
# endif
	}
	else if (s[0] == ESC && len >= 3-1 && s[1] == '[')
	{
	    int l = 2;

	    if (SAFE_isdigit(s[l]))
		l++;
	    if (s[l] == ' ' && s[l + 1] == 'q')
	    {
		
		if (vtp_working)
		    vtp_printf("%.*s", l + 2, s);   
		s += l + 2;
		len -= l + 1;
	    }
	}
	else
	{
	    
	    DWORD nWritten;

	    nWritten = write_chars(s, 1);
# ifdef MCH_WRITE_DUMP
	    if (fdDump)
	    {
		fputc('>', fdDump);
		fwrite(s, sizeof(char_u), nWritten, fdDump);
		fputs("<\n", fdDump);
	    }
# endif

	    len -= (nWritten - 1);
	    s += nWritten;
	}
    }

# ifdef MCH_WRITE_DUMP
    if (fdDump)
	fflush(fdDump);
# endif
}

#endif 



    void
mch_delay(
    int    msec,
    int	    flags UNUSED)
{
#if defined(FEAT_GUI_MSWIN) && !defined(VIMDLL)
    Sleep((int)msec);	    
#else 
# ifdef VIMDLL
    if (gui.in_use)
    {
	Sleep((int)msec);	    
	return;
    }
# endif
    if (flags & MCH_DELAY_IGNOREINPUT)
# ifdef FEAT_MZSCHEME
	if (mzthreads_allowed() && p_mzq > 0 && msec > p_mzq)
	{
	    int towait = p_mzq;

	    
	    while (msec > 0)
	    {
		mzvim_check_threads();
		if (msec < towait)
		    towait = msec;
		Sleep(towait);
		msec -= towait;
	    }
	}
	else
# endif
	    Sleep((int)msec);
    else
	WaitForChar(msec, FALSE);
#endif
}



    int
mch_remove(char_u *name)
{
    WCHAR	*wn;
    int		n;

    
    if (mch_isdir(name) && mch_is_symbolic_link(name))
	return mch_rmdir(name);

    win32_setattrs(name, FILE_ATTRIBUTE_NORMAL);

    wn = enc_to_utf16(name, NULL);
    if (wn == NULL)
	return -1;

    n = DeleteFileW(wn) ? 0 : -1;
    vim_free(wn);
    return n;
}



    void
mch_breakcheck(int force UNUSED)
{
#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)
# ifdef VIMDLL
    if (!gui.in_use)
# endif
	if (g_fCtrlCPressed || g_fCBrkPressed)
	{
	    ctrl_break_was_pressed = g_fCBrkPressed;
	    g_fCtrlCPressed = g_fCBrkPressed = FALSE;
	    got_int = TRUE;
	}
#endif
}


#define WINNT_RESERVE_BYTES     (256*1024*1024)


    long_u
mch_total_mem(int special UNUSED)
{
    MEMORYSTATUSEX  ms;

    
    
    ms.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&ms);
    if (ms.ullAvailVirtual < ms.ullTotalPhys)
    {
	
	return (long_u)(ms.ullAvailVirtual / 1024);
    }
    if (ms.ullTotalPhys <= WINNT_RESERVE_BYTES)
    {
	
	return (long_u)((ms.ullTotalPhys / 2) / 1024);
    }
    
    return (long_u)((ms.ullTotalPhys - WINNT_RESERVE_BYTES) / 1024);
}


    int
mch_wrename(WCHAR *wold, WCHAR *wnew)
{
    WCHAR	*p;
    int		i;
    WCHAR	szTempFile[_MAX_PATH + 1];
    WCHAR	szNewPath[_MAX_PATH + 1];
    HANDLE	hf;

    
    
    p = wold;
    for (i = 0; wold[i] != NUL; ++i)
	if ((wold[i] == '/' || wold[i] == '\\' || wold[i] == ':')
		&& wold[i + 1] != 0)
	    p = wold + i + 1;
    if ((int)(wold + i - p) < 8 || p[6] != '~')
	return (MoveFileW(wold, wnew) == 0);

    
    
    if (GetFullPathNameW(wnew, _MAX_PATH, szNewPath, &p) == 0 || p == NULL)
	return -1;
    *p = NUL;

    
    if (GetTempFileNameW(szNewPath, L"VIM", 0, szTempFile) == 0)
	return -2;

    
    if (!DeleteFileW(szTempFile))
	return -3;

    
    if (!MoveFileW(wold, szTempFile))
	return -4;

    
    
    
    
    
    
    
    
    
    if ((hf = CreateFileW(wold, GENERIC_WRITE, 0, NULL, CREATE_NEW,
		    FILE_ATTRIBUTE_NORMAL, NULL)) == INVALID_HANDLE_VALUE)
	return -5;
    if (!CloseHandle(hf))
	return -6;

    
    if (!MoveFileW(szTempFile, wnew))
    {
	
	
	(void)MoveFileW(szTempFile, wold);
	return -7;
    }

    
    DeleteFileW(szTempFile);

    
    if (!DeleteFileW(wold))
	return -8;

    return 0;
}



    int
mch_rename(
    const char	*pszOldFile,
    const char	*pszNewFile)
{
    WCHAR	*wold = NULL;
    WCHAR	*wnew = NULL;
    int		retval = -1;

    wold = enc_to_utf16((char_u *)pszOldFile, NULL);
    wnew = enc_to_utf16((char_u *)pszNewFile, NULL);
    if (wold != NULL && wnew != NULL)
	retval = mch_wrename(wold, wnew);
    vim_free(wold);
    vim_free(wnew);
    return retval;
}


    char *
default_shell(void)
{
    return "cmd.exe";
}


    int
mch_access(char *n, int p)
{
    HANDLE	hFile;
    int		retval = -1;	    
    WCHAR	*wn;

    wn = enc_to_utf16((char_u *)n, NULL);
    if (wn == NULL)
	return -1;

    if (mch_isdir((char_u *)n))
    {
	WCHAR TempNameW[_MAX_PATH + 16] = L"";

	if (p & R_OK)
	{
	    
	    
	    int			i;
	    WIN32_FIND_DATAW    d;

	    for (i = 0; i < _MAX_PATH && wn[i] != 0; ++i)
		TempNameW[i] = wn[i];
	    if (TempNameW[i - 1] != '\\' && TempNameW[i - 1] != '/')
		TempNameW[i++] = '\\';
	    TempNameW[i++] = '*';
	    TempNameW[i++] = 0;

	    hFile = FindFirstFileW(TempNameW, &d);
	    if (hFile == INVALID_HANDLE_VALUE)
		goto getout;
	    else
		(void)FindClose(hFile);
	}

	if (p & W_OK)
	{
	    
	    
	    
	    
	    if (!GetTempFileNameW(wn, L"VIM", 0, TempNameW))
		goto getout;
	    else
		DeleteFileW(TempNameW);
	}
    }
    else
    {
	
	DWORD share_mode = FILE_SHARE_READ | FILE_SHARE_WRITE;

	
	
	DWORD access_mode = ((p & W_OK) ? GENERIC_WRITE : 0)
					     | ((p & R_OK) ? GENERIC_READ : 0);

	hFile = CreateFileW(wn, access_mode, share_mode,
					     NULL, OPEN_EXISTING, 0, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	    goto getout;
	CloseHandle(hFile);
    }

    retval = 0;	    
getout:
    vim_free(wn);
    return retval;
}


    int
mch_open(const char *name, int flags, int mode)
{
    WCHAR	*wn;
    int		f;

    wn = enc_to_utf16((char_u *)name, NULL);
    if (wn == NULL)
	return -1;

    f = _wopen(wn, flags, mode);
    vim_free(wn);
    return f;
}


    FILE *
mch_fopen(const char *name, const char *mode)
{
    WCHAR	*wn, *wm;
    FILE	*f = NULL;

#if defined(DEBUG) && _MSC_VER >= 1400
    
    
    char newMode = mode[strlen(mode) - 1];
    int oldMode = 0;

    _get_fmode(&oldMode);
    if (newMode == 't')
	_set_fmode(_O_TEXT);
    else if (newMode == 'b')
	_set_fmode(_O_BINARY);
#endif
    wn = enc_to_utf16((char_u *)name, NULL);
    wm = enc_to_utf16((char_u *)mode, NULL);
    if (wn != NULL && wm != NULL)
	f = _wfopen(wn, wm);
    vim_free(wn);
    vim_free(wm);

#if defined(DEBUG) && _MSC_VER >= 1400
    _set_fmode(oldMode);
#endif
    return f;
}




    static void
copy_substream(HANDLE sh, void *context, WCHAR *to, WCHAR *substream, int len)
{
    HANDLE  hTo;
    WCHAR   *to_name;

    to_name = malloc((wcslen(to) + wcslen(substream) + 1) * sizeof(WCHAR));
    wcscpy(to_name, to);
    wcscat(to_name, substream);

    hTo = CreateFileW(to_name, GENERIC_WRITE, 0, NULL, OPEN_ALWAYS,
						 FILE_ATTRIBUTE_NORMAL, NULL);
    if (hTo != INVALID_HANDLE_VALUE)
    {
	int	done;
	DWORD	todo;
	DWORD	readcnt, written;
	char	buf[4096];

	
	for (done = 0; done < len; done += written)
	{
	    
	    todo = (DWORD)((size_t)(len - done) > sizeof(buf) ? sizeof(buf)
						       : (size_t)(len - done));
	    if (!BackupRead(sh, (LPBYTE)buf, todo, &readcnt,
						       FALSE, FALSE, context)
		    || readcnt != todo
		    || !WriteFile(hTo, buf, todo, &written, NULL)
		    || written != todo)
		break;
	}
	CloseHandle(hTo);
    }

    free(to_name);
}


    static void
copy_infostreams(char_u *from, char_u *to)
{
    WCHAR		*fromw;
    WCHAR		*tow;
    HANDLE		sh;
    WIN32_STREAM_ID	sid;
    int			headersize;
    WCHAR		streamname[_MAX_PATH];
    DWORD		readcount;
    void		*context = NULL;
    DWORD		lo, hi;
    int			len;

    
    fromw = enc_to_utf16(from, NULL);
    tow = enc_to_utf16(to, NULL);
    if (fromw != NULL && tow != NULL)
    {
	
	sh = CreateFileW(fromw, GENERIC_READ, FILE_SHARE_READ, NULL,
			     OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS, NULL);
	if (sh != INVALID_HANDLE_VALUE)
	{
	    
	    
	    for (;;)
	    {
		
		
		ZeroMemory(&sid, sizeof(WIN32_STREAM_ID));
		headersize = (int)((char *)&sid.cStreamName - (char *)&sid.dwStreamId);
		if (!BackupRead(sh, (LPBYTE)&sid, headersize,
					   &readcount, FALSE, FALSE, &context)
			|| readcount == 0)
		    break;

		
		
		
		if (sid.dwStreamNameSize > 0)
		{
		    
		    if (!BackupRead(sh, (LPBYTE)streamname,
							 sid.dwStreamNameSize,
					  &readcount, FALSE, FALSE, &context))
			break;

		    
		    
		    
		    
		    
		    len = readcount / sizeof(WCHAR);
		    streamname[len] = 0;
		    if (len > 7 && wcsicmp(streamname + len - 6,
							      L":$DATA") == 0)
		    {
			streamname[len - 6] = 0;
			copy_substream(sh, &context, tow, streamname,
						    (int)sid.Size.u.LowPart);
		    }
		}

		
		
		
		(void)BackupSeek(sh, sid.Size.u.LowPart, sid.Size.u.HighPart,
							  &lo, &hi, &context);
	    }

	    
	    (void)BackupRead(sh, NULL, 0, &readcount, TRUE, FALSE, &context);

	    CloseHandle(sh);
	}
    }
    vim_free(fromw);
    vim_free(tow);
}


#define FileEaInformation   7
#ifndef STATUS_SUCCESS
# define STATUS_SUCCESS	    ((NTSTATUS) 0x00000000L)
#endif

typedef struct _FILE_FULL_EA_INFORMATION_ {
    ULONG  NextEntryOffset;
    UCHAR  Flags;
    UCHAR  EaNameLength;
    USHORT EaValueLength;
    CHAR   EaName[1];
} FILE_FULL_EA_INFORMATION_, *PFILE_FULL_EA_INFORMATION_;

typedef struct _FILE_EA_INFORMATION_ {
    ULONG EaSize;
} FILE_EA_INFORMATION_, *PFILE_EA_INFORMATION_;

#ifndef PROTO
typedef NTSTATUS (NTAPI *PfnNtOpenFile)(
	PHANDLE FileHandle,
	ACCESS_MASK DesiredAccess,
	POBJECT_ATTRIBUTES ObjectAttributes,
	PIO_STATUS_BLOCK IoStatusBlock,
	ULONG ShareAccess,
	ULONG OpenOptions);
typedef NTSTATUS (NTAPI *PfnNtClose)(
	HANDLE Handle);
typedef NTSTATUS (NTAPI *PfnNtSetEaFile)(
	HANDLE		    FileHandle,
	PIO_STATUS_BLOCK    IoStatusBlock,
	PVOID		    Buffer,
	ULONG		    Length);
typedef NTSTATUS (NTAPI *PfnNtQueryEaFile)(
	HANDLE FileHandle,
	PIO_STATUS_BLOCK IoStatusBlock,
	PVOID Buffer,
	ULONG Length,
	BOOLEAN ReturnSingleEntry,
	PVOID EaList,
	ULONG EaListLength,
	PULONG EaIndex,
	BOOLEAN RestartScan);
typedef NTSTATUS (NTAPI *PfnNtQueryInformationFile)(
	HANDLE			FileHandle,
	PIO_STATUS_BLOCK	IoStatusBlock,
	PVOID			FileInformation,
	ULONG			Length,
	FILE_INFORMATION_CLASS FileInformationClass);
typedef VOID (NTAPI *PfnRtlInitUnicodeString)(
	PUNICODE_STRING DestinationString,
	PCWSTR SourceString);

PfnNtOpenFile pNtOpenFile = NULL;
PfnNtClose pNtClose = NULL;
PfnNtSetEaFile pNtSetEaFile = NULL;
PfnNtQueryEaFile pNtQueryEaFile = NULL;
PfnNtQueryInformationFile pNtQueryInformationFile = NULL;
PfnRtlInitUnicodeString pRtlInitUnicodeString = NULL;
#endif


    static BOOL
load_ntdll(void)
{
    static int	loaded = -1;

    if (loaded != -1)
	return (BOOL) loaded;

    HMODULE hNtdll = GetModuleHandle("ntdll.dll");
    if (hNtdll != NULL)
    {
	pNtOpenFile = (PfnNtOpenFile) GetProcAddress(hNtdll, "NtOpenFile");
	pNtClose = (PfnNtClose) GetProcAddress(hNtdll, "NtClose");
	pNtSetEaFile = (PfnNtSetEaFile)
	    GetProcAddress(hNtdll, "NtSetEaFile");
	pNtQueryEaFile = (PfnNtQueryEaFile)
	    GetProcAddress(hNtdll, "NtQueryEaFile");
	pNtQueryInformationFile = (PfnNtQueryInformationFile)
	    GetProcAddress(hNtdll, "NtQueryInformationFile");
	pRtlInitUnicodeString = (PfnRtlInitUnicodeString)
	    GetProcAddress(hNtdll, "RtlInitUnicodeString");
    }
    if (pNtOpenFile == NULL
	    || pNtClose == NULL
	    || pNtSetEaFile == NULL
	    || pNtQueryEaFile == NULL
	    || pNtQueryInformationFile == NULL
	    || pRtlInitUnicodeString == NULL)
	loaded = FALSE;
    else
	loaded = TRUE;
    return (BOOL) loaded;
}


    static void
copy_extattr(char_u *from, char_u *to)
{
    char_u		    *fromf = NULL;
    char_u		    *tof = NULL;
    WCHAR		    *fromw = NULL;
    WCHAR		    *tow = NULL;
    UNICODE_STRING	    u;
    HANDLE		    h;
    OBJECT_ATTRIBUTES	    oa;
    IO_STATUS_BLOCK	    iosb;
    FILE_EA_INFORMATION_    eainfo = {0};
    void		    *ea = NULL;

    if (!load_ntdll())
	return;

    
    fromf = alloc(STRLEN(from) + 5);
    tof = alloc(STRLEN(to) + 5);
    if (fromf == NULL || tof == NULL)
	goto theend;
    STRCPY(fromf, "\\??\\");
    STRCAT(fromf, from);
    STRCPY(tof, "\\??\\");
    STRCAT(tof, to);

    
    fromw = enc_to_utf16(fromf, NULL);
    tow = enc_to_utf16(tof, NULL);
    if (fromw == NULL || tow == NULL)
	goto theend;

    
    pRtlInitUnicodeString(&u, fromw);
    InitializeObjectAttributes(&oa, &u, 0, NULL, NULL);
    if (pNtOpenFile(&h, FILE_READ_EA, &oa, &iosb, 0,
		FILE_NON_DIRECTORY_FILE) != STATUS_SUCCESS)
	goto theend;
    pNtQueryInformationFile(h, &iosb, &eainfo, sizeof(eainfo),
	    FileEaInformation);
    if (eainfo.EaSize != 0)
    {
	ea = alloc(eainfo.EaSize);
	if (ea != NULL)
	{
	    if (pNtQueryEaFile(h, &iosb, ea, eainfo.EaSize, FALSE,
			NULL, 0, NULL, TRUE) != STATUS_SUCCESS)
	    {
		VIM_CLEAR(ea);
	    }
	}
    }
    pNtClose(h);

    
    if (ea != NULL)
    {
	pRtlInitUnicodeString(&u, tow);
	InitializeObjectAttributes(&oa, &u, 0, NULL, NULL);
	if (pNtOpenFile(&h, FILE_WRITE_EA, &oa, &iosb, 0,
		    FILE_NON_DIRECTORY_FILE) != STATUS_SUCCESS)
	    goto theend;

	pNtSetEaFile(h, &iosb, ea, eainfo.EaSize);
	pNtClose(h);
    }

theend:
    vim_free(fromf);
    vim_free(tof);
    vim_free(fromw);
    vim_free(tow);
    vim_free(ea);
}


    int
mch_copy_file_attribute(char_u *from, char_u *to)
{
    
    copy_infostreams(from, to);
    copy_extattr(from, to);
    return 0;
}



static int	nArgsW = 0;
static LPWSTR	*ArglistW = NULL;
static int	global_argc = 0;
static char	**global_argv;

static int	used_file_argc = 0;	
					
static int	*used_file_indexes = NULL; 
					   
					   
static int	used_file_count = 0;	
static int	used_file_literal = FALSE;  
static int	used_file_full_path = FALSE;  
static int	used_file_diff_mode = FALSE;  
static int	used_alist_count = 0;



    int
get_cmd_argsW(char ***argvp)
{
    char	**argv = NULL;
    int		argc = 0;
    int		i;

    free_cmd_argsW();
    ArglistW = CommandLineToArgvW(GetCommandLineW(), &nArgsW);
    if (ArglistW != NULL)
    {
	argv = malloc((nArgsW + 1) * sizeof(char *));
	if (argv != NULL)
	{
	    argc = nArgsW;
	    argv[argc] = NULL;
	    for (i = 0; i < argc; ++i)
	    {
		int	len;

		
		WideCharToMultiByte_alloc(CP_UTF8, 0,
				ArglistW[i], (int)wcslen(ArglistW[i]) + 1,
				(LPSTR *)&argv[i], &len, 0, 0);
		if (argv[i] == NULL)
		{
		    
		    while (i > 0)
			free(argv[--i]);
		    free(argv);
		    argv = NULL;
		    argc = 0;
		}
	    }
	}
    }

    global_argc = argc;
    global_argv = argv;
    if (argc > 0)
    {
	if (used_file_indexes != NULL)
	    free(used_file_indexes);
	used_file_indexes = malloc(argc * sizeof(int));
    }

    if (argvp != NULL)
	*argvp = argv;
    return argc;
}

    void
free_cmd_argsW(void)
{
    if (ArglistW == NULL)
	return;

    GlobalFree(ArglistW);
    ArglistW = NULL;
}


    void
used_file_arg(char *name, int literal, int full_path, int diff_mode)
{
    int		i;

    if (used_file_indexes == NULL)
	return;
    for (i = used_file_argc + 1; i < global_argc; ++i)
	if (STRCMP(global_argv[i], name) == 0)
	{
	    used_file_argc = i;
	    used_file_indexes[used_file_count++] = i;
	    break;
	}
    used_file_literal = literal;
    used_file_full_path = full_path;
    used_file_diff_mode = diff_mode;
}


    void
set_alist_count(void)
{
    used_alist_count = GARGCOUNT;
}


    void
fix_arg_enc(void)
{
    int		i;
    int		idx;
    char_u	*str;
    int		*fnum_list;

    
    
    
    
    
    if (global_argc != nArgsW
	    || ArglistW == NULL
	    || used_file_indexes == NULL
	    || used_file_count == 0
	    || used_alist_count != GARGCOUNT)
	return;

    
    fnum_list = ALLOC_MULT(int, GARGCOUNT);
    if (fnum_list == NULL)
	return;		
    for (i = 0; i < GARGCOUNT; ++i)
	fnum_list[i] = GARGLIST[i].ae_fnum;

    
    alist_clear(&global_alist);
    if (ga_grow(&global_alist.al_ga, used_file_count) == FAIL)
	return;		

    for (i = 0; i < used_file_count; ++i)
    {
	idx = used_file_indexes[i];
	str = utf16_to_enc(ArglistW[idx], NULL);
	if (str != NULL)
	{
	    int literal = used_file_literal;

#ifdef FEAT_DIFF
	    
	    
	    if (used_file_diff_mode && mch_isdir(str) && GARGCOUNT > 0
				      && !mch_isdir(alist_name(&GARGLIST[0])))
	    {
		char_u	    *r;

		r = concat_fnames(str, gettail(alist_name(&GARGLIST[0])), TRUE);
		if (r != NULL)
		{
		    vim_free(str);
		    str = r;
		}
	    }
#endif
	    
	    
	    if (used_file_literal)
		buf_set_name(fnum_list[i], str);

	    
	    
	    if (literal == FALSE)
	    {
		size_t len = STRLEN(str);

		if (len > 2 && *str == '`' && *(str + len - 1) == '`')
		    literal = TRUE;
	    }
	    alist_add(&global_alist, str, literal ? 2 : 0);
	}
    }

    if (!used_file_literal)
    {
	
	
	
	
	
	
	
	
	do_cmdline_cmd((char_u *)":legacy let g:SaVe_ISF = &isf|set isf+=(,)");
	do_cmdline_cmd((char_u *)":legacy let g:SaVe_WIG = &wig|set wig=");
	alist_expand(fnum_list, used_alist_count);
	do_cmdline_cmd(
		(char_u *)":legacy let &isf = g:SaVe_ISF|unlet g:SaVe_ISF");
	do_cmdline_cmd(
		(char_u *)":legacy let &wig = g:SaVe_WIG|unlet g:SaVe_WIG");
    }

    
    
    if (curwin->w_arg_idx == 0 && curbuf->b_fname == NULL)
    {
	do_cmdline_cmd((char_u *)":rewind");
	if (GARGCOUNT == 1 && used_file_full_path
		&& vim_chdirfile(alist_name(&GARGLIST[0]), "drop") == OK)
	    last_chdir_reason = "drop";
    }

    set_alist_count();
}

    int
mch_setenv(char *var, char *value, int x UNUSED)
{
    char_u	*envbuf;
    WCHAR	*p;

    envbuf = alloc(STRLEN(var) + STRLEN(value) + 2);
    if (envbuf == NULL)
	return -1;

    sprintf((char *)envbuf, "%s=%s", var, value);

    p = enc_to_utf16(envbuf, NULL);

    vim_free(envbuf);
    if (p == NULL)
	return -1;
    _wputenv(p);
#ifdef libintl_wputenv
    libintl_wputenv(p);
#endif
    
    vim_free(p);

    return 0;
}


#define VTP_FIRST_SUPPORT_BUILD MAKE_VER(10, 0, 15063)


#define CONPTY_FIRST_SUPPORT_BUILD  MAKE_VER(10, 0, 17763)


#define CONPTY_1903_BUILD	    MAKE_VER(10, 0, 18362)


#define CONPTY_1909_BUILD	    MAKE_VER(10, 0, 18363)


#define CONPTY_NEXT_UPDATE_BUILD    MAKE_VER(10, 0, 19587)


#define CONPTY_INSIDER_BUILD	    MAKE_VER(10, 0, 18995)


#define CONPTY_STABLE_BUILD	    MAKE_VER(10, 0, 32767)  







    static void
vtp_flag_init(void)
{
    DWORD   ver = get_build_number();
#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL)
    DWORD   mode;
    HANDLE  out;

# ifdef VIMDLL
    if (!gui.in_use)
# endif
    {
	out = GetStdHandle(STD_OUTPUT_HANDLE);

	vtp_working = (ver >= VTP_FIRST_SUPPORT_BUILD) ? 1 : 0;
	GetConsoleMode(out, &mode);
	mode |= (ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
	if (SetConsoleMode(out, mode) == 0)
	    vtp_working = 0;

	
	
	use_alternate_screen_buffer = win10_22H2_or_later && p_rs && vtp_working
						&& !mch_getenv("VIM_TERMINAL");
    }
#endif

    if (ver >= CONPTY_FIRST_SUPPORT_BUILD)
	conpty_working = 1;
    if (ver >= CONPTY_STABLE_BUILD)
	conpty_stable = 1;

    if (ver <= CONPTY_INSIDER_BUILD)
	conpty_type = 3;
    if (ver <= CONPTY_1909_BUILD)
	conpty_type = 2;
    if (ver <= CONPTY_1903_BUILD)
	conpty_type = 2;
    if (ver < CONPTY_FIRST_SUPPORT_BUILD)
	conpty_type = 1;

    if (ver >= CONPTY_NEXT_UPDATE_BUILD)
	conpty_fix_type = 1;
}

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL) || defined(PROTO)

    static void
vtp_init(void)
{
# ifdef FEAT_TERMGUICOLORS
    CONSOLE_SCREEN_BUFFER_INFOEX csbi;
    csbi.cbSize = sizeof(csbi);
    GetConsoleScreenBufferInfoEx(g_hConOut, &csbi);
    save_console_bg_rgb = (guicolor_T)csbi.ColorTable[g_color_index_bg];
    save_console_fg_rgb = (guicolor_T)csbi.ColorTable[g_color_index_fg];
    store_console_bg_rgb = save_console_bg_rgb;
    store_console_fg_rgb = save_console_fg_rgb;

    COLORREF bg;
    bg = (COLORREF)csbi.ColorTable[g_color_index_bg];
    bg = (GetRValue(bg) << 16) | (GetGValue(bg) << 8) | GetBValue(bg);
    default_console_color_bg = bg;

    COLORREF fg;
    fg = (COLORREF)csbi.ColorTable[g_color_index_fg];
    fg = (GetRValue(fg) << 16) | (GetGValue(fg) << 8) | GetBValue(fg);
    default_console_color_fg = fg;
# endif
    set_console_color_rgb();
}

    static void
vtp_exit(void)
{
    restore_console_color_rgb();
}

    int
vtp_printf(
    char *format,
    ...)
{
    char_u  buf[100];
    va_list list;
    DWORD   result;
    int	    len;

    if (silent_mode)
	return 0;

    va_start(list, format);
    len = vim_vsnprintf((char *)buf, 100, (char *)format, list);
    va_end(list);
    WriteConsoleA(g_hConOut, buf, (DWORD)len, &result, NULL);
    return (int)result;
}

    static void
vtp_sgr_bulk(
    int arg)
{
    int args[1];

    args[0] = arg;
    vtp_sgr_bulks(1, args);
}

# define FAST256(x) \
    if ((*p-- = "0123456789"[(n = x % 10)]) \
	    && x >= 10 && (*p-- = "0123456789"[((m = x % 100) - n) / 10]) \
	    && x >= 100 && (*p-- = "012"[((x & 0xff) - m) / 100]));

# define FAST256CASE(x) \
    case x: \
	FAST256(newargs[x - 1]);

    static void
vtp_sgr_bulks(
    int argc,
    int *args)
{
# define MAXSGR 16
# define SGRBUFSIZE 2 + 4 * MAXSGR + 1 
    char_u  buf[SGRBUFSIZE];
    char_u  *p;
    int	    in, out;
    int	    newargs[16];
    static int sgrfgr = -1, sgrfgg, sgrfgb;
    static int sgrbgr = -1, sgrbgg, sgrbgb;

    if (argc == 0)
    {
	sgrfgr = sgrbgr = -1;
	vtp_printf("\033[m");
	return;
    }

    in = out = 0;
    while (in < argc)
    {
	int s = args[in];
	int copylen = 1;

	if (s == 38)
	{
	    if (argc - in >= 5 && args[in + 1] == 2)
	    {
		if (sgrfgr == args[in + 2] && sgrfgg == args[in + 3]
						     && sgrfgb == args[in + 4])
		{
		    in += 5;
		    copylen = 0;
		}
		else
		{
		    sgrfgr = args[in + 2];
		    sgrfgg = args[in + 3];
		    sgrfgb = args[in + 4];
		    copylen = 5;
		}
	    }
	    else if (argc - in >= 3 && args[in + 1] == 5)
	    {
		sgrfgr = -1;
		copylen = 3;
	    }
	}
	else if (s == 48)
	{
	    if (argc - in >= 5 && args[in + 1] == 2)
	    {
		if (sgrbgr == args[in + 2] && sgrbgg == args[in + 3]
						     && sgrbgb == args[in + 4])
		{
		    in += 5;
		    copylen = 0;
		}
		else
		{
		    sgrbgr = args[in + 2];
		    sgrbgg = args[in + 3];
		    sgrbgb = args[in + 4];
		    copylen = 5;
		}
	    }
	    else if (argc - in >= 3 && args[in + 1] == 5)
	    {
		sgrbgr = -1;
		copylen = 3;
	    }
	}
	else if (30 <= s && s <= 39)
	    sgrfgr = -1;
	else if (90 <= s && s <= 97)
	    sgrfgr = -1;
	else if (40 <= s && s <= 49)
	    sgrbgr = -1;
	else if (100 <= s && s <= 107)
	    sgrbgr = -1;
	else if (s == 0)
	    sgrfgr = sgrbgr = -1;

	while (copylen--)
	    newargs[out++] = args[in++];
    }

    p = &buf[sizeof(buf) - 1];
    *p-- = 'm';

    switch (out)
    {
	int	n, m;
	DWORD	r;

	FAST256CASE(16);
	*p-- = ';';
	FAST256CASE(15);
	*p-- = ';';
	FAST256CASE(14);
	*p-- = ';';
	FAST256CASE(13);
	*p-- = ';';
	FAST256CASE(12);
	*p-- = ';';
	FAST256CASE(11);
	*p-- = ';';
	FAST256CASE(10);
	*p-- = ';';
	FAST256CASE(9);
	*p-- = ';';
	FAST256CASE(8);
	*p-- = ';';
	FAST256CASE(7);
	*p-- = ';';
	FAST256CASE(6);
	*p-- = ';';
	FAST256CASE(5);
	*p-- = ';';
	FAST256CASE(4);
	*p-- = ';';
	FAST256CASE(3);
	*p-- = ';';
	FAST256CASE(2);
	*p-- = ';';
	FAST256CASE(1);
	*p-- = '[';
	*p = '\033';
	WriteConsoleA(g_hConOut, p, (DWORD)(&buf[SGRBUFSIZE] - p), &r, NULL);
    default:
	break;
    }
}

    static void
wt_init(void)
{
    wt_working = mch_getenv("WT_SESSION") != NULL;
}

# ifdef FEAT_TERMGUICOLORS
    static int
ctermtoxterm(
    int cterm)
{
    char_u r, g, b, idx;

    cterm_color2rgb(cterm, &r, &g, &b, &idx);
    return (((int)r << 16) | ((int)g << 8) | (int)b);
}
# endif

    static void
set_console_color_rgb(void)
{
# ifdef FEAT_TERMGUICOLORS
    CONSOLE_SCREEN_BUFFER_INFOEX csbi;
    guicolor_T	fg, bg;
    int		ctermfg, ctermbg;

    if (!vtp_working)
	return;

    get_default_console_color(&ctermfg, &ctermbg, &fg, &bg);

    if (p_tgc || t_colors >= 256)
    {
	term_fg_rgb_color(fg);
	term_bg_rgb_color(bg);
	return;
    }

    if (use_alternate_screen_buffer)
	return;

    fg = (GetRValue(fg) << 16) | (GetGValue(fg) << 8) | GetBValue(fg);
    bg = (GetRValue(bg) << 16) | (GetGValue(bg) << 8) | GetBValue(bg);

    csbi.cbSize = sizeof(csbi);
    GetConsoleScreenBufferInfoEx(g_hConOut, &csbi);

    csbi.cbSize = sizeof(csbi);
    csbi.srWindow.Right += 1;
    csbi.srWindow.Bottom += 1;
    store_console_bg_rgb = csbi.ColorTable[g_color_index_bg];
    store_console_fg_rgb = csbi.ColorTable[g_color_index_fg];
    csbi.ColorTable[g_color_index_bg] = (COLORREF)bg;
    csbi.ColorTable[g_color_index_fg] = (COLORREF)fg;
    SetConsoleScreenBufferInfoEx(g_hConOut, &csbi);
# endif
}

# if defined(FEAT_TERMGUICOLORS) || defined(PROTO)
    void
get_default_console_color(
    int *cterm_fg,
    int *cterm_bg,
    guicolor_T *gui_fg,
    guicolor_T *gui_bg)
{
    int id;
    guicolor_T guifg = INVALCOLOR;
    guicolor_T guibg = INVALCOLOR;
    int ctermfg = 0;
    int ctermbg = 0;
    int dummynull = 0;

    id = syn_name2id((char_u *)"Normal");
    if (id > 0 && p_tgc)
	syn_id2colors(id, &guifg, &guibg);
    if (guifg == INVALCOLOR)
    {
	ctermfg = -1;
	if (id > 0)
	    syn_id2cterm_bg(id, &ctermfg, &dummynull);
	if (ctermfg != -1)
	    guifg = ctermtoxterm(ctermfg);
	else
	    guifg = USE_WT ? INVALCOLOR : default_console_color_fg;
	cterm_normal_fg_gui_color = guifg;
	ctermfg = ctermfg < 0 ? 0 : ctermfg;
    }
    if (guibg == INVALCOLOR)
    {
	ctermbg = -1;
	if (id > 0)
	    syn_id2cterm_bg(id, &dummynull, &ctermbg);
	if (ctermbg != -1)
	    guibg = ctermtoxterm(ctermbg);
	else
	    guibg = USE_WT ? INVALCOLOR : default_console_color_bg;
	cterm_normal_bg_gui_color = guibg;
	ctermbg = ctermbg < 0 ? 0 : ctermbg;
    }

    *cterm_fg = ctermfg;
    *cterm_bg = ctermbg;
    *gui_fg = guifg;
    *gui_bg = guibg;
}
# endif


    static void
reset_console_color_rgb(void)
{
# ifdef FEAT_TERMGUICOLORS
    if (use_alternate_screen_buffer)
	return;

    CONSOLE_SCREEN_BUFFER_INFOEX csbi;

    csbi.cbSize = sizeof(csbi);
    GetConsoleScreenBufferInfoEx(g_hConOut, &csbi);

    csbi.cbSize = sizeof(csbi);
    csbi.srWindow.Right += 1;
    csbi.srWindow.Bottom += 1;
    csbi.ColorTable[g_color_index_bg] = (COLORREF)store_console_bg_rgb;
    csbi.ColorTable[g_color_index_fg] = (COLORREF)store_console_fg_rgb;
    SetConsoleScreenBufferInfoEx(g_hConOut, &csbi);
# endif
}


    static void
restore_console_color_rgb(void)
{
# ifdef FEAT_TERMGUICOLORS
    if (use_alternate_screen_buffer)
	return;

    CONSOLE_SCREEN_BUFFER_INFOEX csbi;

    csbi.cbSize = sizeof(csbi);
    GetConsoleScreenBufferInfoEx(g_hConOut, &csbi);

    csbi.cbSize = sizeof(csbi);
    csbi.srWindow.Right += 1;
    csbi.srWindow.Bottom += 1;
    csbi.ColorTable[g_color_index_bg] = (COLORREF)save_console_bg_rgb;
    csbi.ColorTable[g_color_index_fg] = (COLORREF)save_console_fg_rgb;
    SetConsoleScreenBufferInfoEx(g_hConOut, &csbi);
# endif
}

    void
control_console_color_rgb(void)
{
    if (vtp_working)
	set_console_color_rgb();
    else
	reset_console_color_rgb();
}

    int
use_vtp(void)
{
    return USE_VTP;
}

    int
is_term_win32(void)
{
    return T_NAME != NULL && STRCMP(T_NAME, "win32") == 0;
}

    int
has_vtp_working(void)
{
    return vtp_working;
}

#endif

    int
has_conpty_working(void)
{
    return conpty_working;
}

    int
get_conpty_type(void)
{
    return conpty_type;
}

    int
is_conpty_stable(void)
{
    return conpty_stable;
}

    int
get_conpty_fix_type(void)
{
    return conpty_fix_type;
}

#if !defined(FEAT_GUI_MSWIN) || defined(VIMDLL) || defined(PROTO)
    void
resize_console_buf(void)
{
    if (use_alternate_screen_buffer)
	return;

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD coord;
    SMALL_RECT newsize;

    if (!GetConsoleScreenBufferInfo(g_hConOut, &csbi))
	return;

    coord.X = SRWIDTH(csbi.srWindow);
    coord.Y = SRHEIGHT(csbi.srWindow);
    SetConsoleScreenBufferSize(g_hConOut, coord);

    newsize.Left = 0;
    newsize.Top = 0;
    newsize.Right = coord.X - 1;
    newsize.Bottom = coord.Y - 1;
    SetConsoleWindowInfo(g_hConOut, TRUE, &newsize);

    SetConsoleScreenBufferSize(g_hConOut, coord);
}
#endif

    char *
GetWin32Error(void)
{
    static char *oldmsg = NULL;
    char *msg = NULL;

    FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM,
	    NULL, GetLastError(), 0, (LPSTR)&msg, 0, NULL);
    if (oldmsg != NULL)
	LocalFree(oldmsg);
    if (msg == NULL)
	return NULL;

    
    char *pcrlf = strstr(msg, "\r\n");
    if (pcrlf != NULL)
	*pcrlf = '\0';
    oldmsg = msg;
    return msg;
}

#if defined(FEAT_RELTIME) || defined(PROTO)
static HANDLE   timer_handle;
static int      timer_active = FALSE;


static sig_atomic_t timeout_flags[2];
static int	    timeout_flag_idx = 0;
static sig_atomic_t *timeout_flag = &timeout_flags[0];


    static void CALLBACK
set_flag(void *param, BOOLEAN unused2 UNUSED)
{
    int *timeout_flag = (int *)param;

    *timeout_flag = TRUE;
}


    void
stop_timeout(void)
{
    if (timer_active)
    {
	BOOL ret = DeleteTimerQueueTimer(NULL, timer_handle, NULL);
	timer_active = FALSE;
	if (!ret && GetLastError() != ERROR_IO_PENDING)
	{
	    semsg(_(e_could_not_clear_timeout_str), GetWin32Error());
	}
    }
    *timeout_flag = FALSE;
}


    volatile sig_atomic_t *
start_timeout(int msec)
{
    BOOL ret;

    timeout_flag = &timeout_flags[timeout_flag_idx];

    stop_timeout();
    ret = CreateTimerQueueTimer(
	    &timer_handle, NULL, set_flag, timeout_flag,
	    (DWORD)msec, 0, WT_EXECUTEDEFAULT);
    if (!ret)
    {
	semsg(_(e_could_not_set_timeout_str), GetWin32Error());
    }
    else
    {
	timeout_flag_idx = (timeout_flag_idx + 1) % 2;
	timer_active = TRUE;
	*timeout_flag = FALSE;
    }
    return timeout_flag;
}
#endif
