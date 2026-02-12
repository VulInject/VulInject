}
EXPORT_SYMBOL(dpcon_get_attributes);


int dpcon_set_notification(struct fsl_mc_io *mc_io,
u32 cmd_flags,
u16 token,
struct dpcon_notification_cfg *cfg)
{
struct mc_command cmd = { 0 };
struct dpcon_cmd_set_notification *dpcon_cmd;


cmd.header = mc_encode_cmd_header(DPCON_CMDID_SET_NOTIFICATION,
cmd_flags,
token);
dpcon_cmd = (struct dpcon_cmd_set_notification *)cmd.params;
dpcon_cmd->dpio_id = cpu_to_le32(cfg->dpio_id);
dpcon_cmd->priority = cfg->priority;
dpcon_cmd->user_ctx = cpu_to_le64(cfg->user_ctx);


return mc_send_command(mc_io, &cmd);
}