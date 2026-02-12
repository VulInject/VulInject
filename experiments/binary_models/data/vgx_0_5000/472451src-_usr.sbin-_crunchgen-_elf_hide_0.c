void
hide_sym(Elf_Ehdr * ehdr, Elf_Shdr * symsect,
Elf_Sym * symtab, int symtabsize, int symtabsecnum)
{
int             i;
unsigned char   info;
Elf_Sym        *psymtab;

for (i = 0; i < (symtabsize / sizeof(Elf_Sym)); i++) {
psymtab = &(symtab[i]);
if ((psymtab->st_info & 0xf0) == 0x10 &&
(psymtab->st_shndx != SHN_UNDEF)) {
if (in_keep_list(get_str(psymtab->st_name)))
continue;
printf("symbol %d:\n", i);
printf("st_name %x \"%s\"\n", psymtab->st_name,
get_str(psymtab->st_name));
printf("st_info %x\n", psymtab->st_info);
if (!elf_mangle) {
info = psymtab->st_info;
info = info & 0xf;
psymtab->st_info = info;
} else {
mangle_str(get_str(psymtab->st_name));
}
printf("st_info %x\n", psymtab->st_info);
}
}
reorder_syms(ehdr, symsect, symtab, symtabsize, symtabsecnum);
}