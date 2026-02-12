* the DPL or by calling the dpbp_create function.
* This function returns a unique authentication token,
* associated with the specific object ID and the specific MC
* portal; this token must be used in all subsequent commands for
* this specific object
*
* Return:	'0' on Success; Error code otherwise.
*/
int dpbp_open(struct fsl_mc_io *mc_io,
u32 cmd_flags,
int dpbp_id,
u16 *token)
{
struct mc_command cmd = { 0 };
struct dpbp_cmd_open *cmd_params;
int err;


cmd.header = mc_encode_cmd_header(DPBP_CMDID_OPEN,
cmd_flags, 0);
cmd_params = (struct dpbp_cmd_open *)cmd.params;
cmd_params->dpbp_id = cpu_to_le32(dpbp_id);


err = mc_send_command(mc_io, &cmd);
if (err)
return err;


*token = mc_cmd_hdr_read_token(&cmd);

return err;
}