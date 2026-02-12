int wl1251_cmd_ps_mode(struct wl1251 *wl, u8 ps_mode)
{
struct wl1251_cmd_ps_params *ps_params = NULL;
int ret = 0;

wl1251_debug(DEBUG_CMD, "cmd set ps mode");

ps_params = kzalloc(sizeof(*ps_params), GFP_KERNEL);
if (!ps_params) {
ret = -ENOMEM;
goto out;
}

ps_params->ps_mode = ps_mode;
ps_params->send_null_data = 1;
ps_params->retries = 5;
ps_params->hang_over_period = 128;
ps_params->null_data_rate = 1; 

ret = wl1251_cmd_send(wl, CMD_SET_PS_MODE, ps_params,
sizeof(*ps_params));
if (ret < 0) {
wl1251_error("cmd set_ps_mode failed");
goto out;
}

out:
kfree(ps_params);
return ret;
}