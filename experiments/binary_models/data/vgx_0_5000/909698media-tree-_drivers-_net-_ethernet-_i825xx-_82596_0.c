static void rebuild_rx_bufs(struct net_device *dev)
{
struct i596_private *lp = dev->ml_priv;
int i;



for (i = 0; i < rx_ring_size; i++) {
lp->rfds[i].rbd = I596_NULL;
lp->rfds[i].cmd = CMD_FLEX;
}
lp->rfds[rx_ring_size-1].cmd = CMD_EOL|CMD_FLEX;
lp->rfd_head = lp->rfds;
lp->scb.rfd = WSWAPrfd(virt_to_bus(lp->rfds));
lp->rbd_head = lp->rbds;
lp->rfds[0].rbd = WSWAPrbd(virt_to_bus(lp->rbds));
}