static int mlxsw_thermal_get_temp(struct thermal_zone_device *tzdev,
int *p_temp)
{
struct mlxsw_thermal *thermal = tzdev->devdata;
struct device *dev = thermal->bus_info->dev;
char mtmp_pl[MLXSW_REG_MTMP_LEN];
unsigned int temp;
int err;

mlxsw_reg_mtmp_pack(mtmp_pl, 0, false, false);

err = mlxsw_reg_query(thermal->core, MLXSW_REG(mtmp), mtmp_pl);
if (err) {
dev_err(dev, "Failed to query temp sensor\n");
return err;
}
mlxsw_reg_mtmp_unpack(mtmp_pl, &temp, NULL, NULL);

*p_temp = (int) temp;
return 0;
}