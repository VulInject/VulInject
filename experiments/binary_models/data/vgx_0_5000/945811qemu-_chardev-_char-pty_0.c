static gboolean pty_chr_read(QIOChannel *chan, GIOCondition cond, void *opaque)
{
Chardev *chr = CHARDEV(opaque);
PtyChardev *s = PTY_CHARDEV(opaque);
gsize len;
uint8_t buf[CHR_READ_BUF_LEN];
ssize_t ret;

len = sizeof(buf);
if (len > s->read_bytes) {
len = s->read_bytes;
}
if (len == 0) {
return TRUE;
}
ret = qio_channel_read(s->ioc, (char *)buf, len, NULL);
if (ret <= 0) {
pty_chr_state(chr, 0);
return FALSE;
} else {
pty_chr_state(chr, 1);
qemu_chr_be_write(chr, buf, ret);
}
return TRUE;
}