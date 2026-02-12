static RList *sections(RBinFile *bf) {
RList *ret = r_list_newf ((RListFree)r_bin_section_free);
if (!ret) {
return NULL;
}
ut64 sz = r_buf_size (bf->buf);
if (sz < 2) {
return ret;
}
RBinSection *section = R_NEW0 (RBinSection);
if (!section) {
return ret;
}
section->name = strdup ("prg");
section->paddr = 2;
section->size = sz - 2;
section->vaddr = baddr (bf);
section->vsize = sz - 2;
section->perm = R_PERM_RWX;
section->add = true;
r_list_append (ret, section);
return ret;
}