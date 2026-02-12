static void boot_jump_linux(struct bootm_headers *images)
{
typedef void __noreturn (*kernel_entry_t)(int, ulong, ulong, ulong);
kernel_entry_t kernel = (kernel_entry_t) images->ep;
ulong linux_extra = 0;

debug("## Transferring control to Linux (at address %p) ...\n", kernel);

bootstage_mark(BOOTSTAGE_ID_RUN_OS);

if (CONFIG_IS_ENABLED(MALTA))
linux_extra = gd->ram_size;

bootstage_fdt_add_report();
bootstage_report();

if (CONFIG_IS_ENABLED(RESTORE_EXCEPTION_VECTOR_BASE))
trap_restore();

if (images->ft_len)
kernel(-2, (ulong)images->ft_addr, 0, 0);
else
kernel(linux_argc, (ulong)linux_argv, (ulong)linux_env,
linux_extra);
}