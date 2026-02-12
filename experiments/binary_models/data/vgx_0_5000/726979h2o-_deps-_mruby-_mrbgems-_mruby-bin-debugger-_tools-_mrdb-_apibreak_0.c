int32_t
mrb_debug_check_breakpoint_line(mrb_state *mrb, mrb_debug_context *dbg, const char *file, uint16_t line)
{
mrb_debug_breakpoint *bp;
mrb_debug_linepoint *line_p;
uint32_t i;

if ((mrb == NULL) || (dbg == NULL) || (file == NULL) || (line <= 0)) {
return MRB_DEBUG_INVALID_ARGUMENT;
}

if (!check_start_pc_for_line(mrb, dbg->irep, dbg->pc, line)) {
return MRB_DEBUG_OK;
}

bp = dbg->bp;
for(i=0; i<dbg->bpnum; i++) {
switch (bp->type) {
case MRB_DEBUG_BPTYPE_LINE:
if (bp->enable == TRUE) {
line_p = &bp->point.linepoint;
if ((strcmp(line_p->file, file) == 0) && (line_p->lineno == line)) {
return bp->bpno;
}
}
break;
case MRB_DEBUG_BPTYPE_METHOD:
break;
case MRB_DEBUG_BPTYPE_NONE:
default:
return MRB_DEBUG_OK;
}
bp++;
}
return MRB_DEBUG_OK;
}