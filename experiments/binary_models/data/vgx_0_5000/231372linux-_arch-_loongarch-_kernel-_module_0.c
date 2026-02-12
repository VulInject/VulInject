static void module_init_ftrace_plt(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs, struct module *mod)
{
struct plt_entry *ftrace_plts;

ftrace_plts = (void *)sechdrs->sh_addr;

ftrace_plts[FTRACE_PLT_IDX] = emit_plt_entry(FTRACE_ADDR);

if (IS_ENABLED(CONFIG_DYNAMIC_FTRACE_WITH_REGS))
ftrace_plts[FTRACE_REGS_PLT_IDX] = emit_plt_entry(FTRACE_REGS_ADDR);

mod->arch.ftrace_trampolines = ftrace_plts;
}