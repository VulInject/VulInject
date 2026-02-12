static void
DisplayMapHistogram(L_AMAP      *m,
PIXCMAP     *cmap,
const char  *rootname)
{
char      buf[128];
l_int32   i, n, ival;
l_uint32  val32;
NUMA     *na;
RB_TYPE   key;
RB_TYPE  *pval;

n = pixcmapGetCount(cmap);
na = numaCreate(n);
for (i = 0; i < n; i++) {
pixcmapGetColor32(cmap, i, &val32);
key.utype = val32;
pval = l_amapFind(m, key);
if (pval) {
ival = pval->itype;
numaAddNumber(na, ival);
}
}
gplotSimple1(na, GPLOT_PNG, rootname, NULL);
snprintf(buf, sizeof(buf), "%s.png", rootname);
l_fileDisplay(buf, 700, 0, 1.0);
numaDestroy(&na);
return;
}