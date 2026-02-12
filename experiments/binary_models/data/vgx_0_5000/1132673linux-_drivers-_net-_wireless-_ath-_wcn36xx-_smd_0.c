int wcn36xx_smd_set_power_params(struct wcn36xx *wcn, bool ignore_dtim)
{
struct wcn36xx_hal_set_power_params_req_msg msg_body;
int ret;

mutex_lock(&wcn->hal_mutex);
INIT_HAL_MSG(msg_body, WCN36XX_HAL_SET_POWER_PARAMS_REQ);


if (ignore_dtim) {
msg_body.ignore_dtim = 1;
msg_body.dtim_period = 2;
}
msg_body.listen_interval = WCN36XX_LISTEN_INTERVAL(wcn);

PREPARE_HAL_BUF(wcn->hal_buf, msg_body);

ret = wcn36xx_smd_send_and_wait(wcn, msg_body.header.len);
if (ret) {
wcn36xx_err("Sending hal_set_power_params failed\n");
goto out;
}

out:
mutex_unlock(&wcn->hal_mutex);
return ret;
}