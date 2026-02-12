static int ich_protect_lockdown(struct udevice *dev)
{
struct ich_spi_plat *plat = dev_get_plat(dev);
struct ich_spi_priv *priv = dev_get_priv(dev);
int ret = -ENOSYS;


if (priv->pch)
ret = pch_set_spi_protect(priv->pch, false);
if (ret == -ENOSYS) {
u8 bios_cntl;

bios_cntl = ich_readb(priv, priv->bcr);
bios_cntl &= ~BIT(5);	
bios_cntl |= 1;		
ich_writeb(priv, bios_cntl, priv->bcr);
} else if (ret) {
debug("%s: Failed to disable write-protect: err=%d\n",
__func__, ret);
return ret;
}


if (plat->lockdown) {
ich_spi_config_opcode(dev);
spi_lock_down(plat, priv->base);
}

return 0;
}