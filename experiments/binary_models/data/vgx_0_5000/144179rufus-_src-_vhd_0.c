BOOL WimApplyImage(const char* image, int index, const char* dst)
{
DWORD dw = 0;
_image = image;
_index = index;
_dst = dst;

wim_thread = CreateThread(NULL, 0, WimApplyImageThread, NULL, 0, NULL);
if (wim_thread == NULL) {
uprintf("Unable to start apply-image thread");
return FALSE;
}
SetThreadPriority(wim_thread, default_thread_priority);
WaitForSingleObject(wim_thread, INFINITE);
if (!GetExitCodeThread(wim_thread, &dw))
dw = 0;
wim_thread = NULL;
return dw;
}