int elf_core_write_extra_data(struct coredump_params *cprm)
{
if ( vsyscall_ehdr ) {
const struct elfhdr *const ehdrp =
(struct elfhdr *) vsyscall_ehdr;
const struct elf_phdr *const phdrp =
(const struct elf_phdr *) (vsyscall_ehdr + ehdrp->e_phoff);
int i;

for (i = 0; i < ehdrp->e_phnum; ++i) {
if (phdrp[i].p_type == PT_LOAD) {
void *addr = (void *) phdrp[i].p_vaddr;
size_t filesz = phdrp[i].p_filesz;
if (!dump_emit(cprm, addr, filesz))
return 0;
}
}
}
return 1;
}