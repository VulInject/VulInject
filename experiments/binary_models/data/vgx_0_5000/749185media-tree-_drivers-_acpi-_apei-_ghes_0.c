static void __ghes_print_estatus(const char *pfx,
const struct acpi_hest_generic *generic,
const struct acpi_hest_generic_status *estatus)
{
static atomic_t seqno;
unsigned int curr_seqno;
char pfx_seq[64];

if (pfx == NULL) {
if (ghes_severity(estatus->error_severity) <=
GHES_SEV_CORRECTED)
pfx = KERN_WARNING;
else
pfx = KERN_ERR;
}
curr_seqno = atomic_inc_return(&seqno);
snprintf(pfx_seq, sizeof(pfx_seq), "%s{%u}" HW_ERR, pfx, curr_seqno);
printk("%s""Hardware error from APEI Generic Hardware Error Source: %d\n",
pfx_seq, generic->header.source_id);
cper_estatus_print(pfx_seq, estatus);
}