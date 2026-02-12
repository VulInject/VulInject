static int
do_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
{
struct local_info *local = netdev_priv(dev);
unsigned int ioaddr = dev->base_addr;
struct mii_ioctl_data *data = if_mii(rq);

pr_debug("%s: ioctl(%-.6s, %#04x) %04x %04x %04x %04x\n",
dev->name, rq->ifr_ifrn.ifrn_name, cmd,
data->phy_id, data->reg_num, data->val_in, data->val_out);

if (!local->mohawk)
return -EOPNOTSUPP;

switch(cmd) {
case SIOCGMIIPHY:		
data->phy_id = 0;	

case SIOCGMIIREG:		
data->val_out = mii_rd(ioaddr, data->phy_id & 0x1f,
data->reg_num & 0x1f);
break;
case SIOCSMIIREG:		
mii_wr(ioaddr, data->phy_id & 0x1f, data->reg_num & 0x1f, data->val_in,
16);
break;
default:
return -EOPNOTSUPP;
}
return 0;
}