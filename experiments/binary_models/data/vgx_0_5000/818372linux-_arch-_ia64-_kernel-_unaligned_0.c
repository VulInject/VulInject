emulate_store_int (unsigned long ifa, load_store_t ld, struct pt_regs *regs,
bool kernel_mode)
{
unsigned long r2;
unsigned int len = 1 << ld.x6_sz;


getreg(ld.imm, &r2, NULL, regs);


DPRINT("st%d [%lx]=%lx\n", len, ifa, r2);

if (len != 2 && len != 4 && len != 8) {
DPRINT("unknown size: x6=%d\n", ld.x6_sz);
return -1;
}


if (emulate_store(ifa, &r2, len, kernel_mode))
return -1;


if (ld.op == 0x5) {
unsigned long imm;


imm = ld.x << 7 | ld.r1;

if (ld.m) imm |= SIGN_EXT9;

ifa += imm;

DPRINT("imm=%lx r3=%lx\n", imm, ifa);

setreg(ld.r3, ifa, 0, regs);
}

ia64_invala();


if (ld.x6_op == 0xd)
mb();

return 0;
}