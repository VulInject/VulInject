static int mlx5e_set_rxfh_context(struct net_device *dev, const u32 *indir,
const u8 *key, const u8 hfunc,
u32 *rss_context, bool delete)
{
struct mlx5e_priv *priv = netdev_priv(dev);
int err;

mutex_lock(&priv->state_lock);
if (delete) {
err = mlx5e_rx_res_rss_destroy(priv->rx_res, *rss_context);
goto unlock;
}

if (*rss_context == ETH_RXFH_CONTEXT_ALLOC) {
unsigned int count = priv->channels.params.num_channels;

err = mlx5e_rx_res_rss_init(priv->rx_res, rss_context, count);
if (err)
goto unlock;
}

err = mlx5e_rx_res_rss_set_rxfh(priv->rx_res, *rss_context, indir, key,
hfunc == ETH_RSS_HASH_NO_CHANGE ? NULL : &hfunc);

unlock:
mutex_unlock(&priv->state_lock);
return err;
}