int load_image(const char *fn, _u8 *dst) {
_i32 fh;
SlFsFileInfo_t fi;
_i32 r = sl_FsGetInfo((const _u8 *) fn, 0, &fi);
dbg_putc(r == 0 ? '+' : '-');
if (r != 0) return r;
{
char buf[20];
__utoa(fi.FileLen, buf, 10);
dbg_puts(buf);
}
r = sl_FsOpen((const _u8 *) fn, FS_MODE_OPEN_READ, NULL, &fh);
dbg_putc(r == 0 ? '+' : '-');
if (r != 0) return r;
r = sl_FsRead(fh, 0, dst, fi.FileLen);
if (r != fi.FileLen) return r;
sl_FsClose(fh, NULL, NULL, 0);
return 0;
}