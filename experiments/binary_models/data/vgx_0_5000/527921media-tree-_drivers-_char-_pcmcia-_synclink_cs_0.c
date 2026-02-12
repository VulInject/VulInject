static int hdlcdev_init(MGSLPC_INFO *info)
{
int rc;
struct net_device *dev;
hdlc_device *hdlc;



dev = alloc_hdlcdev(info);
if (dev == NULL) {
printk(KERN_ERR "%s:hdlc device allocation failure\n", __FILE__);
return -ENOMEM;
}


dev->base_addr = info->io_base;
dev->irq       = info->irq_level;


dev->netdev_ops	    = &hdlcdev_ops;
dev->watchdog_timeo = 10 * HZ;
dev->tx_queue_len   = 50;


hdlc         = dev_to_hdlc(dev);
hdlc->attach = hdlcdev_attach;
hdlc->xmit   = hdlcdev_xmit;


rc = register_hdlc_device(dev);
if (rc) {
printk(KERN_WARNING "%s:unable to register hdlc device\n", __FILE__);
free_netdev(dev);
return rc;
}

info->netdev = dev;
return 0;
}