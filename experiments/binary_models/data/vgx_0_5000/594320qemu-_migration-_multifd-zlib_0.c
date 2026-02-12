static int zlib_recv_setup(MultiFDRecvParams *p, Error **errp)
{
struct zlib_data *z = g_malloc0(sizeof(struct zlib_data));
z_stream *zs = &z->zs;

p->data = z;
zs->zalloc = Z_NULL;
zs->zfree = Z_NULL;
zs->opaque = Z_NULL;
zs->avail_in = 0;
zs->next_in = Z_NULL;
if (inflateInit(zs) != Z_OK) {
error_setg(errp, "multifd %u: inflate init failed", p->id);
return -1;
}

z->zbuff_len = MULTIFD_PACKET_SIZE * 2;
z->zbuff = g_try_malloc(z->zbuff_len);
if (!z->zbuff) {
inflateEnd(zs);
error_setg(errp, "multifd %u: out of memory for zbuff", p->id);
return -1;
}
return 0;
}