int avs_ipc_load_modules(struct avs_dev *adev, u16 *mod_ids, u32 num_mod_ids)
{
union avs_global_msg msg = AVS_GLOBAL_REQUEST(LOAD_MULTIPLE_MODULES);
struct avs_ipc_msg request;
int ret;

msg.load_multi_mods.mod_cnt = num_mod_ids;
request.header = msg.val;
request.data = mod_ids;
request.size = sizeof(*mod_ids) * num_mod_ids;

ret = avs_dsp_send_msg_timeout(adev, &request, NULL, AVS_CL_TIMEOUT_MS);
if (ret)
avs_ipc_err(adev, &request, "load multiple modules", ret);

return ret;
}