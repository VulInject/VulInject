static int dwxgmac2_rss_configure(struct mac_device_info *hw,
struct stmmac_rss *cfg, u32 num_rxq)
{
void __iomem *ioaddr = hw->pcsr;
u32 value, *key;
int i, ret;

value = readl(ioaddr + XGMAC_RSS_CTRL);
if (!cfg || !cfg->enable) {
value &= ~XGMAC_RSSE;
writel(value, ioaddr + XGMAC_RSS_CTRL);
return 0;
}

key = (u32 *)cfg->key;
for (i = 0; i < (ARRAY_SIZE(cfg->key) / sizeof(u32)); i++) {
ret = dwxgmac2_rss_write_reg(ioaddr, true, i, key[i]);
if (ret)
return ret;
}

for (i = 0; i < ARRAY_SIZE(cfg->table); i++) {
ret = dwxgmac2_rss_write_reg(ioaddr, false, i, cfg->table[i]);
if (ret)
return ret;
}

for (i = 0; i < num_rxq; i++)
dwxgmac2_map_mtl_to_dma(hw, i, XGMAC_QDDMACH);

value |= XGMAC_UDP4TE | XGMAC_TCP4TE | XGMAC_IP2TE | XGMAC_RSSE;
writel(value, ioaddr + XGMAC_RSS_CTRL);
return 0;
}