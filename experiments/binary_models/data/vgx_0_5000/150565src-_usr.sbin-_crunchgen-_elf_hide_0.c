void
dump_symtab(Elf_Shdr * symsect, Elf_Sym * symtab, int symtabsize)
{
int             i;
Elf_Sym        *psymtab;

for (i = 0; i < (symtabsize / sizeof(Elf_Sym)); i++) {
psymtab = &(symtab[i]);
if ((psymtab->st_info & 0xf0) == 0x10 &&
(psymtab->st_shndx != SHN_UNDEF)) {
printf("symbol %d:\n", i);
printf("st_name %x \"%s\"\n", psymtab->st_name,
get_str(psymtab->st_name));
printf("st_value %llx\n", (unsigned long long)psymtab->st_value);
printf("st_size %llx\n", (unsigned long long)psymtab->st_size);
printf("st_info %x\n", psymtab->st_info);
printf("st_other %x\n", psymtab->st_other);
printf("st_shndx %x\n", psymtab->st_shndx);
}
}
}