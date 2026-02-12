static int
search(OnigRegSet* set, OnigRegSetLead lead, unsigned char* str, unsigned char* end)
{
int r;
int match_pos;
unsigned char *start, *range;

start = str;
range = end;
r = onig_regset_search(set, str, end, start, range, lead,
ONIG_OPTION_NONE, &match_pos);
if (r >= 0) {
int i;
int match_index;
OnigRegion* region;

match_index = r;
fprintf(stdout, "match reg index: %d, pos: %d  (%s)\n",
match_index, match_pos, ONIGENC_NAME(ENC));
region = onig_regset_get_region(set, match_index);
if (region == 0) {
fprintf(stdout, "ERROR: can't get region.\n");
return -1;
}

for (i = 0; i < region->num_regs; i++) {
fprintf(stdout, "%d: (%d-%d)\n", i, region->beg[i], region->end[i]);
}
}
else if (r == ONIG_MISMATCH) {
fprintf(stdout, "search fail (%s)\n", ONIGENC_NAME(ENC));
}
else { 
char s[ONIG_MAX_ERROR_MESSAGE_LEN];

onig_error_code_to_str((UChar* )s, r);
fprintf(stdout, "ERROR: %s\n", s);
fprintf(stdout, "  (%s)\n", ONIGENC_NAME(ENC));
return -1;
}

return 0;
}