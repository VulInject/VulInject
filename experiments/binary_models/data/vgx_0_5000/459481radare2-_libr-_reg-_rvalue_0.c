R_API ut64 r_reg_get_pack(RReg *reg, RRegItem *item, int packidx, int packbits) {
r_return_val_if_fail (reg && item, 0LL);

if (packbits < 1) {
packbits = item->packed_size;
}
if (packbits > 64) {
packbits = 64;
R_LOG_WARN ("Does not support pack bits > 64");
}

ut64 ret = 0LL;
const int packbytes = packbits / 8;
const int packmod = packbits % 8;
if (packmod) {
R_LOG_WARN ("Invalid bit size for packet register");
return 0LL;
}
if ((packidx + 1) * packbits > item->size) {
R_LOG_WARN ("Packed index is beyond the register size");
return 0LL;
}
RRegSet *regset = &reg->regset[item->arena];
if (!regset->arena) {
return 0LL;
}
int off = BITS2BYTES (item->offset);
off += (packidx * packbytes);
if (regset->arena->size - off - 1 >= 0) {
int i;
for (i = packbytes - 1; i >= 0; i--) {
ret = (ret << 8) | regset->arena->bytes[off + i];
}
}
return ret;
}