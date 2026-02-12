GF_Err CAM_ConnectChannel(GF_InputService *plug, LPNETCHANNEL channel, const char *url, Bool upstream)
{
GF_Err e;
IOSCamCtx *read;
if (!plug || !plug->priv) return GF_SERVICE_ERROR;
read = (IOSCamCtx *) plug->priv;

GF_LOG(GF_LOG_ERROR, GF_LOG_CORE, ("[ANDROID_CAMERA] CAM_ConnectChannel: %d\n", gf_th_id()));

e = GF_OK;
if (upstream) {
e = GF_ISOM_INVALID_FILE;
}

read->channel = channel;

camStartCamera(read);

gf_service_connect_ack(read->service, channel, e);
return e;
}