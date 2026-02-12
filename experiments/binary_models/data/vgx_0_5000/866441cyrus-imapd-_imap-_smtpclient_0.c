EXPORTED int smtpclient_open(smtpclient_t **smp)
{
int r = 0;
const char *backend = config_getstring(IMAPOPT_SMTP_BACKEND);

if (!strcmp(backend, "sendmail")) {
r = smtpclient_open_sendmail(smp);
}
else if (!strcmp(backend, "host")) {
r = smtpclient_open_host(config_getstring(IMAPOPT_SMTP_HOST), smp);
}
else {
syslog(LOG_ERR, "smtpclient_open: unknown backend: %s", backend);
r = IMAP_INTERNAL;
}
return r;
}