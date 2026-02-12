mDNSexport void mDNSPlatformWriteLogMsg(const char *ident, const char *buffer, mDNSLogLevel_t loglevel)
{
extern mDNS mDNSStorage;
extern mDNSu32 mDNSPlatformClockDivisor;
mDNSs32 t = mDNSStorage.timenow ? mDNSStorage.timenow : mDNSPlatformClockDivisor ? mDNS_TimeNow_NoLock(&mDNSStorage) : 0;
int ms = ((t < 0) ? -t : t) % 1000;

if (mDNS_DebugMode) 
{
if (ident && ident[0] && mDNSPlatformClockDivisor)
fprintf(stderr,"%8d.%03d: %s\n", (int)(t/1000), ms, buffer);
else
fprintf(stderr,"%s\n", buffer);
fflush(stderr);
}
else                
{
static int log_inited = 0;

int syslog_level;
switch (loglevel)
{
case MDNS_LOG_FAULT:     syslog_level = LOG_ERR;     break;
case MDNS_LOG_ERROR:     syslog_level = LOG_ERR;     break;
case MDNS_LOG_WARNING:   syslog_level = LOG_WARNING; break;
case MDNS_LOG_DEFAULT:   syslog_level = LOG_NOTICE;  break;
case MDNS_LOG_INFO:      syslog_level = LOG_INFO;    break;
case MDNS_LOG_DEBUG:     syslog_level = LOG_DEBUG;   break;
default:                 syslog_level = LOG_NOTICE;  break;
}

if (!log_inited) { openlog(ident, LOG_CONS, LOG_DAEMON); log_inited++; }

if (ident && ident[0] && mDNSPlatformClockDivisor)
syslog(syslog_level, "%8d.%03d: %s", (int)(t/1000), ms, buffer);
else
{
syslog(syslog_level, "%s", buffer);
}
}
}