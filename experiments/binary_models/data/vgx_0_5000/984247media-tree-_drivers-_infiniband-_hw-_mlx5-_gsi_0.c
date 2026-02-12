int mlx5_ib_gsi_modify_qp(struct ib_qp *qp, struct ib_qp_attr *attr,
int attr_mask)
{
struct mlx5_ib_dev *dev = to_mdev(qp->device);
struct mlx5_ib_gsi_qp *gsi = gsi_qp(qp);
int ret;

mlx5_ib_dbg(dev, "modifying GSI QP to state %d\n", attr->qp_state);

mutex_lock(&gsi->mutex);
ret = ib_modify_qp(gsi->rx_qp, attr, attr_mask);
if (ret) {
mlx5_ib_warn(dev, "unable to modify GSI rx QP: %d\n", ret);
goto unlock;
}

if (to_mqp(gsi->rx_qp)->state == IB_QPS_RTS)
setup_qps(gsi);

unlock:
mutex_unlock(&gsi->mutex);

return ret;
}