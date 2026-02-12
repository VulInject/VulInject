static void switch_read_compress(int flags) {
struct sftp_compress *comp;
z_stream *stream;

comp = &(read_compresses[read_comp_idx]);
stream = &(read_streams[read_comp_idx]);


if (comp->use_zlib == flags &&
comp->stream_ready) {

(void) pr_log_writefile(sftp_logfd, MOD_SFTP_VERSION,
"done decompressing data: decompressed %" PR_LU " bytes to %" PR_LU
" bytes of data (%.2f)", (pr_off_t) stream->total_in,
(pr_off_t) stream->total_out,
stream->total_in == 0 ? 0.0 :
(float) stream->total_out / stream->total_in);

inflateEnd(stream);
comp->use_zlib = FALSE;
comp->stream_ready = FALSE;


if (read_comp_idx == 1) {
read_comp_idx = 0;
return;
}

read_comp_idx = 1;
}
}