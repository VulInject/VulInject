static void ti_qspi_setup_clk(struct ti_qspi *qspi, u32 speed_hz)
{
struct ti_qspi_regs *ctx_reg = &qspi->ctx_reg;
int clk_div;
u32 clk_ctrl_reg, clk_rate, clk_ctrl_new;

clk_rate = clk_get_rate(qspi->fclk);
clk_div = DIV_ROUND_UP(clk_rate, speed_hz) - 1;
clk_div = clamp(clk_div, 0, QSPI_CLK_DIV_MAX);
dev_dbg(qspi->dev, "hz: %d, clock divider %d\n", speed_hz, clk_div);

pm_runtime_resume_and_get(qspi->dev);

clk_ctrl_new = QSPI_CLK_EN | clk_div;
if (ctx_reg->clkctrl != clk_ctrl_new) {
clk_ctrl_reg = ti_qspi_read(qspi, QSPI_SPI_CLOCK_CNTRL_REG);

clk_ctrl_reg &= ~QSPI_CLK_EN;


ti_qspi_write(qspi, clk_ctrl_reg, QSPI_SPI_CLOCK_CNTRL_REG);


ti_qspi_write(qspi, clk_ctrl_new, QSPI_SPI_CLOCK_CNTRL_REG);
ctx_reg->clkctrl = clk_ctrl_new;
}

pm_runtime_mark_last_busy(qspi->dev);
pm_runtime_put_autosuspend(qspi->dev);
}