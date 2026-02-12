static int tusb_musb_vbus_status(struct musb *musb)
{
void __iomem	*tbase = musb->ctrl_base;
u32		otg_stat, prcm_mngmt;
int		ret = 0;

otg_stat = musb_readl(tbase, TUSB_DEV_OTG_STAT);
prcm_mngmt = musb_readl(tbase, TUSB_PRCM_MNGMT);


if (!(prcm_mngmt & TUSB_PRCM_MNGMT_OTG_VBUS_DET_EN)) {
u32 tmp = prcm_mngmt;
tmp |= TUSB_PRCM_MNGMT_OTG_VBUS_DET_EN;
musb_writel(tbase, TUSB_PRCM_MNGMT, tmp);
otg_stat = musb_readl(tbase, TUSB_DEV_OTG_STAT);
musb_writel(tbase, TUSB_PRCM_MNGMT, prcm_mngmt);
}

if (otg_stat & TUSB_DEV_OTG_STAT_VBUS_VALID)
ret = 1;

return ret;
}