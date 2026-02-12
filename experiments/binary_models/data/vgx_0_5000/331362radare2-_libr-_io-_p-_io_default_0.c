static int r_io_def_mmap_refresh_def_mmap_buf(RIOMMapFileObj *mmo) {
RIO* io = mmo->io_backref;
ut64 cur = 0;
if (mmo->buf) {
cur = r_buf_tell (mmo->buf);
r_buf_free (mmo->buf);
mmo->buf = NULL;
}
st64 sz = r_file_size (mmo->filename);
if (sz > ST32_MAX) {

mmo->rawio = true;
}
if (mmo->rawio) {
mmo->fd = __io_posix_open (mmo->filename, mmo->perm, mmo->mode);
if (mmo->nocache) {
fcntl (mmo->fd, F_NOCACHE, 1);
}
return mmo->fd != -1;
}
mmo->buf = r_buf_new_mmap (mmo->filename, mmo->perm);
if (mmo->buf) {
r_io_def_mmap_seek (io, mmo, cur, SEEK_SET);
return true;
}
mmo->rawio = true;
mmo->fd = __io_posix_open (mmo->filename, mmo->perm, mmo->mode);
if (mmo->nocache) {
fcntl (mmo->fd, F_NOCACHE, 1);
}
return mmo->fd != -1;
}