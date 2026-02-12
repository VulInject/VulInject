int
mlx5e_tc_match_to_reg_set_and_get_id(struct mlx5_core_dev *mdev,
struct mlx5e_tc_mod_hdr_acts *mod_hdr_acts,
enum mlx5_flow_namespace_type ns,
enum mlx5e_tc_attr_to_reg type,
u32 data)
{
int moffset = mlx5e_tc_attr_to_reg_mappings[type].moffset;
int mfield = mlx5e_tc_attr_to_reg_mappings[type].mfield;
int mlen = mlx5e_tc_attr_to_reg_mappings[type].mlen;
char *modact;
int err;

modact = mlx5e_mod_hdr_alloc(mdev, ns, mod_hdr_acts);
if (IS_ERR(modact))
return PTR_ERR(modact);


if (mlen == 32)
mlen = 0;

MLX5_SET(set_action_in, modact, action_type, MLX5_ACTION_TYPE_SET);
MLX5_SET(set_action_in, modact, field, mfield);
MLX5_SET(set_action_in, modact, offset, moffset);
MLX5_SET(set_action_in, modact, length, mlen);
MLX5_SET(set_action_in, modact, data, data);
err = mod_hdr_acts->num_actions;
mod_hdr_acts->num_actions++;

return err;
}