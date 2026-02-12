static int read_msr(struct pt_regs *regs, struct ve_info *ve)
{
struct tdx_hypercall_args args = {
.r10 = TDX_HYPERCALL_STANDARD,
.r11 = hcall_func(EXIT_REASON_MSR_READ),
.r12 = regs->cx,
};


if (__tdx_hypercall(&args, TDX_HCALL_HAS_OUTPUT))
return -EIO;

regs->ax = lower_32_bits(args.r11);
regs->dx = upper_32_bits(args.r11);
return ve_instr_len(ve);
}