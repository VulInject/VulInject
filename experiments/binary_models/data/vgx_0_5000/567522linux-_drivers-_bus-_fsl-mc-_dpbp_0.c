}
EXPORT_SYMBOL_GPL(dpbp_reset);


int dpbp_get_attributes(struct fsl_mc_io *mc_io,
u32 cmd_flags,
u16 token,
struct dpbp_attr *attr)
{
struct fsl_mc_command cmd = { 0 };
struct dpbp_rsp_get_attributes *rsp_params;
int err;


cmd.header = mc_encode_cmd_header(DPBP_CMDID_GET_ATTR,
cmd_flags, token);


err = mc_send_command(mc_io, &cmd);
if (err)
return err;


rsp_params = (struct dpbp_rsp_get_attributes *)cmd.params;
attr->bpid = le16_to_cpu(rsp_params->bpid);
attr->id = le32_to_cpu(rsp_params->id);

return 0;
}