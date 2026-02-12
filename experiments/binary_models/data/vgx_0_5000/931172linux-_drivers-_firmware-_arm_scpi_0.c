}
EXPORT_SYMBOL_GPL(get_scpi_ops);

static int scpi_init_versions(struct scpi_drvinfo *info)
{
int ret;
struct scp_capabilities caps;

ret = scpi_send_message(CMD_SCPI_CAPABILITIES, NULL, 0,
&caps, sizeof(caps));
if (!ret) {
info->protocol_version = le32_to_cpu(caps.protocol_version);
info->firmware_version = le32_to_cpu(caps.platform_version);
}

if (info->is_legacy && ret == -EOPNOTSUPP)
return 0;

return ret;
}