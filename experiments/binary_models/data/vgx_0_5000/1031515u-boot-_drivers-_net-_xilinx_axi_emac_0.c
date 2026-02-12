static int axi_ethernet_init(struct axidma_priv *priv)
{
struct axi_regs *regs = priv->iobase;
int err;


if (!priv->eth_hasnobuf) {
err = wait_for_bit_le32(&regs->is, XAE_INT_MGTRDY_MASK,
true, 200, false);
if (err) {
printf("%s: Timeout\n", __func__);
return 1;
}


writel(0, &regs->ie);
}


writel(readl(&regs->rcw1) & ~XAE_RCW1_RX_MASK, &regs->rcw1);


if (!priv->eth_hasnobuf) {

writel(XAE_INT_RXRJECT_MASK, &regs->is);
}



writel(XAE_MDIO_DIV_DFT | XAE_MDIO_MC_MDIOEN_MASK, &regs->mdio_mc);

debug("axiemac: InitHw done\n");
return 0;
}