static int patchsym32(struct vdso_elfinfo *_e, const char *orig,
const char *new)
{
struct vdso_elfinfo32 *e = &_e->u.elf32;
Elf32_Sym *osym = find_sym32(e, orig);
Elf32_Sym *nsym = find_sym32(e, new);

if (!nsym || !osym) {
pr_err("VDSO32: Missing symbols.\n");
return -ENODEV;
}
osym->st_value = nsym->st_value;
osym->st_size = nsym->st_size;
osym->st_info = nsym->st_info;
osym->st_other = nsym->st_other;
osym->st_shndx = nsym->st_shndx;

return 0;
}