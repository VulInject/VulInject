int msIO_bufferWrite( void *cbData, void *data, int byteCount )

{
msIOBuffer *buf = (msIOBuffer *) cbData;


if( buf->data_offset + byteCount >= buf->data_len ) {
buf->data_len = buf->data_len * 2 + byteCount + 100;
if( buf->data == NULL )
buf->data = (unsigned char *) malloc(buf->data_len);
else
buf->data = (unsigned char *) realloc(buf->data, buf->data_len);

if( buf->data == NULL ) {
msSetError( MS_MEMERR,
"Failed to allocate %d bytes for capture buffer.",
"msIO_bufferWrite()", buf->data_len );
buf->data_len = 0;
return 0;
}
}



memcpy( buf->data + buf->data_offset, data, byteCount );
buf->data_offset += byteCount;
buf->data[buf->data_offset] = '\0';

return byteCount;
}