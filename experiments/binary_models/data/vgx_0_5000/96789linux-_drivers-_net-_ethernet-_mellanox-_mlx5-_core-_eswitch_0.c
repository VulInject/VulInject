static int esw_add_uc_addr(struct mlx5_eswitch *esw, struct vport_addr *vaddr)
{
u8 *mac = vaddr->node.addr;
u16 vport = vaddr->vport;
int err;


if (mlx5_esw_is_manager_vport(esw, vport))
goto fdb_add;

err = mlx5_mpfs_add_mac(esw->dev, mac);
if (err) {
esw_warn(esw->dev,
"Failed to add L2 table mac(%pM) for vport(0x%x), err(%d)\n",
mac, vport, err);
return err;
}
vaddr->mpfs = true;

fdb_add:

if (esw->fdb_table.legacy.fdb && esw->mode == MLX5_ESWITCH_LEGACY)
vaddr->flow_rule = esw_fdb_set_vport_rule(esw, mac, vport);

esw_debug(esw->dev, "\tADDED UC MAC: vport[%d] %pM fr(%p)\n",
vport, mac, vaddr->flow_rule);

return 0;
}