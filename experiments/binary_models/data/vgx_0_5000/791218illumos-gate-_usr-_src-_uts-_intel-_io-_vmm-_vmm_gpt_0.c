void
vmm_gpt_walk(vmm_gpt_t *gpt, uint64_t gpa, uint64_t **entries,
enum vmm_gpt_node_level depth)
{
uint64_t *current_entries, entry;
pfn_t pfn;

ASSERT(gpt != NULL);
current_entries = gpt->vgpt_root->vgn_entries;
for (uint_t i = 0; i < depth; i++) {
if (current_entries == NULL) {
entries[i] = NULL;
continue;
}
entries[i] = &current_entries[vmm_gpt_node_index(gpa, i)];
entry = *entries[i];
if (!gpt->vgpt_pte_ops->vpeo_pte_is_present(entry)) {
current_entries = NULL;
continue;
}
pfn = gpt->vgpt_pte_ops->vpeo_pte_pfn(entry);
current_entries = (uint64_t *)hat_kpm_pfn2va(pfn);
}
}