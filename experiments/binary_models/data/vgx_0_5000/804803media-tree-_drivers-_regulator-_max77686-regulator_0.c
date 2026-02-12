static int max77686_set_suspend_mode(struct regulator_dev *rdev,
unsigned int mode)
{
struct max77686_data *max77686 = rdev_get_drvdata(rdev);
unsigned int val;
int ret, id = rdev_get_id(rdev);


if (id >= MAX77686_BUCK5)
return 0;

switch (mode) {
case REGULATOR_MODE_IDLE:			
val = MAX77686_LDO_LOWPOWER_PWRREQ;
break;
case REGULATOR_MODE_NORMAL:			
val = max77686_map_normal_mode(max77686, id);
break;
default:
pr_warn("%s: regulator_suspend_mode : 0x%x not supported\n",
rdev->desc->name, mode);
return -EINVAL;
}

ret = regmap_update_bits(rdev->regmap, rdev->desc->enable_reg,
rdev->desc->enable_mask,
val << MAX77686_OPMODE_SHIFT);
if (ret)
return ret;

max77686->opmode[id] = val;
return 0;
}