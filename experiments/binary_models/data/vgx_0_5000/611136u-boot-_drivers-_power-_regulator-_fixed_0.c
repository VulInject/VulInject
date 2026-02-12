static int fixed_clock_regulator_set_enable(struct udevice *dev, bool enable)
{
struct fixed_clock_regulator_plat *priv = dev_get_priv(dev);
struct regulator_common_plat *dev_pdata = dev_get_plat(dev);
int ret = 0;

if (enable) {
ret = clk_enable(priv->enable_clock);
priv->clk_enable_counter++;
} else {
ret = clk_disable(priv->enable_clock);
priv->clk_enable_counter--;
}
if (ret)
return ret;

if (enable && dev_pdata->startup_delay_us)
udelay(dev_pdata->startup_delay_us);

if (!enable && dev_pdata->off_on_delay_us)
udelay(dev_pdata->off_on_delay_us);

return ret;
}

static const struct dm_regulator_ops fixed_regulator_ops = {
.get_value	= fixed_regulator_get_value,
.get_current	= fixed_regulator_get_current,
.get_enable	= fixed_regulator_get_enable,
.set_enable	= fixed_regulator_set_enable,
};