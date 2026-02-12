int axspi_write_reg(struct axspi_data *ax_spi, u8 reg, u16 value)
{
int ret;

memset(ax_spi->cmd_buf, 0, sizeof(ax_spi->cmd_buf));
ax_spi->cmd_buf[0] = AX_SPICMD_WRITE_REG;	
ax_spi->cmd_buf[1] = reg;			
ax_spi->cmd_buf[2] = value;
ax_spi->cmd_buf[3] = value >> 8;

ret = spi_write(ax_spi->spi, ax_spi->cmd_buf, 4);
if (ret)
dev_err(&ax_spi->spi->dev, "%s() failed: ret = %d\n", __func__, ret);
return ret;
}