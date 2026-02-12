static int opal_set_rtc_time(struct device *dev, struct rtc_time *tm)
{
s64 rc = OPAL_BUSY;
int retries = 10;
u32 y_m_d = 0;
u64 h_m_s_ms = 0;

tm_to_opal(tm, &y_m_d, &h_m_s_ms);

while (rc == OPAL_BUSY || rc == OPAL_BUSY_EVENT) {
rc = opal_rtc_write(y_m_d, h_m_s_ms);
if (rc == OPAL_BUSY_EVENT) {
msleep(OPAL_BUSY_DELAY_MS);
opal_poll_events(NULL);
} else if (rc == OPAL_BUSY) {
msleep(OPAL_BUSY_DELAY_MS);
} else if (rc == OPAL_HARDWARE || rc == OPAL_INTERNAL_ERROR) {
if (retries--) {
msleep(10); 
rc = OPAL_BUSY; 
}
}
}

return rc == OPAL_SUCCESS ? 0 : -EIO;
}