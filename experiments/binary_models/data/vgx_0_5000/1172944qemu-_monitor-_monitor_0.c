int error_vprintf_unless_qmp(const char *fmt, va_list ap)
{
Monitor *cur_mon = monitor_cur();

if (!cur_mon) {
return vfprintf(stderr, fmt, ap);
}
if (!monitor_cur_is_qmp()) {
return monitor_vprintf(cur_mon, fmt, ap);
}
return -1;
}


static MonitorQAPIEventConf monitor_qapi_event_conf[QAPI_EVENT__MAX] = {

[QAPI_EVENT_RTC_CHANGE]        = { 1000 * SCALE_MS },
[QAPI_EVENT_WATCHDOG]          = { 1000 * SCALE_MS },
[QAPI_EVENT_BALLOON_CHANGE]    = { 1000 * SCALE_MS },
[QAPI_EVENT_QUORUM_REPORT_BAD] = { 1000 * SCALE_MS },
[QAPI_EVENT_QUORUM_FAILURE]    = { 1000 * SCALE_MS },
[QAPI_EVENT_VSERPORT_CHANGE]   = { 1000 * SCALE_MS },
[QAPI_EVENT_MEMORY_DEVICE_SIZE_CHANGE] = { 1000 * SCALE_MS },
};