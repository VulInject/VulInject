int wcn36xx_smd_init_scan(struct wcn36xx *wcn, enum wcn36xx_hal_sys_mode mode)
{
struct wcn36xx_hal_init_scan_req_msg msg_body;
int ret = 0;

mutex_lock(&wcn->hal_mutex);
INIT_HAL_MSG(msg_body, WCN36XX_HAL_INIT_SCAN_REQ);

msg_body.mode = mode;

PREPARE_HAL_BUF(wcn->hal_buf, msg_body);

wcn36xx_dbg(WCN36XX_DBG_HAL, "hal init scan mode %d\n", msg_body.mode);

ret = wcn36xx_smd_send_and_wait(wcn, msg_body.header.len);
if (ret) {
wcn36xx_err("Sending hal_init_scan failed\n");
goto out;
}
ret = wcn36xx_smd_rsp_status_check(wcn->hal_buf, wcn->hal_rsp_len);
if (ret) {
wcn36xx_err("hal_init_scan response failed err=%d\n", ret);
goto out;
}
out:
mutex_unlock(&wcn->hal_mutex);
return ret;
}