static int
mlxsw_sp_nexthop_group_update(struct mlxsw_sp *mlxsw_sp,
struct mlxsw_sp_nexthop_group_info *nhgi,
bool reallocate)
{
char ratr_pl[MLXSW_REG_RATR_LEN];
u32 adj_index = nhgi->adj_index; 
struct mlxsw_sp_nexthop *nh;
int i;

for (i = 0; i < nhgi->count; i++) {
nh = &nhgi->nexthops[i];

if (!nh->should_offload) {
nh->offloaded = 0;
continue;
}

if (nh->update || reallocate) {
int err = 0;

err = mlxsw_sp_nexthop_update(mlxsw_sp, adj_index, nh,
true, ratr_pl);
if (err)
return err;
nh->update = 0;
nh->offloaded = 1;
}
adj_index += nh->num_adj_entries;
}
return 0;
}