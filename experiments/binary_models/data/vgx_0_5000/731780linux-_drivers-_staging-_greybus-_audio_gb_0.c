}
EXPORT_SYMBOL_GPL(gb_audio_gb_disable_widget);

int gb_audio_gb_get_pcm(struct gb_connection *connection, u16 data_cport,
u32 *format, u32 *rate, u8 *channels,
u8 *sig_bits)
{
struct gb_audio_get_pcm_request req;
struct gb_audio_get_pcm_response resp;
int ret;

req.data_cport = cpu_to_le16(data_cport);

ret = gb_operation_sync(connection, GB_AUDIO_TYPE_GET_PCM,
&req, sizeof(req), &resp, sizeof(resp));
if (ret)
return ret;

*format = le32_to_cpu(resp.format);
*rate = le32_to_cpu(resp.rate);
*channels = resp.channels;
*sig_bits = resp.sig_bits;

return 0;
}