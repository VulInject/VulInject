static int __read(RIO *io, RIODesc *desc, ut8 *buf, int count) {
RIOMalloc *mal = (RIOMalloc*)desc->data;
if (mal) {
ut64 addr = mal->offset;
r_cons_break_push (NULL, NULL);
RIOSocketData *sdat = mal->data;
RSocket *s = sdat->sc;
ut8 *mem = malloc (4096);
if (mem) {
int c = r_socket_read (s, mem, 4096);
if (c == -1) {
perror ("write");
R_LOG_DEBUG ("serial.read: %d", c);
}
if (c > 0) {
r_io_stream_read (sdat->ios, mem, c);
int osz = mal->size;
io_memory_resize (io, desc, mal->size + c);
memcpy (mal->buf + osz, mem, c);
io->coreb.cmdf (io->coreb.core, "f nread_%d %d %d",
sdat->count, c, mal->size);

sdat->count++;
}
free (mem);
}
r_cons_break_pop ();
mal->offset = addr;
return io_memory_read (io, desc, buf, count);
}
return -1;
}