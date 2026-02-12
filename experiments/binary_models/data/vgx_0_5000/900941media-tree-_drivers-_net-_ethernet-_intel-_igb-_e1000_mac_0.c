s32 igb_get_speed_and_duplex_copper(struct e1000_hw *hw, u16 *speed,
u16 *duplex)
{
u32 status;

status = rd32(E1000_STATUS);
if (status & E1000_STATUS_SPEED_1000) {
*speed = SPEED_1000;
hw_dbg("1000 Mbs, ");
} else if (status & E1000_STATUS_SPEED_100) {
*speed = SPEED_100;
hw_dbg("100 Mbs, ");
} else {
*speed = SPEED_10;
hw_dbg("10 Mbs, ");
}

if (status & E1000_STATUS_FD) {
*duplex = FULL_DUPLEX;
hw_dbg("Full Duplex\n");
} else {
*duplex = HALF_DUPLEX;
hw_dbg("Half Duplex\n");
}

return 0;
}