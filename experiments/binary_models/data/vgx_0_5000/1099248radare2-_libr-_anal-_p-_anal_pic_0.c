static char *asm_pic_disassemble(const char *cpu, const ut8 *b, int l, int *opsz) {
char *opstr = NULL;
if (R_STR_ISNOTEMPTY (cpu)) {
if (!strcasecmp (cpu, "baseline")) {
opstr = pic_baseline_disassemble (b, l, opsz);
} else if (!strcasecmp (cpu, "midrange")) {
opstr = pic_midrange_disassemble (b, l, opsz);
} else if (!strcasecmp (cpu, "pic18")) {
opstr = pic_pic18_disassemble (b, l, opsz);
}
}
return opstr;
}