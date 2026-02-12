static int _stm32_qspi_poll(struct stm32_qspi_priv *priv,
const struct spi_mem_op *op)
{
void (*fifo)(u8 *val, void __iomem *addr);
u32 len = op->data.nbytes, sr;
u8 *buf;
int ret;

if (op->data.dir == SPI_MEM_DATA_IN) {
fifo = _stm32_qspi_read_fifo;
buf = op->data.buf.in;

} else {
fifo = _stm32_qspi_write_fifo;
buf = (u8 *)op->data.buf.out;
}

while (len--) {
ret = readl_poll_timeout(&priv->regs->sr, sr,
sr & STM32_QSPI_SR_FTF,
STM32_QSPI_FIFO_TIMEOUT_US);
if (ret) {
log_err("fifo timeout (len:%d stat:%#x)\n", len, sr);
return ret;
}

fifo(buf++, &priv->regs->dr);
}

return 0;
}