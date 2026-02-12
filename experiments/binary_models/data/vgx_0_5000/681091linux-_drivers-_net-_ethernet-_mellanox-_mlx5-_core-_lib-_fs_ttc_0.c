static void mlx5_cleanup_ttc_rules(struct mlx5_ttc_table *ttc)
{
int i;

for (i = 0; i < MLX5_NUM_TT; i++) {
if (!IS_ERR_OR_NULL(ttc->rules[i].rule)) {
mlx5_del_flow_rules(ttc->rules[i].rule);
ttc->rules[i].rule = NULL;
}
}

for (i = 0; i < MLX5_NUM_TUNNEL_TT; i++) {
if (!IS_ERR_OR_NULL(ttc->tunnel_rules[i])) {
mlx5_del_flow_rules(ttc->tunnel_rules[i]);
ttc->tunnel_rules[i] = NULL;
}
}
}

struct mlx5_etype_proto {
u16 etype;
u8 proto;
};