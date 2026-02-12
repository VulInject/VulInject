static void rpwm_workitem_callback(struct work_struct *work)
{
struct pwrctrl_priv *pwrpriv = container_of(work,
struct pwrctrl_priv, rpwm_workitem);
struct _adapter *padapter = container_of(pwrpriv,
struct _adapter, pwrctrlpriv);
if (pwrpriv->cpwm != pwrpriv->rpwm) {
mutex_lock(&pwrpriv->mutex_lock);
r8712_read8(padapter, SDIO_HCPWM);
pwrpriv->rpwm_retry = 1;
r8712_set_rpwm(padapter, pwrpriv->rpwm);
mutex_unlock(&pwrpriv->mutex_lock);
}
}