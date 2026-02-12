asmlinkage void fpu_exception(struct pt_regs *regs, enum exception_code code)
{
struct task_struct *tsk = current;
siginfo_t info;
u32 fpcr;

if (!user_mode(regs))
die_if_no_fixup("An FPU Operation exception happened in"
" kernel space\n",
regs, code);

if (!is_using_fpu(tsk))
die_if_no_fixup("An FPU Operation exception happened,"
" but the FPU is not in use",
regs, code);

info.si_signo = SIGFPE;
info.si_errno = 0;
info.si_addr = (void *) tsk->thread.uregs->pc;
info.si_code = FPE_FLTINV;

unlazy_fpu(tsk);

fpcr = tsk->thread.fpu_state.fpcr;

if (fpcr & FPCR_EC_Z)
info.si_code = FPE_FLTDIV;
else if	(fpcr & FPCR_EC_O)
info.si_code = FPE_FLTOVF;
else if	(fpcr & FPCR_EC_U)
info.si_code = FPE_FLTUND;
else if	(fpcr & FPCR_EC_I)
info.si_code = FPE_FLTRES;

force_sig_info(SIGFPE, &info, tsk);
}