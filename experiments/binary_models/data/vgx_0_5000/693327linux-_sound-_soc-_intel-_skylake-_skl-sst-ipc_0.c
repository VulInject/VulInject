}
EXPORT_SYMBOL_GPL(skl_ipc_bind_unbind);


int skl_ipc_load_modules(struct sst_generic_ipc *ipc,
u8 module_cnt, void *data)
{
struct skl_ipc_header header = {0};
struct sst_ipc_message request;
int ret;

header.primary = IPC_MSG_TARGET(IPC_FW_GEN_MSG);
header.primary |= IPC_MSG_DIR(IPC_MSG_REQUEST);
header.primary |= IPC_GLB_TYPE(IPC_GLB_LOAD_MULTIPLE_MODS);
header.primary |= IPC_LOAD_MODULE_CNT(module_cnt);

request.header = *(u64 *)(&header);
request.data = data;
request.size = sizeof(u16) * module_cnt;

ret = sst_ipc_tx_message_nowait(ipc, request);
if (ret < 0)
dev_err(ipc->dev, "ipc: load modules failed :%d\n", ret);

return ret;
}