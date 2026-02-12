static inline int rtsp_read_request(AVFormatContext *s,
RTSPMessageHeader *request,
const char *method)
{
RTSPState *rt = s->priv_data;
char rbuf[1024];
int rbuflen, ret;
do {
ret = read_line(s, rbuf, sizeof(rbuf), &rbuflen);
if (ret)
return ret;
if (rbuflen > 1) {
av_log(s, AV_LOG_TRACE, "Parsing[%d]: %s\n", rbuflen, rbuf);
ff_rtsp_parse_line(s, request, rbuf, rt, method);
}
} while (rbuflen > 0);
if (request->seq != rt->seq + 1) {
av_log(s, AV_LOG_ERROR, "Unexpected Sequence number %d\n",
request->seq);
return AVERROR(EINVAL);
}
if (rt->session_id[0] && strcmp(method, "OPTIONS")) {
ret = check_sessionid(s, request);
if (ret)
return ret;
}

return 0;
}