R_API void r_core_arch_bits_at(RCore *core, ut64 addr, R_OUT R_NULLABLE int *bits, R_OUT R_BORROW R_NULLABLE const char **arch) {
int bitsval = 0;
const char *archval = NULL;
RBinObject *o = r_bin_cur_object (core->bin);
RBinSection *s = o ? r_bin_get_section_at (o, addr, core->io->va) : NULL;
if (s) {
if (!core->fixedarch) {
archval = s->arch;
}
if (!core->fixedbits && s->bits) {

switch (s->bits) {
case R_SYS_BITS_16:
case R_SYS_BITS_32:
case R_SYS_BITS_64:
bitsval = s->bits * 8;
break;
}
}
}

if (bits && !bitsval && !core->fixedbits) {
bitsval = r_anal_hint_bits_at (core->anal, addr, NULL);
}
if (arch && !archval && !core->fixedarch) {
archval = r_anal_hint_arch_at (core->anal, addr, NULL);
}
if (bits && bitsval) {
*bits = bitsval;
}
if (arch && archval) {
*arch = archval;
}
}