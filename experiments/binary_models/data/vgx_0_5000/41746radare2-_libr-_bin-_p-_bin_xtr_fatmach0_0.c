static RBinXtrData *extract(RBin* bin, int idx) {
int narch;
struct r_bin_fatmach0_obj_t *fb = bin->cur->xtr_obj;
struct r_bin_fatmach0_arch_t *arch = r_bin_fatmach0_extract (fb, idx, &narch);
if (!arch) {
return NULL;
}
RBinXtrMetadata *metadata = R_NEW0 (RBinXtrMetadata);
if (!metadata) {
r_buf_free (arch->b);
free (arch);
return NULL;
}
struct MACH0_(mach_header) *hdr = MACH0_(get_hdr) (arch->b);
if (!hdr) {
free (metadata);
free (arch);
free (hdr);
return NULL;
}
fill_metadata_info_from_hdr (metadata, hdr);
RBinXtrData * res = r_bin_xtrdata_new (arch->b, arch->offset, arch->size, narch, metadata);
r_buf_free (arch->b);
free (arch);
free (hdr);
return res;
}