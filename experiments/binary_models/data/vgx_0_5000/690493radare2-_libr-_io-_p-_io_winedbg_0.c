static RIODesc *__open(RIO *io, const char *pathname, int rw, int mode) {
if (__plugin_open (io, pathname, 0)) {
if (gs) {
return NULL;
}
gs = r_socket_new (0);
char *cmd = r_str_newf ("winedbg '%s'", pathname + 10);
int res = r_socket_spawn (gs, cmd, 1000);
free (cmd);
if (!res) {
return NULL;
}
char *reply = runcmd (NULL);
if (reply) {
int rw = 7;
free (reply);
R_LOG_INFO ("Wine-dbg is ready to go");
return r_io_desc_new (io, &r_io_plugin_winedbg, pathname, rw, mode, gs);
}
R_LOG_ERROR ("Can't find the Wine-dbg prompt");
}
return NULL;
}