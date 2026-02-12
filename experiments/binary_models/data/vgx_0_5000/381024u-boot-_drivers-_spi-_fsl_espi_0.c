static int fsl_espi_rx(struct fsl_spi_slave *fsl, void *din,
unsigned int bytes)
{
ccsr_espi_t *espi = fsl->espi;
unsigned int tmpdin, rx_times;
unsigned char *buf, *p_cursor;

if (bytes <= 0)
return 0;

rx_times = DIV_ROUND_UP(bytes, 4);
buf = (unsigned char *)malloc(4 * rx_times);
if (!buf) {
debug("SF: Failed to malloc memory.\n");
return -1;
}
p_cursor = buf;
while (rx_times--) {
tmpdin = in_be32(&espi->rx);
debug("***spi_xfer:...%08x readed\n", tmpdin);
*(u32 *)p_cursor = tmpdin;
p_cursor += 4;
}

if (din)
memcpy(din, buf, bytes);

free(buf);
out_be32(&espi->event, ESPI_EV_RNE);

return bytes;
}