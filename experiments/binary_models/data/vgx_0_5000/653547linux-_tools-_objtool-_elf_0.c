static struct section *elf_create_reloc_section(struct elf *elf,
struct section *base,
int reltype);

int elf_add_reloc(struct elf *elf, struct section *sec, unsigned long offset,
unsigned int type, struct symbol *sym, s64 addend)
{
struct reloc *reloc;

if (!sec->reloc && !elf_create_reloc_section(elf, sec, SHT_RELA))
return -1;

reloc = malloc(sizeof(*reloc));
if (!reloc) {
perror("malloc");
return -1;
}
memset(reloc, 0, sizeof(*reloc));

reloc->sec = sec->reloc;
reloc->offset = offset;
reloc->type = type;
reloc->sym = sym;
reloc->addend = addend;

list_add_tail(&reloc->sym_reloc_entry, &sym->reloc_list);
list_add_tail(&reloc->list, &sec->reloc->reloc_list);
elf_hash_add(reloc, &reloc->hash, reloc_hash(reloc));

sec->reloc->sh.sh_size += sec->reloc->sh.sh_entsize;
sec->reloc->changed = true;

return 0;
}