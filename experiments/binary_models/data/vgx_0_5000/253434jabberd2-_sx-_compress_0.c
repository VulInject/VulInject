static void _sx_compress_new(sx_t s, sx_plugin_t p) {
_sx_compress_conn_t sc = (_sx_compress_conn_t) s->plugin_data[p->index];


if(!(s->flags & SX_COMPRESS_WRAPPER) || sc)
return;

_sx_debug(ZONE, "preparing for compressed connect for %d", s->tag);

sc = (_sx_compress_conn_t) calloc(1, sizeof(struct _sx_compress_conn_st));


sc->rstrm.zalloc = Z_NULL;
sc->rstrm.zfree = Z_NULL;
sc->rstrm.opaque = Z_NULL;
sc->rstrm.avail_in = 0;
sc->rstrm.next_in = Z_NULL;
inflateInit(&(sc->rstrm));

sc->wstrm.zalloc = Z_NULL;
sc->wstrm.zfree = Z_NULL;
sc->wstrm.opaque = Z_NULL;
deflateInit(&(sc->wstrm), Z_DEFAULT_COMPRESSION);


sc->rbuf = _sx_buffer_new(NULL, 0, NULL, NULL);
sc->wbuf = _sx_buffer_new(NULL, 0, NULL, NULL);

s->plugin_data[p->index] = (void *) sc;


_sx_chain_io_plugin(s, p);
}