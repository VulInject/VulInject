static void sptps_logger(sptps_t *s, int s_errno, const char *format, va_list ap) ATTR_FORMAT(printf, 3, 0);
static void sptps_logger(sptps_t *s, int s_errno, const char *format, va_list ap) {
(void)s_errno;
char message[1024];
size_t msglen = sizeof(message);

if(!should_log(DEBUG_TRAFFIC)) {
return;
}

int len = vsnprintf(message, msglen, format, ap);
message[sizeof(message) - 1] = 0;

if(len > 0 && (size_t)len < sizeof(message) - 1) {
if(message[len - 1] == '\n') {
message[--len] = 0;
}



connection_t *c = s->handle;

if(c) {
snprintf(message + len, sizeof(message) - len, " from %s (%s)", c->name, c->hostname);
}
}

real_logger(DEBUG_TRAFFIC, LOG_ERR, message);
}