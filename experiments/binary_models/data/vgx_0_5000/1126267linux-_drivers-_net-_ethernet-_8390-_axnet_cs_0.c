static int axnet_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
{
struct axnet_dev *info = PRIV(dev);
struct mii_ioctl_data *data = if_mii(rq);
unsigned int mii_addr = dev->base_addr + AXNET_MII_EEP;
switch (cmd) {
case SIOCGMIIPHY:
data->phy_id = info->phy_id;
fallthrough;
case SIOCGMIIREG:		
data->val_out = mdio_read(mii_addr, data->phy_id, data->reg_num & 0x1f);
return 0;
case SIOCSMIIREG:		
mdio_write(mii_addr, data->phy_id, data->reg_num & 0x1f, data->val_in);
return 0;
}
return -EOPNOTSUPP;
}