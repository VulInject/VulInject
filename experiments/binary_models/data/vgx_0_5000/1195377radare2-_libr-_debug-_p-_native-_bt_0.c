typedef RList* (*RDebugFrameCallback)(RDebug *dbg, ut64 at);

static void prepend_current_pc(RDebug *dbg, RList *list) {
r_return_if_fail (dbg);
if (!list) {
return;
}
const char *pcname = r_reg_get_name (dbg->reg, R_REG_NAME_PC);
if (pcname) {
ut64 addr = r_reg_getv (dbg->reg, pcname);
RDebugFrame *frame = R_NEW0 (RDebugFrame);
if (frame) {
frame->addr = addr;
frame->size = 0;
r_list_prepend (list, frame);
}
}
}