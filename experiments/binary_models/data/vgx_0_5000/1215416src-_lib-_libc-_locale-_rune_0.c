static void _freeentry(_RuneRange *);

static int
readrange(_RuneLocale *rl, _RuneRange *rr, uint32_t nranges, void *lastp,
FILE *fp)
{
uint32_t i;
_RuneEntry *re;
_FileRuneEntry fre;

re = (_RuneEntry *)rl->rl_variable;

rr->rr_nranges = nranges;
if (rr->rr_nranges == 0) {
rr->rr_rune_ranges = NULL;
return 0;
}

rr->rr_rune_ranges = re;
for (i = 0; i < rr->rr_nranges; i++) {
if ((void *)re >= lastp)
return -1;

if (fread(&fre, sizeof(fre), 1, fp) != 1)
return -1;

re->re_min = ntohl((uint32_t)fre.fre_min);
re->re_max = ntohl((uint32_t)fre.fre_max);
re->re_map = ntohl((uint32_t)fre.fre_map);
re++;
}
rl->rl_variable = re;
return 0;
}