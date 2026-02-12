void stmmac_ptp_register(struct stmmac_priv *priv)
{
int i;

for (i = 0; i < priv->dma_cap.pps_out_num; i++) {
if (i >= STMMAC_PPS_MAX)
break;
priv->pps[i].available = true;
}

if (priv->plat->ptp_max_adj)
stmmac_ptp_clock_ops.max_adj = priv->plat->ptp_max_adj;


priv->plat->cdc_error_adj = 0;
if (priv->plat->has_gmac4 && priv->plat->clk_ptp_rate)
priv->plat->cdc_error_adj = (2 * NSEC_PER_SEC) / priv->plat->clk_ptp_rate;

stmmac_ptp_clock_ops.n_per_out = priv->dma_cap.pps_out_num;
stmmac_ptp_clock_ops.n_ext_ts = priv->dma_cap.aux_snapshot_n;

rwlock_init(&priv->ptp_lock);
mutex_init(&priv->aux_ts_lock);
priv->ptp_clock_ops = stmmac_ptp_clock_ops;

priv->ptp_clock = ptp_clock_register(&priv->ptp_clock_ops,
priv->device);
if (IS_ERR(priv->ptp_clock)) {
netdev_err(priv->dev, "ptp_clock_register failed\n");
priv->ptp_clock = NULL;
} else if (priv->ptp_clock)
netdev_info(priv->dev, "registered PTP clock\n");
}