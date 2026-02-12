static int mt6357_get_buck_voltage_sel(struct regulator_dev *rdev)
{
int ret, regval;
struct mt6357_regulator_info *info = rdev_get_drvdata(rdev);

ret = regmap_read(rdev->regmap, info->da_vsel_reg, &regval);
if (ret != 0) {
dev_err(&rdev->dev,
"Failed to get mt6357 Buck %s vsel reg: %d\n",
info->desc.name, ret);
return ret;
}

regval &= info->da_vsel_mask;
regval >>= ffs(info->da_vsel_mask) - 1;

return regval;
}