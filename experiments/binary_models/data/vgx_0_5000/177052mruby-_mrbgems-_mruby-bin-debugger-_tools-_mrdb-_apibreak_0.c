int32_t
mrb_debug_set_break_line(mrb_state *mrb, mrb_debug_context *dbg, const char *file, uint16_t lineno)
{
int32_t index;
char* set_file;
uint16_t result;

if ((mrb == NULL)||(dbg == NULL)||(file == NULL)) {
return MRB_DEBUG_INVALID_ARGUMENT;
}

if (dbg->bpnum >= MAX_BREAKPOINT) {
return MRB_DEBUG_BREAK_NUM_OVER;
}

if (dbg->next_bpno > MAX_BREAKPOINTNO) {
return MRB_DEBUG_BREAK_NO_OVER;
}


result = check_file_lineno(mrb, dbg->root_irep, file, lineno);
if (result == 0) {
return MRB_DEBUG_BREAK_INVALID_FILE;
}
else if (result == MRB_DEBUG_BP_FILE_OK) {
return MRB_DEBUG_BREAK_INVALID_LINENO;
}

set_file = mrdb_strdup(mrb, file);

index = dbg->bpnum;
dbg->bp[index].bpno = dbg->next_bpno;
dbg->next_bpno++;
dbg->bp[index].enable = TRUE;
dbg->bp[index].type = MRB_DEBUG_BPTYPE_LINE;
dbg->bp[index].point.linepoint.lineno = lineno;
dbg->bpnum++;

dbg->bp[index].point.linepoint.file = set_file;

return dbg->bp[index].bpno;
}