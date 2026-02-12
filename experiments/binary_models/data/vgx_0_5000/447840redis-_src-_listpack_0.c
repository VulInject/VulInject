unsigned char *lpDeleteRange(unsigned char *lp, long index, unsigned long num) {
unsigned char *p;
uint32_t numele = lpGetNumElements(lp);

if (num == 0) return lp; 
if ((p = lpSeek(lp, index)) == NULL) return lp;


if (numele != LP_HDR_NUMELE_UNKNOWN && index < 0) index = (long)numele + index;
if (numele != LP_HDR_NUMELE_UNKNOWN && (numele - (unsigned long)index) <= num) {
p[0] = LP_EOF;
lpSetTotalBytes(lp, p - lp + 1);
lpSetNumElements(lp, index);
lp = lpShrinkToFit(lp);
} else {
lp = lpDeleteRangeWithEntry(lp, &p, num);
}

return lp;
}