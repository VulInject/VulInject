void cx18_mute(struct cx18 *cx)
{
u32 h;
if (atomic_read(&cx->ana_capturing)) {
h = cx18_find_handle(cx);
if (h != CX18_INVALID_TASK_HANDLE)
cx18_vapi(cx, CX18_CPU_SET_AUDIO_MUTE, 2, h, 1);
else
CX18_ERR("Can't find valid task handle for mute\n");
}
CX18_DEBUG_INFO("Mute\n");
}