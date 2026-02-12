static void dw_mci_prepare_sdio_irq(struct dw_mci_slot *slot, bool prepare)
{
struct dw_mci *host = slot->host;
const u32 clken_low_pwr = SDMMC_CLKEN_LOW_PWR << slot->id;
u32 clk_en_a_old;
u32 clk_en_a;



clk_en_a_old = mci_readl(host, CLKENA);
if (prepare) {
set_bit(DW_MMC_CARD_NO_LOW_PWR, &slot->flags);
clk_en_a = clk_en_a_old & ~clken_low_pwr;
} else {
clear_bit(DW_MMC_CARD_NO_LOW_PWR, &slot->flags);
clk_en_a = clk_en_a_old | clken_low_pwr;
}

if (clk_en_a != clk_en_a_old) {
mci_writel(host, CLKENA, clk_en_a);
mci_send_cmd(slot, SDMMC_CMD_UPD_CLK | SDMMC_CMD_PRV_DAT_WAIT,
0);
}
}