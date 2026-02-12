static bool r_bin_coff_init_symtable(RBinXCoff64Obj *obj) {
int ret, size;
ut64 offset = obj->hdr.f_symptr;
if (obj->hdr.f_nsyms >= 0xffffff || !obj->hdr.f_nsyms) { 
return false;
}
size = obj->hdr.f_nsyms * sizeof (struct xcoff64_symbol);
if (size < 0 ||
size > obj->size ||
offset > obj->size ||
offset + size > obj->size) {
return false;
}
obj->symbols = calloc (1, size + sizeof (struct xcoff64_symbol));
if (!obj->symbols) {
return false;
}
ret = r_buf_fread_at (obj->b, offset, (ut8 *)obj->symbols, obj->endian? "1L1I2S2c": "1l1i2s2c", obj->hdr.f_nsyms);
if (ret != size) {
R_FREE (obj->symbols);
return false;
}
return true;
}