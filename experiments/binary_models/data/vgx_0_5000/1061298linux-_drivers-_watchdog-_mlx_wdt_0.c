static unsigned int mlxreg_wdt_get_timeleft(struct watchdog_device *wdd)
{
struct mlxreg_wdt *wdt = watchdog_get_drvdata(wdd);
struct mlxreg_core_data *reg_data = &wdt->pdata->data[wdt->tleft_idx];
u32 regval, msb, lsb;
int rc;

if (wdt->wdt_type == MLX_WDT_TYPE2) {
rc = regmap_read(wdt->regmap, reg_data->reg, &regval);
} else {

if (wdt->regmap_val_sz == 1) {
rc = regmap_read(wdt->regmap, reg_data->reg, &lsb);
if (!rc) {
rc = regmap_read(wdt->regmap,
reg_data->reg + 1, &msb);
regval = (msb & 0xff) << 8 | (lsb & 0xff);
}
} else {
rc = regmap_read(wdt->regmap, reg_data->reg, &regval);
}
}


return rc == 0 ? regval : 0;
}

static const struct watchdog_ops mlxreg_wdt_ops_type1 = {
.start		= mlxreg_wdt_start,
.stop		= mlxreg_wdt_stop,
.ping		= mlxreg_wdt_ping,
.set_timeout	= mlxreg_wdt_set_timeout,
.owner		= THIS_MODULE,
};