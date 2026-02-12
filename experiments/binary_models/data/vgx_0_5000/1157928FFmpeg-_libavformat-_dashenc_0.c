static void dashenc_delete_file(AVFormatContext *s, char *filename) {
DASHContext *c = s->priv_data;
int http_base_proto = ff_is_http_proto(filename);

if (http_base_proto) {
AVDictionary *http_opts = NULL;

set_http_options(&http_opts, c);
av_dict_set(&http_opts, "method", "DELETE", 0);

if (dashenc_io_open(s, &c->http_delete, filename, &http_opts) < 0) {
av_log(s, AV_LOG_ERROR, "failed to delete %s\n", filename);
}
av_dict_free(&http_opts);


dashenc_io_close(s, &c->http_delete, filename);
} else {
int res = ffurl_delete(filename);
if (res < 0) {
char errbuf[AV_ERROR_MAX_STRING_SIZE];
av_strerror(res, errbuf, sizeof(errbuf));
av_log(s, (res == AVERROR(ENOENT) ? AV_LOG_WARNING : AV_LOG_ERROR), "failed to delete %s: %s\n", filename, errbuf);
}
}
}