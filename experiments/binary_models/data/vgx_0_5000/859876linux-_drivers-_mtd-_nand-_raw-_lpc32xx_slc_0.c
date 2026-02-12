static struct lpc32xx_nand_cfg_slc *lpc32xx_parse_dt(struct device *dev)
{
struct lpc32xx_nand_cfg_slc *ncfg;
struct device_node *np = dev->of_node;

ncfg = devm_kzalloc(dev, sizeof(*ncfg), GFP_KERNEL);
if (!ncfg)
return NULL;

of_property_read_u32(np, "nxp,wdr-clks", &ncfg->wdr_clks);
of_property_read_u32(np, "nxp,wwidth", &ncfg->wwidth);
of_property_read_u32(np, "nxp,whold", &ncfg->whold);
of_property_read_u32(np, "nxp,wsetup", &ncfg->wsetup);
of_property_read_u32(np, "nxp,rdr-clks", &ncfg->rdr_clks);
of_property_read_u32(np, "nxp,rwidth", &ncfg->rwidth);
of_property_read_u32(np, "nxp,rhold", &ncfg->rhold);
of_property_read_u32(np, "nxp,rsetup", &ncfg->rsetup);

if (!ncfg->wdr_clks || !ncfg->wwidth || !ncfg->whold ||
!ncfg->wsetup || !ncfg->rdr_clks || !ncfg->rwidth ||
!ncfg->rhold || !ncfg->rsetup) {
dev_err(dev, "chip parameters not specified correctly\n");
return NULL;
}

return ncfg;
}