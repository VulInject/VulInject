static int as3722_ldo_get_current_limit(struct regulator_dev *rdev)
{
struct as3722_regulators *as3722_regs = rdev_get_drvdata(rdev);
struct as3722 *as3722 = as3722_regs->as3722;
int id = rdev_get_id(rdev);
u32 val;
int ret;

ret = as3722_read(as3722, as3722_reg_lookup[id].vsel_reg, &val);
if (ret < 0) {
dev_err(as3722_regs->dev, "Reg 0x%02x read failed: %d\n",
as3722_reg_lookup[id].vsel_reg, ret);
return ret;
}
if (val & AS3722_LDO_ILIMIT_MASK)
return 300000;
return 150000;
}