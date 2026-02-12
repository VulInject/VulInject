bool plugin_gen_tb_start(CPUState *cpu, const TranslationBlock *tb, bool mem_only)
{
struct qemu_plugin_tb *ptb = tcg_ctx->plugin_tb;
bool ret = false;

if (test_bit(QEMU_PLUGIN_EV_VCPU_TB_TRANS, cpu->plugin_mask)) {
ret = true;

ptb->vaddr = tb->pc;
ptb->vaddr2 = -1;
get_page_addr_code_hostp(cpu->env_ptr, tb->pc, &ptb->haddr1);
ptb->haddr2 = NULL;
ptb->mem_only = mem_only;

plugin_gen_empty_callback(PLUGIN_GEN_FROM_TB);
}
return ret;
}