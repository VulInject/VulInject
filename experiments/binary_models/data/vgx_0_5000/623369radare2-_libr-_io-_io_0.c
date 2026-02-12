R_API bool r_io_reopen(RIO* io, int fd, int perm, int mode) {
RIODesc *od = r_io_desc_get (io, fd);
if (!od) {
return false;
}
const char *uri = od->referer? od->referer: od->uri;
RIODesc *nd = r_io_open_nomap (io, uri, perm, mode);
if (nd) {
r_io_desc_exchange (io, od->fd, nd->fd);
r_io_desc_close (od);
if (nd->perm & R_PERM_W) {
io->coreb.cmdf (io->coreb.core, "omfg");
}
return true;
}
R_LOG_ERROR ("Cannot reopen");
return false;
}