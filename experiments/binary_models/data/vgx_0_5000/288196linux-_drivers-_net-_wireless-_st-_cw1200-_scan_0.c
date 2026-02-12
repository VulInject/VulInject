static int cw1200_scan_start(struct cw1200_common *priv, struct wsm_scan *scan)
{
int ret, i;
int tmo = 2000;

switch (priv->join_status) {
case CW1200_JOIN_STATUS_PRE_STA:
case CW1200_JOIN_STATUS_JOINING:
return -EBUSY;
default:
break;
}

wiphy_dbg(priv->hw->wiphy, "[SCAN] hw req, type %d, %d channels, flags: 0x%x.\n",
scan->type, scan->num_channels, scan->flags);

for (i = 0; i < scan->num_channels; ++i)
tmo += scan->ch[i].max_chan_time + 10;

cancel_delayed_work_sync(&priv->clear_recent_scan_work);
atomic_set(&priv->scan.in_progress, 1);
atomic_set(&priv->recent_scan, 1);
cw1200_pm_stay_awake(&priv->pm_state, msecs_to_jiffies(tmo));
queue_delayed_work(priv->workqueue, &priv->scan.timeout,
msecs_to_jiffies(tmo));
ret = wsm_scan(priv, scan);
if (ret) {
atomic_set(&priv->scan.in_progress, 0);
cancel_delayed_work_sync(&priv->scan.timeout);
cw1200_scan_restart_delayed(priv);
}
return ret;
}