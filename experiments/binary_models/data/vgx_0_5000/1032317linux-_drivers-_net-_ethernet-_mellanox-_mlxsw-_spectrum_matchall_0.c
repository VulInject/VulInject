static int mlxsw_sp1_mall_sample_add(struct mlxsw_sp *mlxsw_sp,
struct mlxsw_sp_port *mlxsw_sp_port,
struct mlxsw_sp_mall_entry *mall_entry,
struct netlink_ext_ack *extack)
{
u32 rate = mall_entry->sample.params.rate;

if (!mall_entry->ingress) {
NL_SET_ERR_MSG(extack, "Sampling is not supported on egress");
return -EOPNOTSUPP;
}

if (rate > MLXSW_REG_MPSC_RATE_MAX) {
NL_SET_ERR_MSG(extack, "Unsupported sampling rate");
return -EOPNOTSUPP;
}

return mlxsw_sp_mall_port_sample_set(mlxsw_sp_port, true, rate);
}