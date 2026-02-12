static void
secmap_data_cmp(secmap_t *sm, const char *sname, Elf_Scn *scn, GElf_Shdr *shdr)
{
for (Elf_Scn *comp_scn = elf_nextscn(sm->sm_elf, NULL);
comp_scn != NULL; comp_scn = elf_nextscn(sm->sm_elf, comp_scn)) {
GElf_Shdr comp_shdr;
const char *comp_name;
Elf_Data *src_data, *comp_data;

if (gelf_getshdr(comp_scn, &comp_shdr) == NULL) {
secmap_fail("failed to load section header from %s "
"during data comparison", sm->sm_obj);
return;
}

comp_name = elf_strptr(sm->sm_elf, sm->sm_ehdr.e_shstrndx,
comp_shdr.sh_name);
if (comp_name == NULL) {
secmap_fail("failed to load section name from %s "
"with index %lu", sm->sm_obj, comp_shdr.sh_name);
return;
}

if (strcmp(comp_name, sname) != 0)
continue;

if (comp_shdr.sh_type != shdr->sh_type ||
comp_shdr.sh_addralign != shdr->sh_addralign ||
comp_shdr.sh_size != shdr->sh_size ||
comp_shdr.sh_entsize != shdr->sh_entsize) {
continue;
}

if ((src_data = elf_getdata(scn, NULL)) == NULL) {
secmap_fail("failed to load section data from "
"source to compare to %s %s", sm->sm_obj, sname);
return;
}

if ((comp_data = elf_getdata(comp_scn, NULL)) == NULL) {
secmap_fail("failed to load section data from "
"source to compare to %s %s", sm->sm_obj, sname);
return;
}

if (comp_data->d_size != src_data->d_size) {
secmap_fail("data size mismatch for %s: %s, core: "
"%zu, file: %zu", sm->sm_obj, sname,
src_data->d_size, comp_data->d_size);
return;
}

if (memcmp(comp_data->d_buf, src_data->d_buf,
comp_data->d_size) != 0) {
secmap_fail("data mismatch between core and source "
"in %s: %s", sm->sm_obj, sname);
return;
}

return;
}

secmap_fail("failed to find matching section for %s in %s",
sname, sm->sm_obj);
}