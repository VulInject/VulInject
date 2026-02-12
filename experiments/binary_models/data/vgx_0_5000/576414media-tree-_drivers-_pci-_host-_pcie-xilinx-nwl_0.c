static int nwl_wait_for_link(struct nwl_pcie *pcie)
{
struct device *dev = pcie->dev;
int retries;


for (retries = 0; retries < LINK_WAIT_MAX_RETRIES; retries++) {
if (nwl_phy_link_up(pcie))
return 0;
usleep_range(LINK_WAIT_USLEEP_MIN, LINK_WAIT_USLEEP_MAX);
}

dev_err(dev, "PHY link never came up\n");
return -ETIMEDOUT;
}