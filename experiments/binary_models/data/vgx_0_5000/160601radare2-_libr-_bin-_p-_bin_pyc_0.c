static RList *entries(RBinFile *arch) {
RList *entries = r_list_newf ((RListFree)free);
if (!entries) {
return NULL;
}
RBinAddr *addr = R_NEW0 (RBinAddr);
if (!addr) {
r_list_free (entries);
return NULL;
}
ut64 entrypoint = get_entrypoint (arch->buf);
addr->paddr = entrypoint;
addr->vaddr = entrypoint;
r_buf_seek (arch->buf, entrypoint, R_IO_SEEK_SET);
r_list_append (entries, addr);
return entries;
}