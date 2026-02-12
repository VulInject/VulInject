int mv88e_sw_program(const char *devname, u8 phy_addr,
struct mv88e_sw_reg *regs, int regs_nb)
{
int i, ret = 0;


ret = ppu_disable(devname, phy_addr);
if (ret) {
printf("%s: Error disabling PPU\n", __func__);
return ret;
}

for (i = 0; i < regs_nb; i++) {
ret = sw_reg_write(devname, phy_addr, regs[i].port,
regs[i].reg, regs[i].value);
if (ret) {
printf("%s: Error configuring switch\n", __func__);
ppu_enable(devname, phy_addr);
return ret;
}
}


ret = ppu_enable(devname, phy_addr);
if (ret) {
printf("%s: Error enabling PPU\n", __func__);
return ret;
}

return 0;
}