static RBinInfo *info(RBinFile *bf) {
r_return_val_if_fail (bf && bf->buf, NULL);
RBinInfo *ret = R_NEW0 (RBinInfo);
if (!ret) {
return NULL;
}
ret->big_endian = true;
ret->type = strdup ("Relocatable File");
ret->machine = strdup ("Nintendo Wii");
ret->os = strdup ("wii-ios");
ret->arch = strdup ("ppc");
ret->has_va = true;
ret->bits = 32;
ret->cpu = strdup ("ps");
ret->file = bf->file ? strdup (bf->file) : NULL;
return ret;
}