static void win_chr_read(Chardev *chr, DWORD len)
{
WinChardev *s = WIN_CHARDEV(chr);
int max_size = qemu_chr_be_can_write(chr);
int ret, err;
uint8_t buf[CHR_READ_BUF_LEN];
DWORD size;

if (len > max_size) {
len = max_size;
}
if (len == 0) {
return;
}

ZeroMemory(&s->orecv, sizeof(s->orecv));
s->orecv.hEvent = s->hrecv;
ret = ReadFile(s->file, buf, len, &size, &s->orecv);
if (!ret) {
err = GetLastError();
if (err == ERROR_IO_PENDING) {
ret = GetOverlappedResult(s->file, &s->orecv, &size, TRUE);
}
}

if (size > 0) {
qemu_chr_be_write(chr, buf, size);
}
}