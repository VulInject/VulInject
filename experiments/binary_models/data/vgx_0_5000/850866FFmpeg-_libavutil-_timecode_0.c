int av_timecode_init_from_string(AVTimecode *tc, AVRational rate, const char *str, void *log_ctx)
{
char c;
int hh, mm, ss, ff, flags;

if (sscanf(str, "%d:%d:%d%c%d", &hh, &mm, &ss, &c, &ff) != 5) {
av_log(log_ctx, AV_LOG_ERROR, "Unable to parse timecode, "
"syntax: hh:mm:ss[:;.]ff\n");
return AVERROR_INVALIDDATA;
}
flags = c != ':' ? AV_TIMECODE_FLAG_DROPFRAME : 0; 

return av_timecode_init_from_components(tc, rate, flags, hh, mm, ss, ff, log_ctx);
}