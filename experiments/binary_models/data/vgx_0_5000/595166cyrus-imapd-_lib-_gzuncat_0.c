EXPORTED int gzuc_member_start_from(struct gzuncat *gz, off_t offset)
{
if (gz->current_offset >= 0 || offset < 0) {
errno = EINVAL;
return Z_ERRNO;
}

if (!gz->in_buf)
gz->in_buf = xmalloc(gz->in_buf_size);

memset(gz->in_buf, 0, gz->in_buf_size);

off_t p = lseek(gz->fd, offset, SEEK_SET);
if (p < 0) return Z_ERRNO;

int r = _inflate_init(&gz->strm, gz->in_buf);
if (r) return r;



gz->current_offset = offset;
gz->next_offset = -1;
gz->member_eof = 0;
gz->file_eof = 0;
gz->bytes_read = 0;

return 0;
}