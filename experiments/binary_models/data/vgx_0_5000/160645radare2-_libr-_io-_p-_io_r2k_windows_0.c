static BOOL InstallService(const char *rutaDriver, LPCTSTR  lpServiceName, LPCTSTR  lpDisplayName) {
HANDLE hService;
BOOL ret = FALSE;
HANDLE hSCManager = OpenSCManager (NULL, NULL, SC_MANAGER_CREATE_SERVICE);
if (hSCManager)	{
LPTSTR rutaDriver_ = r_sys_conv_utf8_to_win (rutaDriver);
hService = CreateService (hSCManager, lpServiceName, lpDisplayName, SERVICE_START | DELETE | SERVICE_STOP, SERVICE_KERNEL_DRIVER, SERVICE_DEMAND_START, SERVICE_ERROR_IGNORE, rutaDriver_, NULL, NULL, NULL, NULL, NULL);
if (hService) {
CloseServiceHandle (hService);
ret = TRUE;
}
free (rutaDriver_);
CloseServiceHandle (hSCManager);
}
return ret;
}