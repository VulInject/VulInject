void intelfbhw_2d_start(struct intelfb_info *dinfo)
{
DBG_MSG("intelfbhw_2d_start: accel: %d, ring_active: %d\n",
dinfo->accel, dinfo->ring_active);

if (!dinfo->accel)
return;


OUTREG(PRI_RING_LENGTH, 0);
OUTREG(PRI_RING_TAIL, 0);
OUTREG(PRI_RING_HEAD, 0);

OUTREG(PRI_RING_START, dinfo->ring.physical & RING_START_MASK);
OUTREG(PRI_RING_LENGTH,
((dinfo->ring.size - GTT_PAGE_SIZE) & RING_LENGTH_MASK) |
RING_NO_REPORT | RING_ENABLE);
refresh_ring(dinfo);
dinfo->ring_active = 1;
}