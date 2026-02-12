static void
f_41(vaddr_t loc, u_int insn, char *buf, size_t bufsiz)
{
int	rn, fx;

rn   = (insn & 0x0f00) >> 8;
fx   = (insn & 0x00f0) >> 4;

switch (fx) {
case 0:
snprintf(buf, bufsiz, "shlr    r%d", rn);
break;
case 1:
snprintf(buf, bufsiz, "cmp/pz  r%d", rn);
break;
case 2:
snprintf(buf, bufsiz, "shar    r%d", rn);
break;
} 
}