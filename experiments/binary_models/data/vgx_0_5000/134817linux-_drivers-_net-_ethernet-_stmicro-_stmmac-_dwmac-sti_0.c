static int sti_dwmac_set_mode(struct sti_dwmac *dwmac)
{
struct regmap *regmap = dwmac->regmap;
int iface = dwmac->interface;
u32 reg = dwmac->ctrl_reg;
u32 val;

if (dwmac->gmac_en)
regmap_update_bits(regmap, reg, EN_MASK, EN);

regmap_update_bits(regmap, reg, MII_PHY_SEL_MASK, phy_intf_sels[iface]);

val = (iface == PHY_INTERFACE_MODE_REVMII) ? 0 : ENMII;
regmap_update_bits(regmap, reg, ENMII_MASK, val);

dwmac->fix_retime_src(dwmac, dwmac->speed);

return 0;
}