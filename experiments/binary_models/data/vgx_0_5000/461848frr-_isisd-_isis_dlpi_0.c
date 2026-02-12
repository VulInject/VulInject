static int dlpisend(int fd, const void *cbuf, size_t cbuflen, const void *dbuf,
size_t dbuflen, int flags)
{
const struct strbuf *ctlptr = NULL;
const struct strbuf *dataptr = NULL;
struct strbuf ctlbuf, databuf;
int rv;

if (cbuf != NULL) {
memset(&ctlbuf, 0, sizeof(ctlbuf));
ctlbuf.len = cbuflen;
ctlbuf.buf = (void *)cbuf;
ctlptr = &ctlbuf;
}

if (dbuf != NULL) {
memset(&databuf, 0, sizeof(databuf));
databuf.len = dbuflen;
databuf.buf = (void *)dbuf;
dataptr = &databuf;
}


rv = putmsg(fd, ctlptr, dataptr, flags);
if (rv == -1 && dbuf == NULL) {

zlog_debug("%s: putmsg: %s", __func__, safe_strerror(errno));
}
return rv;
}