u8 rtw_handle_tkip_countermeasure(struct adapter *adapter, const char *caller)
{
struct security_priv *securitypriv = &(adapter->securitypriv);
u8 status = _SUCCESS;

if (securitypriv->btkip_countermeasure) {
unsigned long passing_ms = jiffies_to_msecs(jiffies - securitypriv->btkip_countermeasure_time);

if (passing_ms > 60*1000) {
netdev_dbg(adapter->pnetdev,
"%s(%s) countermeasure time:%lus > 60s\n",
caller, ADPT_ARG(adapter),
passing_ms / 1000);
securitypriv->btkip_countermeasure = false;
securitypriv->btkip_countermeasure_time = 0;
} else {
netdev_dbg(adapter->pnetdev,
"%s(%s) countermeasure time:%lus < 60s\n",
caller, ADPT_ARG(adapter),
passing_ms / 1000);
status = _FAIL;
}
}

return status;
}