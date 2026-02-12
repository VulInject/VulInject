int spi_write_then_read(struct spi_slave *slave, const u8 *opcode,
size_t n_opcode, const u8 *txbuf, u8 *rxbuf,
size_t n_buf)
{
unsigned long flags = SPI_XFER_BEGIN;
int ret;

if (n_buf == 0)
flags |= SPI_XFER_END;

ret = spi_xfer(slave, n_opcode * 8, opcode, NULL, flags);
if (ret) {
dev_dbg(slave->dev,
"spi: failed to send command (%zu bytes): %d\n",
n_opcode, ret);
} else if (n_buf != 0) {
ret = spi_xfer(slave, n_buf * 8, txbuf, rxbuf, SPI_XFER_END);
if (ret)
dev_dbg(slave->dev,
"spi: failed to transfer %zu bytes of data: %d\n",
n_buf, ret);
}

return ret;
}