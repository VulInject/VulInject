static RESET_TYPE RxCheckStuck(struct net_device *dev)
{
struct r8192_priv *priv = ieee80211_priv(dev);
bool        bRxCheck = false;

if (priv->IrpPendingCount > 1)
bRxCheck = true;

if (bRxCheck) {
if (HalRxCheckStuck819xUsb(dev)) {
RT_TRACE(COMP_RESET, "RxStuck Condition\n");
return RESET_TYPE_SILENT;
}
}
return RESET_TYPE_NORESET;
}