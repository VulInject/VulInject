static color
subcolor(struct colormap *cm, chr c)
{
color		co;				
color		sco;			

assert(c <= MAX_SIMPLE_CHR);

co = cm->locolormap[c - CHR_MIN];
sco = newsub(cm, co);
if (CISERR())
return COLORLESS;
assert(sco != COLORLESS);

if (co == sco)				
return co;				
cm->cd[co].nschrs--;
if (cm->cd[sco].nschrs == 0)
cm->cd[sco].firstchr = c;
cm->cd[sco].nschrs++;
cm->locolormap[c - CHR_MIN] = sco;
return sco;
}