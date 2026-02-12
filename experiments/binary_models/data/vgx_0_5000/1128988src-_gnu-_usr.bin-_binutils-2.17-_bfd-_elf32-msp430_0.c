static bfd_boolean
msp430_elf_relax_adjust_locals(bfd * abfd, asection * sec, bfd_vma addr,
int count, unsigned int sec_shndx, bfd_vma toaddr)
{
Elf_Internal_Shdr *symtab_hdr;
Elf_Internal_Rela *irel;
Elf_Internal_Rela *irelend;
Elf_Internal_Sym *isym;

irel = elf_section_data (sec)->relocs;
irelend = irel + sec->reloc_count;
symtab_hdr = & elf_tdata (abfd)->symtab_hdr;
isym = (Elf_Internal_Sym *) symtab_hdr->contents;

for (irel = elf_section_data (sec)->relocs; irel < irelend; irel++)
{
int sidx = ELF32_R_SYM(irel->r_info);
Elf_Internal_Sym *lsym = isym + sidx;


if (irel->r_addend > addr && irel->r_addend < toaddr 
&& lsym->st_shndx == sec_shndx)
irel->r_addend -= count;
}

return TRUE;
}