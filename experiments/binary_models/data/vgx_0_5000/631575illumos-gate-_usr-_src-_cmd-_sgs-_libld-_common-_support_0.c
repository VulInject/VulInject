void
ld_sup_file(Ofl_desc *ofl, const char *ifile, const Elf_Kind ekind, int flags,
Elf *elf)
{
Func_list	*flp;
Aliste		idx;

for (ALIST_TRAVERSE(support[LDS_FILE].sup_funcs, idx, flp)) {
int	_flags = 0;

if (!(flags & FLG_IF_CMDLINE))
_flags |= LD_SUP_DERIVED;
if (!(flags & FLG_IF_NEEDED))
_flags |= LD_SUP_INHERITED;
if (flags & FLG_IF_EXTRACT)
_flags |= LD_SUP_EXTRACTED;

DBG_CALL(Dbg_support_action(ofl->ofl_lml, flp->fl_obj,
support[LDS_FILE].sup_name, LDS_FILE, ifile));
(*flp->fl_fptr)(ifile, ekind, _flags, elf);
}
}