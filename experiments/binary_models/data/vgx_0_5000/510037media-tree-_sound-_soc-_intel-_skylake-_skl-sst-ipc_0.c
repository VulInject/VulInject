int skl_ipc_set_d0ix(struct sst_generic_ipc *ipc, struct skl_ipc_d0ix_msg *msg)
{
struct skl_ipc_header header = {0};
u64 *ipc_header = (u64 *)(&header);
int ret;

header.primary = IPC_MSG_TARGET(IPC_MOD_MSG);
header.primary |= IPC_MSG_DIR(IPC_MSG_REQUEST);
header.primary |= IPC_GLB_TYPE(IPC_MOD_SET_D0IX);
header.primary |= IPC_MOD_INSTANCE_ID(msg->instance_id);
header.primary |= IPC_MOD_ID(msg->module_id);

header.extension = IPC_D0IX_WAKE(msg->wake);
header.extension |= IPC_D0IX_STREAMING(msg->streaming);

dev_dbg(ipc->dev, "In %s primary=%x ext=%x\n", __func__,
header.primary,	header.extension);


ret = sst_ipc_tx_message_nopm(ipc, *ipc_header, NULL, 0, NULL, 0);
if (ret < 0)
dev_err(ipc->dev, "ipc: set d0ix failed, err %d\n", ret);

return ret;
}