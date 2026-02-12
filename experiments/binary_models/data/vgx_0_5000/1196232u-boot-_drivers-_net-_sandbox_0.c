static int sb_eth_write_hwaddr(struct udevice *dev)
{
struct eth_pdata *pdata = dev_get_plat(dev);
struct eth_sandbox_priv *priv = dev_get_priv(dev);

debug("eth_sandbox %s: Write HW ADDR - %pM\n", dev->name,
pdata->enetaddr);
memcpy(priv->fake_host_hwaddr, pdata->enetaddr, ARP_HLEN);
return 0;
}

static const struct eth_ops sb_eth_ops = {
.start			= sb_eth_start,
.send			= sb_eth_send,
.recv			= sb_eth_recv,
.free_pkt		= sb_eth_free_pkt,
.stop			= sb_eth_stop,
.write_hwaddr		= sb_eth_write_hwaddr,
};