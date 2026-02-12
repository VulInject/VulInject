static int xcan_get_berr_counter(const struct net_device *ndev,
struct can_berr_counter *bec)
{
struct xcan_priv *priv = netdev_priv(ndev);
int ret;

ret = pm_runtime_get_sync(priv->dev);
if (ret < 0) {
netdev_err(ndev, "%s: pm_runtime_get failed(%d)\n",
__func__, ret);
return ret;
}

bec->txerr = priv->read_reg(priv, XCAN_ECR_OFFSET) & XCAN_ECR_TEC_MASK;
bec->rxerr = ((priv->read_reg(priv, XCAN_ECR_OFFSET) &
XCAN_ECR_REC_MASK) >> XCAN_ESR_REC_SHIFT);

pm_runtime_put(priv->dev);

return 0;
}