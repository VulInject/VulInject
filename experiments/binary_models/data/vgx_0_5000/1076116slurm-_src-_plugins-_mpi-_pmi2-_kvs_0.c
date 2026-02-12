extern int temp_kvs_merge(buf_t *buf)
{
char *data;
uint32_t offset, size;

size = remaining_buf(buf);
if (size == 0) {
return SLURM_SUCCESS;
}
data = get_buf_data(buf);
offset = get_buf_offset(buf);

if (temp_kvs_cnt + size > temp_kvs_size) {
temp_kvs_size += size;
xrealloc(temp_kvs_buf, temp_kvs_size);
}
memcpy(&temp_kvs_buf[temp_kvs_cnt], &data[offset], size);
temp_kvs_cnt += size;

return SLURM_SUCCESS;
}