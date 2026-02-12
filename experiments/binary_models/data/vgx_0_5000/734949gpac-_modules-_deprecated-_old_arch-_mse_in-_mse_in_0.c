static GF_Err MSE_ConnectChannel(GF_InputService *plug, LPNETCHANNEL channel, const char *url, Bool upstream)
{
u32 ESID;
GF_MSE_In *msein = (GF_MSE_In*) plug->priv;
GF_HTML_SourceBuffer *sb = MSE_GetSourceBufferForChannel(msein->mediasource, channel);
if (!plug || !plug->priv || !sb || !sb->parser) return GF_SERVICE_ERROR;
if (strstr(url, "ES_ID")) {
GF_HTML_Track *track;
sscanf(url, "ES_ID=%u", &ESID);
track = gf_mse_get_track_by_esid(sb, ESID);
if (!track) {
return GF_BAD_PARAM;
} else {
track->channel = channel;
GF_LOG(GF_LOG_DEBUG, GF_LOG_DASH, ("[MSE_IN] Received Channel Connection request on Service %p from terminal for URL '%s#%s'\n", channel, msein->mediasource->blobURI, url));
return sb->parser->ConnectChannel(sb->parser, channel, url, upstream);
}
} else {
return GF_BAD_PARAM;
}
}