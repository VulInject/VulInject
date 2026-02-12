static int mlxsw_linecard_ready_set(struct mlxsw_linecard *linecard)
{
struct mlxsw_core *mlxsw_core = linecard->linecards->mlxsw_core;
char mddc_pl[MLXSW_REG_MDDC_LEN];
int err;

err = mlxsw_linecard_device_info_update(linecard);
if (err)
return err;

mlxsw_reg_mddc_pack(mddc_pl, linecard->slot_index, false, true);
err = mlxsw_reg_write(mlxsw_core, MLXSW_REG(mddc), mddc_pl);
if (err)
return err;
linecard->ready = true;
return 0;
}