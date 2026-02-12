static void spi_request_bytes(struct exynos_spi *regs, int count, int step)
{
debug("%s: regs=%p, count=%d, step=%d\n", __func__, regs, count, step);


if (step == 4) {
setbits_le32(&regs->mode_cfg,
SPI_MODE_CH_WIDTH_WORD | SPI_MODE_BUS_WIDTH_WORD);
count /= 4;
setbits_le32(&regs->swap_cfg, SPI_TX_SWAP_EN | SPI_RX_SWAP_EN |
SPI_TX_BYTE_SWAP | SPI_RX_BYTE_SWAP |
SPI_TX_HWORD_SWAP | SPI_RX_HWORD_SWAP);
} else {

clrbits_le32(&regs->mode_cfg,
SPI_MODE_CH_WIDTH_WORD | SPI_MODE_BUS_WIDTH_WORD);
writel(0, &regs->swap_cfg);
}

assert(count && count < (1 << 16));
setbits_le32(&regs->ch_cfg, SPI_CH_RST);
clrbits_le32(&regs->ch_cfg, SPI_CH_RST);

writel(count | SPI_PACKET_CNT_EN, &regs->pkt_cnt);
}