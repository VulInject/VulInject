static void mlxsw_sp_router_neigh_ent_ipv4_process(struct mlxsw_sp *mlxsw_sp,
char *rauhtd_pl,
int ent_index)
{
struct net_device *dev;
struct neighbour *n;
__be32 dipn;
u32 dip;
u16 rif;

mlxsw_reg_rauhtd_ent_ipv4_unpack(rauhtd_pl, ent_index, &rif, &dip);

if (!mlxsw_sp->rifs[rif]) {
dev_err_ratelimited(mlxsw_sp->bus_info->dev, "Incorrect RIF in neighbour entry\n");
return;
}

dipn = htonl(dip);
dev = mlxsw_sp->rifs[rif]->dev;
n = neigh_lookup(&arp_tbl, &dipn, dev);
if (!n) {
netdev_err(dev, "Failed to find matching neighbour for IP=%pI4h\n",
&dip);
return;
}

netdev_dbg(dev, "Updating neighbour with IP=%pI4h\n", &dip);
neigh_event_send(n, NULL);
neigh_release(n);
}