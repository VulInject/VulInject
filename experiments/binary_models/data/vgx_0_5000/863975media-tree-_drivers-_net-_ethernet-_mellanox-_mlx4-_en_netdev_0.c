int mlx4_en_setup_tc(struct net_device *dev, u8 up)
{
struct mlx4_en_priv *priv = netdev_priv(dev);
int i;
unsigned int offset = 0;

if (up && up != MLX4_EN_NUM_UP)
return -EINVAL;

netdev_set_num_tc(dev, up);


for (i = 0; i < up; i++) {
netdev_set_tc_queue(dev, i, priv->num_tx_rings_p_up, offset);
offset += priv->num_tx_rings_p_up;
}

if (!mlx4_is_slave(priv->mdev->dev)) {
if (up) {
if (priv->dcbx_cap)
priv->flags |= MLX4_EN_FLAG_DCB_ENABLED;
} else {
priv->flags &= ~MLX4_EN_FLAG_DCB_ENABLED;
priv->cee_config.pfc_state = false;
}
}

return 0;
}