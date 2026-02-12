static error_t
bam_add_hv(menu_t *mp, char *grubsign, char *grubroot, int root_opt)
{
entry_t		*entry;
const char	*fcn = "bam_add_hv()";

bam_print(_("adding xVM entries...\n"));

entry = find_matching_entry(mp->entries, grubsign, grubroot, root_opt);
while (entry != NULL) {
if (entry->flags & BAM_ENTRY_HV) {
BAM_DPRINTF(("%s: entry %d already converted to "
"xvm HV\n", fcn, entry->entryNum));
return (BAM_SUCCESS);
}
entry = find_matching_entry(entry->next, grubsign, grubroot,
root_opt);
}

(void) add_boot_entry(mp, NEW_HV_ENTRY, grubsign, XEN_MENU,
XEN_KERNEL_MODULE_LINE, DIRECT_BOOT_ARCHIVE, NULL);

BAM_DPRINTF(("%s: added xVM HV entry via add_boot_entry()\n", fcn));

update_numbering(mp);

BAM_DPRINTF(("%s: returning SUCCESS\n", fcn));

return (BAM_SUCCESS);
}