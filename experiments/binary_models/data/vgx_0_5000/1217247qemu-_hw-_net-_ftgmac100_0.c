static void aspeed_mii_do_phy_ctl(AspeedMiiState *s)
{
uint8_t reg;
uint16_t data;

if (!(s->phycr & ASPEED_MII_PHYCR_ST_22)) {
aspeed_mii_transition(s, !ASPEED_MII_PHYCR_FIRE);
qemu_log_mask(LOG_UNIMP, "%s: unsupported ST code\n", __func__);
return;
}


if (!(s->phycr & ASPEED_MII_PHYCR_FIRE)) {
return;
}

reg = ASPEED_MII_PHYCR_REG(s->phycr);
data = ASPEED_MII_PHYCR_DATA(s->phycr);

switch (ASPEED_MII_PHYCR_OP(s->phycr)) {
case ASPEED_MII_PHYCR_OP_WRITE:
do_phy_write(s->nic, reg, data);
break;
case ASPEED_MII_PHYCR_OP_READ:
s->phydata = (s->phydata & ~0xffff) | do_phy_read(s->nic, reg);
break;
default:
qemu_log_mask(LOG_GUEST_ERROR, "%s: invalid OP code %08x\n",
__func__, s->phycr);
}

aspeed_mii_transition(s, !ASPEED_MII_PHYCR_FIRE);
}