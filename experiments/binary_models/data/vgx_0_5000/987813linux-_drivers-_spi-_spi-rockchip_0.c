static void rockchip_spi_pio_reader(struct rockchip_spi *rs)
{
u32 words = readl_relaxed(rs->regs + ROCKCHIP_SPI_RXFLR);
u32 rx_left = (rs->rx_left > words) ? rs->rx_left - words : 0;


if (rx_left) {
u32 ftl = readl_relaxed(rs->regs + ROCKCHIP_SPI_RXFTLR) + 1;

if (rx_left < ftl) {
rx_left = ftl;
words = rs->rx_left - rx_left;
}
}

rs->rx_left = rx_left;
for (; words; words--) {
u32 rxw = readl_relaxed(rs->regs + ROCKCHIP_SPI_RXDR);

if (!rs->rx)
continue;

if (rs->n_bytes == 1)
*(u8 *)rs->rx = (u8)rxw;
else
*(u16 *)rs->rx = (u16)rxw;
rs->rx += rs->n_bytes;
}
}