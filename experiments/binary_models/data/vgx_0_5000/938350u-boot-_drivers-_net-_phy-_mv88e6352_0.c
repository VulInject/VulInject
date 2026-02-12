int mv88e_sw_reset(const char *devname, u8 phy_addr)
{
int i, ret = 0;
u16 reg;

ret = sw_reg_read(devname, phy_addr, GLOBAL, GLOBAL_CTRL, &reg);
if (ret) {
printf("%s: Error reading global ctrl reg\n", __func__);
return ret;
}

reg = SW_RESET | PPU_ENABLE | 0x0400;

ret = sw_reg_write(devname, phy_addr, GLOBAL, GLOBAL_CTRL, reg);
if (ret) {
printf("%s: Error writing global ctrl reg\n", __func__);
return ret;
}

for (i = 0; i < 1000; i++) {
sw_reg_read(devname, phy_addr, GLOBAL, GLOBAL_STATUS,
&reg);
if ((reg & 0xc800) != 0xc800)
return 0;
udelay(1000);
}

return -ETIMEDOUT;
}