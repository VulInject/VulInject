int dpseci_get_api_version(struct fsl_mc_io *mc_io, u32 cmd_flags,
u16 *major_ver, u16 *minor_ver)
{
struct fsl_mc_command cmd = { 0 };
struct dpseci_rsp_get_api_version *rsp_params;
int err;

cmd.header = mc_encode_cmd_header(DPSECI_CMDID_GET_API_VERSION,
cmd_flags, 0);
err = mc_send_command(mc_io, &cmd);
if (err)
return err;

rsp_params = (struct dpseci_rsp_get_api_version *)cmd.params;
*major_ver = le16_to_cpu(rsp_params->major);
*minor_ver = le16_to_cpu(rsp_params->minor);

return 0;
}