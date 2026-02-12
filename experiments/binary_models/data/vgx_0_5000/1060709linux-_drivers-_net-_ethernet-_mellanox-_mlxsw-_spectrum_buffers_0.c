static int mlxsw_sp_sb_pr_write(struct mlxsw_sp *mlxsw_sp, u16 pool_index,
enum mlxsw_reg_sbpr_mode mode,
u32 size, bool infi_size)
{
const struct mlxsw_sp_sb_pool_des *des =
&mlxsw_sp->sb_vals->pool_dess[pool_index];
char sbpr_pl[MLXSW_REG_SBPR_LEN];
struct mlxsw_sp_sb_pr *pr;
int err;

mlxsw_reg_sbpr_pack(sbpr_pl, des->pool, des->dir, mode,
size, infi_size);
err = mlxsw_reg_write(mlxsw_sp->core, MLXSW_REG(sbpr), sbpr_pl);
if (err)
return err;

if (infi_size)
size = mlxsw_sp_bytes_cells(mlxsw_sp, mlxsw_sp->sb->sb_size);
pr = mlxsw_sp_sb_pr_get(mlxsw_sp, pool_index);
pr->mode = mode;
pr->size = size;
return 0;
}