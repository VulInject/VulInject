static void ics1893_read_mode(struct nic *nic __unused, int phy_addr, int *speed, int *duplex)
{
int i = 0;
u32 status;


for (i = 0; i < 2; i++)
status = sis900_mdio_read(phy_addr, MII_QPDSTS);

if (status & MII_STSICS_SPD)
*speed = HW_SPEED_100_MBPS;
else
*speed = HW_SPEED_10_MBPS;

if (status & MII_STSICS_DPLX)
*duplex = FDX_CAPABLE_FULL_SELECTED;
else
*duplex = FDX_CAPABLE_HALF_SELECTED;

if (status & MII_STSICS_LINKSTS)
printf("ics1893_read_mode: Media Link On %s %s-duplex \n",
*speed == HW_SPEED_100_MBPS ?
"100mbps" : "10mbps",
*duplex == FDX_CAPABLE_FULL_SELECTED ?
"full" : "half");
else
printf("ics1893_read_mode: Media Link Off\n");
}