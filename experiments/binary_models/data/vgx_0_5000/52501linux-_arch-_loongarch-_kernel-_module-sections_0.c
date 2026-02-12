Elf_Addr module_emit_got_entry(struct module *mod, Elf_Shdr *sechdrs, Elf_Addr val)
{
struct mod_section *got_sec = &mod->arch.got;
int i = got_sec->num_entries;
struct got_entry *got = get_got_entry(val, sechdrs, got_sec);

if (got)
return (Elf_Addr)got;


got = (struct got_entry *)sechdrs[got_sec->shndx].sh_addr;
got[i] = emit_got_entry(val);

got_sec->num_entries++;
if (got_sec->num_entries > got_sec->max_entries) {

pr_err("%s: module contains bad GOT relocation\n", mod->name);
return 0;
}

return (Elf_Addr)&got[i];
}