static int
dwarf_macho_load_segment_commands(
dwarf_macho_object_access_internals_t *mfp,int *errcode)
{
Dwarf_Unsigned i = 0;
struct generic_macho_command *mmp = 0;
struct generic_macho_segment_command *msp = 0;

if (mfp->mo_segment_count < 1) {
return DW_DLV_OK;
}
mfp->mo_segment_commands =
(struct generic_macho_segment_command *)
calloc(sizeof(struct generic_macho_segment_command),
(size_t)mfp->mo_segment_count);
if (!mfp->mo_segment_commands) {
*errcode = DW_DLE_ALLOC_FAIL;
return DW_DLV_ERROR;
}

mmp = mfp->mo_commands;
msp = mfp->mo_segment_commands;
for (i = 0 ; i < mfp->mo_command_count; ++i,++mmp) {
unsigned cmd = (unsigned)mmp->cmd;
int res = 0;

if (cmd == LC_SEGMENT) {
res = load_segment_command_content32(mfp,mmp,msp,i,errcode);
++msp;
} else if (cmd == LC_SEGMENT_64) {
res = load_segment_command_content64(mfp,mmp,msp,i,errcode);
++msp;
}
if (res != DW_DLV_OK) {
return res;
}
}
return DW_DLV_OK;
}