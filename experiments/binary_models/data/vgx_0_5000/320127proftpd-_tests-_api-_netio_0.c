static int netio_read_cb(pr_netio_stream_t *nstrm, char *buf, size_t buflen) {
const char *text;
int res;

if (netio_read_eof) {
netio_read_eof = FALSE;
return 0;
}

if (netio_read_epipe) {
netio_read_epipe = FALSE;
errno = EPIPE;
return -1;
}

text = "Hello, World!\r\n";
sstrncpy(buf, text, buflen);


netio_read_eof = TRUE;

res = strlen(text);
return res;
}