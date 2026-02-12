void mlx5_rsc_event(struct mlx5_core_dev *dev, u32 rsn, int event_type)
{
struct mlx5_core_rsc_common *common = mlx5_get_rsc(dev, rsn);
struct mlx5_core_qp *qp;

if (!common)
return;

if (!is_event_type_allowed((rsn >> MLX5_USER_INDEX_LEN), event_type)) {
mlx5_core_warn(dev, "event 0x%.2x is not allowed on resource 0x%.8x\n",
event_type, rsn);
return;
}

switch (common->res) {
case MLX5_RES_QP:
case MLX5_RES_RQ:
case MLX5_RES_SQ:
qp = (struct mlx5_core_qp *)common;
qp->event(qp, event_type);
break;

default:
mlx5_core_warn(dev, "invalid resource type for 0x%x\n", rsn);
}

mlx5_core_put_rsc(common);
}