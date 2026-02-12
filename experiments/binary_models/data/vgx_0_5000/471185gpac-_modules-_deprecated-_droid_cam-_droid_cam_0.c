GF_Err CAM_ConnectService(GF_InputService *plug, GF_ClientService *serv, const char *url)
{
ISOMReader *read;
if (!plug || !plug->priv || !serv) return GF_SERVICE_ERROR;
read = (ISOMReader *) plug->priv;

GF_LOG(GF_LOG_DEBUG, GF_LOG_CORE, ("[ANDROID_CAMERA] CAM_ConnectService: %d\n", gf_th_id()));

read->input = plug;
read->service = serv;
read->base_track_id = 1;
read->time_scale = 1000;

read->term = serv->term;

loadCameraControler(read);

camStartCamera(read);


gf_service_connect_ack(serv, NULL, GF_OK);


return GF_OK;
}