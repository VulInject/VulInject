struct r_bin_mz_reloc_t *r_bin_mz_get_relocs (const struct r_bin_mz_obj_t *bin) {
int i, j;
const int num_relocs = bin->dos_header->num_relocs;
const MZ_image_relocation_entry *const rel_entry = bin->relocation_entries;

struct r_bin_mz_reloc_t *relocs = calloc (num_relocs + 1, sizeof (*relocs));
if (!relocs) {
R_LOG_ERROR ("calloc (struct r_bin_mz_reloc_t)");
return NULL;
}
for (i = 0, j = 0; i < num_relocs; i++) {
relocs[j].vaddr = r_bin_mz_va_to_la (rel_entry[i].segment,
rel_entry[i].offset);
relocs[j].paddr = r_bin_mz_la_to_pa (bin, relocs[j].vaddr);


if (relocs[j].vaddr < bin->load_module_size) {
j++;
}
}
relocs[j].last = 1;

return relocs;
}