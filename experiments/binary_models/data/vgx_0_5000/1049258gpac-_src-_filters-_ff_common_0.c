static void ff_log_callback(void *avcl, int level, const char *fmt, va_list vl)
{
AVClass* avc = avcl ? *(AVClass**)avcl : NULL;
GF_LOG_Level glevel = ffmpeg_to_gpac_log_level(level);
GF_LOG_Tool gtool = gpac_to_ffmpeg_log_tool(avc);

if (!gf_log_tool_level_on(gtool, glevel))
return;
gf_log_lt(glevel, gtool);

if (avc) {
char buffer[FF_LOG_SIZE+1];
buffer[FF_LOG_SIZE] = 0;
vsnprintf(buffer, FF_LOG_SIZE, fmt, vl);

gf_log( "[%s] %s", avc->item_name(avcl), buffer);
} else {
gf_log_va_list(glevel, gtool, fmt, vl);
}
}