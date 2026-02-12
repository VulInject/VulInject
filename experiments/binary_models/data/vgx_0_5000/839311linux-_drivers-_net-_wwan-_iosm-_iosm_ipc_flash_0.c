static int ipc_flash_send_data(struct iosm_devlink *ipc_devlink, u32 size,
u16 pack_id, u8 *payload, u32 payload_length)
{
struct iosm_flash_data flash_req;
int ret;

ret = ipc_flash_proc_format_ebl_pack(&flash_req, size,
pack_id, payload, payload_length);
if (ret) {
dev_err(ipc_devlink->dev, "EBL2 pack failed for pack_id:%d",
pack_id);
goto ipc_free_payload;
}

ret = ipc_imem_sys_devlink_write(ipc_devlink, (u8 *)&flash_req,
IOSM_EBL_HEAD_SIZE);
if (ret) {
dev_err(ipc_devlink->dev, "EBL Header write failed for Id:%x",
pack_id);
goto ipc_free_payload;
}

ret = ipc_imem_sys_devlink_write(ipc_devlink, payload, payload_length);
if (ret) {
dev_err(ipc_devlink->dev, "EBL Payload write failed for Id:%x",
pack_id);
}

ipc_free_payload:
return ret;
}