static int
ice_read_phy_tstamp_ll_e810(struct ice_hw *hw, u8 idx, u8 *hi, u32 *lo)
{
u32 val;
u8 i;


val = FIELD_PREP(TS_LL_READ_TS_IDX, idx) | TS_LL_READ_TS;
wr32(hw, PF_SB_ATQBAL, val);


for (i = TS_LL_READ_RETRIES; i > 0; i--) {
val = rd32(hw, PF_SB_ATQBAL);


if (!(FIELD_GET(TS_LL_READ_TS, val))) {

*hi = FIELD_GET(TS_LL_READ_TS_HIGH, val);


*lo = rd32(hw, PF_SB_ATQBAH) | TS_VALID;
return 0;
}

udelay(10);
}


ice_debug(hw, ICE_DBG_PTP, "Failed to read PTP timestamp using low latency read\n");
return -EINVAL;
}