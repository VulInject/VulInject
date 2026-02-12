static struct id_map_entry *
id_map_get(struct ib_device *ibdev, int *pv_cm_id, int slave_id, int sl_cm_id)
{
struct id_map_entry *ent;
struct mlx4_ib_sriov *sriov = &to_mdev(ibdev)->sriov;

spin_lock(&sriov->id_map_lock);
if (*pv_cm_id == -1) {
ent = id_map_find_by_sl_id(ibdev, slave_id, sl_cm_id);
if (ent)
*pv_cm_id = (int) ent->pv_cm_id;
} else
ent = (struct id_map_entry *)idr_find(&sriov->pv_id_table, *pv_cm_id);
spin_unlock(&sriov->id_map_lock);

return ent;
}