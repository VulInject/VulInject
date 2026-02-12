static int __init_or_module copy_alt_insns(union loongarch_instruction *buf,
union loongarch_instruction *dest, union loongarch_instruction *src, int nr)
{
int i;

for (i = 0; i < nr; i++) {
buf[i].word = src[i].word;

if (is_pc_ins(&src[i])) {
pr_err("Not support pcrel instruction at present!");
return -EINVAL;
}

if (is_branch_ins(&src[i]) &&
src[i].reg2i16_format.opcode != jirl_op) {
recompute_jump(&buf[i], &dest[i], &src[i], src, src + nr);
}
}

return 0;
}