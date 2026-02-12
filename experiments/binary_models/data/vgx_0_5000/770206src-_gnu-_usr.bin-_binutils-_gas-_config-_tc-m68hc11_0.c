tc_gen_reloc (asection *section ATTRIBUTE_UNUSED, fixS *fixp)
{
arelent *reloc;

reloc = (arelent *) xmalloc (sizeof (arelent));
reloc->sym_ptr_ptr = (asymbol **) xmalloc (sizeof (asymbol *));
*reloc->sym_ptr_ptr = symbol_get_bfdsym (fixp->fx_addsy);
reloc->address = fixp->fx_frag->fr_address + fixp->fx_where;
if (fixp->fx_r_type == 0)
reloc->howto = bfd_reloc_type_lookup (stdoutput, BFD_RELOC_16);
else
reloc->howto = bfd_reloc_type_lookup (stdoutput, fixp->fx_r_type);
if (reloc->howto == (reloc_howto_type *) NULL)
{
as_bad_where (fixp->fx_file, fixp->fx_line,
_("Relocation %d is not supported by object file format."),
(int) fixp->fx_r_type);
return NULL;
}


if (fixp->fx_r_type == BFD_RELOC_VTABLE_ENTRY)
reloc->address = fixp->fx_offset;

reloc->addend = 0;
return reloc;
}