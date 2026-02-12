void qat_hal_start(struct icp_qat_fw_loader_handle *handle, unsigned char ae,
unsigned int ctx_mask)
{
int retry = 0;
unsigned int fcu_sts = 0;

if (handle->fw_auth) {
SET_CAP_CSR(handle, FCU_CONTROL, FCU_CTRL_CMD_START);
do {
msleep(FW_AUTH_WAIT_PERIOD);
fcu_sts = GET_CAP_CSR(handle, FCU_STATUS);
if (((fcu_sts >> FCU_STS_DONE_POS) & 0x1))
return;
} while (retry++ < FW_AUTH_MAX_RETRY);
pr_err("QAT: start error (AE 0x%x FCU_STS = 0x%x)\n", ae,
fcu_sts);
} else {
qat_hal_put_wakeup_event(handle, ae, (~ctx_mask) &
ICP_QAT_UCLO_AE_ALL_CTX, 0x10000);
qat_hal_enable_ctx(handle, ae, ctx_mask);
}
}