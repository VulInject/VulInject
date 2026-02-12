static int brcmstb_get_temp(struct thermal_zone_device *tz, int *temp)
{
struct brcmstb_thermal_priv *priv = tz->devdata;
u32 val;
long t;

val = __raw_readl(priv->tmon_base + AVS_TMON_STATUS);

if (!(val & AVS_TMON_STATUS_valid_msk)) {
dev_err(priv->dev, "reading not valid\n");
return -EIO;
}

val = (val & AVS_TMON_STATUS_data_msk) >> AVS_TMON_STATUS_data_shift;

t = avs_tmon_code_to_temp(priv, val);
if (t < 0)
*temp = 0;
else
*temp = t;

return 0;
}