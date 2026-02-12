static int mlx4_how_many_lives_vf(struct mlx4_dev *dev)
{
struct mlx4_priv *priv = mlx4_priv(dev);
struct mlx4_slave_state *s_state;
int i;
int ret = 0;

for (i = 1; i < dev->num_slaves; ++i) {
s_state = &priv->mfunc.master.slave_state[i];
if (s_state->active && s_state->last_cmd !=
MLX4_COMM_CMD_RESET) {
mlx4_warn(dev, "%s: slave: %d is still active\n",
__func__, i);
ret++;
}
}
return ret;
}