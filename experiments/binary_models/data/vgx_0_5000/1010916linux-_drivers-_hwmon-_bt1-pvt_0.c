static int pvt_request_clks(struct pvt_hwmon *pvt)
{
int ret;

pvt->clks[PVT_CLOCK_APB].id = "pclk";
pvt->clks[PVT_CLOCK_REF].id = "ref";

ret = devm_clk_bulk_get(pvt->dev, PVT_CLOCK_NUM, pvt->clks);
if (ret) {
dev_err(pvt->dev, "Couldn't get PVT clocks descriptors\n");
return ret;
}

ret = clk_bulk_prepare_enable(PVT_CLOCK_NUM, pvt->clks);
if (ret) {
dev_err(pvt->dev, "Couldn't enable the PVT clocks\n");
return ret;
}

ret = devm_add_action_or_reset(pvt->dev, pvt_disable_clks, pvt);
if (ret) {
dev_err(pvt->dev, "Can't add PVT clocks disable action\n");
return ret;
}

return 0;
}