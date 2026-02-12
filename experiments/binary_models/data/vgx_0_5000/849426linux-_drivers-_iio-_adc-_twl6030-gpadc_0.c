static int twl6030_gpadc_get_raw(struct twl6030_gpadc_data *gpadc,
int channel, int *res)
{
u8 reg = gpadc->pdata->channel_to_reg(channel);
__le16 val;
int raw_code;
int ret;

ret = twl6030_gpadc_read(reg, (u8 *)&val);
if (ret) {
dev_dbg(gpadc->dev, "unable to read register 0x%X\n", reg);
return ret;
}

raw_code = le16_to_cpu(val);
dev_dbg(gpadc->dev, "GPADC raw code: %d", raw_code);

if (twl6030_channel_calibrated(gpadc->pdata, channel))
*res = twl6030_gpadc_make_correction(gpadc, channel, raw_code);
else
*res = raw_code;

return ret;
}