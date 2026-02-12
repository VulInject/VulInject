static void cvm_oct_check_preamble_errors(struct net_device *dev)
{
struct octeon_ethernet *priv = netdev_priv(dev);
cvmx_helper_link_info_t link_info;
unsigned long flags;

link_info.u64 = priv->link_info;


spin_lock_irqsave(&global_register_lock, flags);

if (link_info.s.speed == 10 && priv->last_speed == 10) {

int interface = INTERFACE(priv->port);
int index = INDEX(priv->port);
union cvmx_gmxx_rxx_int_reg gmxx_rxx_int_reg;

gmxx_rxx_int_reg.u64 = cvmx_read_csr(CVMX_GMXX_RXX_INT_REG
(index, interface));
if (gmxx_rxx_int_reg.s.pcterr) {

cvm_oct_set_hw_preamble(priv, false);
printk_ratelimited("%s: Using 10Mbps with software preamble removal\n",
dev->name);
}
} else {

if (priv->last_speed != link_info.s.speed)
cvm_oct_set_hw_preamble(priv, true);
priv->last_speed = link_info.s.speed;
}
spin_unlock_irqrestore(&global_register_lock, flags);
}