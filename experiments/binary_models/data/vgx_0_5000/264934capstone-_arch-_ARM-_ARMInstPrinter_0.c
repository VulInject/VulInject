static void printCPSIFlag(MCInst *MI, unsigned OpNum, SStream *O)
{
MCOperand *Op = MCInst_getOperand(MI, OpNum);
unsigned IFlags = (unsigned int)MCOperand_getImm(Op);
int i;

for (i = 2; i >= 0; --i)
if (IFlags & (1 << i)) {
SStream_concat0(O, ARM_PROC_IFlagsToString(1 << i));
}

if (IFlags == 0) {
SStream_concat0(O, "none");
IFlags = ARM_CPSFLAG_NONE;
}

if (MI->csh->detail) {
MI->flat_insn->detail->arm.cps_flag = IFlags;
}
}