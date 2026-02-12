static void mte_update_sctlr_user(struct task_struct *task)
{

unsigned long sctlr = task->thread.sctlr_user;
unsigned long mte_ctrl = task->thread.mte_ctrl;
unsigned long pref, resolved_mte_tcf;

pref = __this_cpu_read(mte_tcf_preferred);

resolved_mte_tcf = (mte_ctrl & pref) ? pref : mte_ctrl;
sctlr &= ~SCTLR_EL1_TCF0_MASK;

if (resolved_mte_tcf & MTE_CTRL_TCF_ASYMM)
sctlr |= SYS_FIELD_PREP_ENUM(SCTLR_EL1, TCF0, ASYMM);
else if (resolved_mte_tcf & MTE_CTRL_TCF_ASYNC)
sctlr |= SYS_FIELD_PREP_ENUM(SCTLR_EL1, TCF0, ASYNC);
else if (resolved_mte_tcf & MTE_CTRL_TCF_SYNC)
sctlr |= SYS_FIELD_PREP_ENUM(SCTLR_EL1, TCF0, SYNC);
task->thread.sctlr_user = sctlr;
}