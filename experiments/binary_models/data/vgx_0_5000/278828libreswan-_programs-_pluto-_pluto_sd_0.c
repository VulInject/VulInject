void pluto_sd_init(struct logger *logger)
{
uint64_t sd_usecs;
int ret = sd_watchdog_enabled(0, &sd_usecs);

if (ret == 0) {
llog(RC_LOG, logger, "systemd watchdog not enabled - not sending watchdog keepalives");
return;
}
if (ret < 0) {
llog(RC_LOG, logger, "systemd watchdog returned error %d - not sending watchdog keepalives", ret);
return;
}

llog(RC_LOG, logger, "systemd watchdog for ipsec service configured with timeout of %"PRIu64" usecs", sd_usecs);
uintmax_t sd_secs = sd_usecs / 2 / 1000000; 
llog(RC_LOG, logger, "watchdog: sending probes every %ju secs", sd_secs);

pluto_sd(PLUTO_SD_START, SD_REPORT_NO_STATUS);

enable_periodic_timer(EVENT_SD_WATCHDOG, sd_watchdog_event,
deltatime(sd_secs));
}