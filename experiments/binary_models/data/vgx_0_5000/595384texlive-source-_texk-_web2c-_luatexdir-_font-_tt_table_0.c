struct tt_longMetrics *tt_read_longMetrics(sfnt * sfont, USHORT numGlyphs, USHORT numLongMetrics)
{
struct tt_longMetrics *m;
USHORT gid, last_adv = 0;
m = NEW(numGlyphs, struct tt_longMetrics);
for (gid = 0; gid < numGlyphs; gid++) {
if (gid < numLongMetrics)
last_adv = sfnt_get_ushort(sfont);
m[gid].sideBearing = sfnt_get_short(sfont);
m[gid].advance = last_adv;
}
return m;
}