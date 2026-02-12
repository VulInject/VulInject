s32 rtw_register_task_alive(struct adapter *padapter, u32 task)
{
s32 res;
struct pwrctrl_priv *pwrctrl;
u8 pslv;

res = _SUCCESS;
pwrctrl = adapter_to_pwrctl(padapter);
pslv = PS_STATE_S2;

mutex_lock(&pwrctrl->lock);

register_task_alive(pwrctrl, task);

if (pwrctrl->fw_current_in_ps_mode) {
if (pwrctrl->cpwm < pslv) {
if (pwrctrl->cpwm < PS_STATE_S2)
res = _FAIL;
if (pwrctrl->rpwm < pslv)
rtw_set_rpwm(padapter, pslv);
}
}

mutex_unlock(&pwrctrl->lock);

if (res == _FAIL)
if (pwrctrl->cpwm >= PS_STATE_S2)
res = _SUCCESS;

return res;
}