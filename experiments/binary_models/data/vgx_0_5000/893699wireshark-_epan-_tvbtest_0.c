static gboolean
test_searches(tvbuff_t *tvb, gint offset, search_test_params *sp)
{
volatile gboolean ex_thrown = FALSE;

TRY {
sp->g8.offset = tvb_find_guint8(tvb, offset, -1, sp->g8.needle);
if (sp->g16.test) {
sp->g16.offset = tvb_find_guint16(tvb, offset, -1, sp->g16.needle);
}
if (sp->mempbrk.test) {
sp->mempbrk.offset =
tvb_ws_mempbrk_pattern_guint8(tvb, offset, -1,
&sp->mempbrk.pattern, &sp->mempbrk.found_needle);
}
}
CATCH_ALL {
ex_thrown = TRUE;
}
ENDTRY;
return ex_thrown;
}