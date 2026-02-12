void CleanUp(void)
{
Shell_NotifyIcon(NIM_DELETE ,&SysTray);
}
HWND hStatusWnd;
HWND hwIRCDWnd=NULL;
HWND hwTreeView;
HWND hWndMod;
UINT WM_TASKBARCREATED, WM_FINDMSGSTRING;
FARPROC lpfnOldWndProc;
HMENU hContext;
char OSName[OSVER_SIZE];

void TaskBarCreated() 
{
HICON hIcon = (HICON)LoadImage(hInst, MAKEINTRESOURCE(ICO_MAIN), IMAGE_ICON,16, 16, 0);
SysTray.cbSize = sizeof(NOTIFYICONDATA);
SysTray.hIcon = hIcon;
SysTray.hWnd = hwIRCDWnd;
SysTray.uCallbackMessage = WM_USER;
SysTray.uFlags = NIF_ICON|NIF_TIP|NIF_MESSAGE;
SysTray.uID = 0;
strcpy(SysTray.szTip, WIN32_VERSION);
Shell_NotifyIcon(NIM_ADD ,&SysTray);
}