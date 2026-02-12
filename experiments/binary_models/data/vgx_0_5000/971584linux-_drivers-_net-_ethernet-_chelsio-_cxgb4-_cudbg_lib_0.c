static int cudbg_do_compression(struct cudbg_init *pdbg_init,
struct cudbg_buffer *pin_buff,
struct cudbg_buffer *dbg_buff)
{
struct cudbg_buffer temp_in_buff = { 0 };
int bytes_left, bytes_read, bytes;
u32 offset = dbg_buff->offset;
int rc;

temp_in_buff.offset = pin_buff->offset;
temp_in_buff.data = pin_buff->data;
temp_in_buff.size = pin_buff->size;

bytes_left = pin_buff->size;
bytes_read = 0;
while (bytes_left > 0) {

bytes = min_t(unsigned long, bytes_left,
(unsigned long)CUDBG_CHUNK_SIZE);
temp_in_buff.data = (char *)pin_buff->data + bytes_read;
temp_in_buff.size = bytes;
rc = cudbg_compress_buff(pdbg_init, &temp_in_buff, dbg_buff);
if (rc)
return rc;
bytes_left -= bytes;
bytes_read += bytes;
}

pin_buff->size = dbg_buff->offset - offset;
return 0;
}