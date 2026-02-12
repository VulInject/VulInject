void dm_rf_pathcheck_workitemcallback(struct work_struct *work)
{
struct delayed_work *dwork = to_delayed_work(work);
struct r8192_priv *priv = container_of(dwork, struct r8192_priv, rfpath_check_wq);
struct net_device *dev = priv->ieee80211->dev;

u8 rfpath = 0, i;


read_nic_byte(dev, 0xc04, &rfpath);


for (i = 0; i < RF90_PATH_MAX; i++) {
if (rfpath & (0x01<<i))
priv->brfpath_rxenable[i] = true;
else
priv->brfpath_rxenable[i] = false;
}

dm_rxpath_sel_byrssi(dev);
}	