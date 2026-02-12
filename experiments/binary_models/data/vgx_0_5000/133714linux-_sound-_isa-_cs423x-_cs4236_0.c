static int snd_cs423x_pnp_init_mpu(int dev, struct pnp_dev *pdev)
{
if (pnp_activate_dev(pdev) < 0) {
printk(KERN_ERR IDENT " MPU401 PnP configure failed for WSS (out of resources?)\n");
mpu_port[dev] = SNDRV_AUTO_PORT;
mpu_irq[dev] = SNDRV_AUTO_IRQ;
} else {
mpu_port[dev] = pnp_port_start(pdev, 0);
if (mpu_irq[dev] >= 0 &&
pnp_irq_valid(pdev, 0) &&
pnp_irq(pdev, 0) != (resource_size_t)-1) {
mpu_irq[dev] = pnp_irq(pdev, 0);
} else {
mpu_irq[dev] = -1;	
}
}
snd_printdd("isapnp MPU: port=0x%lx, irq=%i\n", mpu_port[dev], mpu_irq[dev]);
return 0;
}