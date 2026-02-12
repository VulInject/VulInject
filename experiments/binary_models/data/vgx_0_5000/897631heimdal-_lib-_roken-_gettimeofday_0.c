typedef BOOL (WINAPI *LPFN_GETSYSTEMTIME) (LPFILETIME);

static LPFN_GETSYSTEMTIME lpGetSystemTime = NULL;

ROKEN_LIB_FUNCTION int ROKEN_LIB_CALL
gettimeofday (struct timeval *tp, void *ignore)
{
FILETIME ft;
ULARGE_INTEGER li;
ULONGLONG ull;

if (lpGetSystemTime == NULL) {
HANDLE h1;
LPFN_GETSYSTEMTIME fn;

h1 = GetModuleHandle(TEXT("kernel32.dll"));	
fn = (LPFN_GETSYSTEMTIME)GetProcAddress(h1,
"GetSystemTimePreciseAsFileTime");
if (fn == NULL)
fn = (LPFN_GETSYSTEMTIME)GetProcAddress(h1,
"GetSystemTimeAsFileTime");
lpGetSystemTime = fn;
}

lpGetSystemTime(&ft);
li.LowPart = ft.dwLowDateTime;
li.HighPart = ft.dwHighDateTime;
ull = li.QuadPart;

ull -= 116444736000000000i64;
ull /= 10i64;               

tp->tv_usec = (ull % 1000000i64);
tp->tv_sec  = (ull / 1000000i64);

return 0;
}