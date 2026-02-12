static int snd_cs423x_pnp_init_wss(int dev, struct pnp_dev *pdev)
{
if (pnp_activate_dev(pdev) < 0) {
printk(KERN_ERR IDENT " WSS PnP configure failed for WSS (out of resources?)\n");
return -EBUSY;
}
port[dev] = pnp_port_start(pdev, 0);
if (fm_port[dev] > 0)
fm_port[dev] = pnp_port_start(pdev, 1);
sb_port[dev] = pnp_port_start(pdev, 2);
irq[dev] = pnp_irq(pdev, 0);
dma1[dev] = pnp_dma(pdev, 0);
dma2[dev] = pnp_dma(pdev, 1) == 4 ? -1 : (int)pnp_dma(pdev, 1);
snd_printdd("isapnp WSS: wss port=0x%lx, fm port=0x%lx, sb port=0x%lx\n",
port[dev], fm_port[dev], sb_port[dev]);
snd_printdd("isapnp WSS: irq=%i, dma1=%i, dma2=%i\n",
irq[dev], dma1[dev], dma2[dev]);
return 0;
}