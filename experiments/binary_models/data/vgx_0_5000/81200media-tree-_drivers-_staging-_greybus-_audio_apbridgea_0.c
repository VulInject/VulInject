int gb_audio_apbridgea_register_cport(struct gb_connection *connection,
__u16 i2s_port, __u16 cportid,
__u8 direction)
{
struct audio_apbridgea_register_cport_request req;
int ret;

req.hdr.type = AUDIO_APBRIDGEA_TYPE_REGISTER_CPORT;
req.hdr.i2s_port = cpu_to_le16(i2s_port);
req.cport = cpu_to_le16(cportid);
req.direction = direction;

ret = gb_pm_runtime_get_sync(connection->bundle);
if (ret)
return ret;

return gb_hd_output(connection->hd, &req, sizeof(req),
GB_APB_REQUEST_AUDIO_CONTROL, true);
}