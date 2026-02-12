static int
comp_method_zlib_init(LIBSSH2_SESSION * session, int compr,
void **abstract)
{
z_stream *strm;
int status;

strm = LIBSSH2_CALLOC(session, sizeof(z_stream));
if(!strm) {
return _libssh2_error(session, LIBSSH2_ERROR_ALLOC,
"Unable to allocate memory for "
"zlib compression/decompression");
}

strm->opaque = (voidpf) session;
strm->zalloc = (alloc_func) comp_method_zlib_alloc;
strm->zfree = (free_func) comp_method_zlib_free;
if(compr) {

status = deflateInit(strm, Z_DEFAULT_COMPRESSION);
}
else {

status = inflateInit(strm);
}

if(status != Z_OK) {
LIBSSH2_FREE(session, strm);
_libssh2_debug(session, LIBSSH2_TRACE_TRANS,
"unhandled zlib error %d", status);
return LIBSSH2_ERROR_COMPRESS;
}
*abstract = strm;

return LIBSSH2_ERROR_NONE;
}