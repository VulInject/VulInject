static void mlxsw_sp_mr_route_stats_update(struct mlxsw_sp *mlxsw_sp,
struct mlxsw_sp_mr_route *mr_route)
{
struct mlxsw_sp_mr *mr = mlxsw_sp->mr;
u64 packets, bytes;

if (mr_route->route_action == MLXSW_SP_MR_ROUTE_ACTION_TRAP)
return;

mr->mr_ops->route_stats(mlxsw_sp, mr_route->route_priv, &packets,
&bytes);

if (mr_route->mfc->mfc_un.res.pkt != packets)
mr_route->mfc->mfc_un.res.lastuse = jiffies;
mr_route->mfc->mfc_un.res.pkt = packets;
mr_route->mfc->mfc_un.res.bytes = bytes;
}