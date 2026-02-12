int mlx5e_health_sq_to_ready(struct mlx5_core_dev *mdev, struct net_device *dev, u32 sqn)
{
struct mlx5e_modify_sq_param msp = {};
int err;

msp.curr_state = MLX5_SQC_STATE_ERR;
msp.next_state = MLX5_SQC_STATE_RST;

err = mlx5e_modify_sq(mdev, sqn, &msp);
if (err) {
netdev_err(dev, "Failed to move sq 0x%x to reset\n", sqn);
return err;
}

memset(&msp, 0, sizeof(msp));
msp.curr_state = MLX5_SQC_STATE_RST;
msp.next_state = MLX5_SQC_STATE_RDY;

err = mlx5e_modify_sq(mdev, sqn, &msp);
if (err) {
netdev_err(dev, "Failed to move sq 0x%x to ready\n", sqn);
return err;
}

return 0;
}