
void
gen_ind(void)
{
int     n;
int     tmp_lc;

MESSAGE1("Generating output file %s...", ind_fn);
PUT(preamble);
ind_lc += prelen;
if (init_page)
insert_page();


idx_dc = 0;
for (n = 0; n < idx_gt; n++) {
if (idx_key[n]->type != DUPLICATE)
if (make_entry(n)) {
IDX_DOT(DOT_MAX);
}
}
tmp_lc = ind_lc;
if (in_range) {
curr = range_ptr;
IND_ERROR1("Unmatched range opening operator %c.\n", idx_ropen);
}
prev = curr;
flush_line(TRUE);
PUT(delim_t);
PUT(postamble);
tmp_lc = ind_lc + postlen;
if (ind_ec == 1) {
DONE(tmp_lc, "lines written", ind_ec, "warning");
} else {
DONE(tmp_lc, "lines written", ind_ec, "warnings");
}
}