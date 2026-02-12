static size_t zstd_compress(struct perf_session *session, struct mmap *map,
void *dst, size_t dst_size, void *src, size_t src_size)
{
size_t compressed;
size_t max_record_size = PERF_SAMPLE_MAX_SIZE - sizeof(struct perf_record_compressed) - 1;
struct zstd_data *zstd_data = &session->zstd_data;

if (map && map->file)
zstd_data = &map->zstd_data;

compressed = zstd_compress_stream_to_records(zstd_data, dst, dst_size, src, src_size,
max_record_size, process_comp_header);

if (map && map->file) {
thread->bytes_transferred += src_size;
thread->bytes_compressed  += compressed;
} else {
session->bytes_transferred += src_size;
session->bytes_compressed  += compressed;
}

return compressed;
}