GF_Err DD_Setup(GF_VideoOutput *dr, void *os_handle, void *os_display, u32 init_flags)
{
RECT rc;
DDCONTEXT

if (dd->cur_hwnd) {
if (!(init_flags & GF_VOUT_INIT_HIDE)) {
ShowWindow(dd->cur_hwnd, SW_SHOW);
}
return GF_OK;
}
dd->os_hwnd = (HWND) os_handle;
DD_SetupWindow(dr, init_flags);

if (!dd->os_hwnd) return GF_IO_ERR;
dd->cur_hwnd = dd->os_hwnd;

{
HDC hdc;
hdc = GetDC(dd->os_hwnd);
dr->dpi_x = GetDeviceCaps(hdc, LOGPIXELSX);
dr->dpi_y = GetDeviceCaps(hdc, LOGPIXELSY);
ReleaseDC(dd->os_hwnd, hdc);
}

dd->output_3d = 0;
GetWindowRect(dd->cur_hwnd, &rc);

dd->disable_vsync = gf_opts_get_bool("core", "disable-vsync");

return GF_OK;
}