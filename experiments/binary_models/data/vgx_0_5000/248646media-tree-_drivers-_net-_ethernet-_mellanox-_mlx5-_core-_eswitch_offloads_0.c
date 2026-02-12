static int esw_create_offloads_table(struct mlx5_eswitch *esw)
{
struct mlx5_flow_table_attr ft_attr = {};
struct mlx5_core_dev *dev = esw->dev;
struct mlx5_flow_table *ft_offloads;
struct mlx5_flow_namespace *ns;
int err = 0;

ns = mlx5_get_flow_namespace(dev, MLX5_FLOW_NAMESPACE_OFFLOADS);
if (!ns) {
esw_warn(esw->dev, "Failed to get offloads flow namespace\n");
return -EOPNOTSUPP;
}

ft_attr.max_fte = dev->priv.sriov.num_vfs + 2;

ft_offloads = mlx5_create_flow_table(ns, &ft_attr);
if (IS_ERR(ft_offloads)) {
err = PTR_ERR(ft_offloads);
esw_warn(esw->dev, "Failed to create offloads table, err %d\n", err);
return err;
}

esw->offloads.ft_offloads = ft_offloads;
return 0;
}