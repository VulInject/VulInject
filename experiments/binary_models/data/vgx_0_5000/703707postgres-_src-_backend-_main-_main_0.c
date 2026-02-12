static void
startup_hacks(const char *progname)
{

{
WSADATA		wsaData;
int			err;


setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);


err = WSAStartup(MAKEWORD(2, 2), &wsaData);
if (err != 0)
{
write_stderr("%s: WSAStartup failed: %d\n",
progname, err);
exit(1);
}


_set_abort_behavior(_CALL_REPORTFAULT | _WRITE_ABORT_MSG,
_CALL_REPORTFAULT | _WRITE_ABORT_MSG);


SetErrorMode(SEM_FAILCRITICALERRORS);


_set_error_mode(_OUT_TO_STDERR);


_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE | _CRTDBG_MODE_DEBUG);
_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);
_CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE | _CRTDBG_MODE_DEBUG);
_CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDERR);
_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE | _CRTDBG_MODE_DEBUG);
_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDERR);
}


SpinLockInit(&dummy_spinlock);
}