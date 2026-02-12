static int HTLoadTelnet(const char *addr,
HTParentAnchor *anchor GCC_UNUSED,
HTFormat format_out GCC_UNUSED,
HTStream *sink)		
{
char *acc_method;
char *host;
int status;

if (sink) {
CTRACE((tfp,
"HTTelnet: Can't output a live session -- must be interactive!\n"));
return HT_NO_DATA;
}
acc_method = HTParse(addr, STR_FILE_URL, PARSE_ACCESS);

host = HTParse(addr, "", PARSE_HOST);
if (!host || *host == '\0') {
status = HT_NO_DATA;
CTRACE((tfp, "HTTelnet: No host specified!\n"));
} else {
status = remote_session(acc_method, host);
}

FREE(host);
FREE(acc_method);
return status;
}