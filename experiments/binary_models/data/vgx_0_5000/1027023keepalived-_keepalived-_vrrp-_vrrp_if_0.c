static int
if_mii_probe(const int fd, const char *ifname)
{
struct mii_ioctl_data *data = PTR_CAST(struct mii_ioctl_data, &ifr.ifr_data);
uint16_t phy_id;

memset(&ifr, 0, sizeof (struct ifreq));
strcpy_safe(ifr.ifr_name, ifname);
if (ioctl(fd, SIOCGMIIPHY, &ifr) < 0)
return -1;


phy_id = data->phy_id; 
data->reg_num = MII_BMSR;
if (ioctl(fd, SIOCGMIIREG, &ifr) < 0)
return -1;
data->phy_id = phy_id;


return if_mii_status(fd);
}