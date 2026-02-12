BOOL freerdp_client_send_extended_button_event(rdpClientContext* cctx, BOOL relative, UINT16 mflags,
INT32 x, INT32 y)
{
BOOL handled = FALSE;
WINPR_ASSERT(cctx);

if (cctx->ainput)
{
UINT64 flags = 0;

if (relative)
flags |= AINPUT_FLAGS_REL;
if (mflags & PTR_XFLAGS_DOWN)
flags |= AINPUT_FLAGS_DOWN;
if (mflags & PTR_XFLAGS_BUTTON1)
flags |= AINPUT_XFLAGS_BUTTON1;
if (mflags & PTR_XFLAGS_BUTTON2)
flags |= AINPUT_XFLAGS_BUTTON2;

handled = ainput_send_diff_event(cctx, flags, x, y);
}

if (!handled)
{
if (relative)
{
cctx->lastX += x;
cctx->lastY += y;
WLog_WARN(TAG, "Relative mouse input channel not available, sending absolute!");
}
else
{
cctx->lastX = x;
cctx->lastY = y;
}
freerdp_input_send_extended_mouse_event(cctx->context.input, mflags, (UINT16)cctx->lastX,
(UINT16)cctx->lastY);
}

return TRUE;
}