static void mpu_port(struct net_device *dev, int c, dma_addr_t x)
{
struct i596_private *lp = netdev_priv(dev);

u32 v = (u32) (c) | (u32) (x);

if (lp->options & OPT_MPU_16BIT) {
writew(v & 0xffff, lp->mpu_port);
wmb();  
udelay(1);
writew(v >> 16, lp->mpu_port);
} else {
writel(v, lp->mpu_port);
wmb();  
udelay(1);
writel(v, lp->mpu_port);
}
}