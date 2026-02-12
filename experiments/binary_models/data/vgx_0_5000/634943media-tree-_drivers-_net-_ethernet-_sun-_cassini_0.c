static u16 cas_phy_read(struct cas *cp, int reg)
{
u32 cmd;
int limit = STOP_TRIES_PHY;

cmd = MIF_FRAME_ST | MIF_FRAME_OP_READ;
cmd |= CAS_BASE(MIF_FRAME_PHY_ADDR, cp->phy_addr);
cmd |= CAS_BASE(MIF_FRAME_REG_ADDR, reg);
cmd |= MIF_FRAME_TURN_AROUND_MSB;
writel(cmd, cp->regs + REG_MIF_FRAME);


while (limit-- > 0) {
udelay(10);
cmd = readl(cp->regs + REG_MIF_FRAME);
if (cmd & MIF_FRAME_TURN_AROUND_LSB)
return cmd & MIF_FRAME_DATA_MASK;
}
return 0xFFFF; 
}