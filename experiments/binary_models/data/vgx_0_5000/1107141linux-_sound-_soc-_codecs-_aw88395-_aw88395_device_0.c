static int aw_dev_vsense_select(struct aw_device *aw_dev, int *vsense_select)
{
unsigned int vsense_reg_val;
int ret;

ret = regmap_read(aw_dev->regmap, AW88395_I2SCFG3_REG, &vsense_reg_val);
if (ret) {
dev_err(aw_dev->dev, "read vsense_reg_val failed");
return ret;
}
dev_dbg(aw_dev->dev, "vsense_reg = 0x%x", vsense_reg_val);

if (vsense_reg_val & (~AW88395_VDSEL_MASK)) {
*vsense_select = AW88395_DEV_VDSEL_VSENSE;
dev_dbg(aw_dev->dev, "vsense outside");
} else {
*vsense_select = AW88395_DEV_VDSEL_DAC;
dev_dbg(aw_dev->dev, "vsense inside");
}

return 0;
}