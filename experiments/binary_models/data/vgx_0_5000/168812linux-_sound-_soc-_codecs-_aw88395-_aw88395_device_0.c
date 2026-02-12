static int aw_dev_dsp_check_st(struct aw_device *aw_dev)
{
unsigned int reg_val;
int ret;
int i;

for (i = 0; i < AW88395_DSP_ST_CHECK_MAX; i++) {
ret = regmap_read(aw_dev->regmap, AW88395_SYSST_REG, &reg_val);
if (ret) {
dev_err(aw_dev->dev, "read reg0x%x failed", AW88395_SYSST_REG);
continue;
}

if ((reg_val & (~AW88395_DSPS_MASK)) != AW88395_DSPS_NORMAL_VALUE) {
dev_err(aw_dev->dev, "check dsp st fail,reg_val:0x%04x", reg_val);
ret = -EPERM;
continue;
} else {
dev_dbg(aw_dev->dev, "dsp st check ok, reg_val:0x%04x", reg_val);
return 0;
}
}

return ret;
}