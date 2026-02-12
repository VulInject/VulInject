int skl_ipc_create_pipeline(struct sst_generic_ipc *ipc,
u16 ppl_mem_size, u8 ppl_type, u8 instance_id, u8 lp_mode)
{
struct skl_ipc_header header = {0};
u64 *ipc_header = (u64 *)(&header);
int ret;

header.primary = IPC_MSG_TARGET(IPC_FW_GEN_MSG);
header.primary |= IPC_MSG_DIR(IPC_MSG_REQUEST);
header.primary |= IPC_GLB_TYPE(IPC_GLB_CREATE_PPL);
header.primary |= IPC_INSTANCE_ID(instance_id);
header.primary |= IPC_PPL_TYPE(ppl_type);
header.primary |= IPC_PPL_MEM_SIZE(ppl_mem_size);

header.extension = IPC_PPL_LP_MODE(lp_mode);

dev_dbg(ipc->dev, "In %s header=%d\n", __func__, header.primary);
ret = sst_ipc_tx_message_wait(ipc, *ipc_header, NULL, 0, NULL, 0);
if (ret < 0) {
dev_err(ipc->dev, "ipc: create pipeline fail, err: %d\n", ret);
return ret;
}

return ret;
}