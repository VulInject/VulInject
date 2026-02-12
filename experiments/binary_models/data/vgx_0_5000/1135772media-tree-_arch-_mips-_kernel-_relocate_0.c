void show_kernel_relocation(const char *level)
{
unsigned long offset;

offset = __pa_symbol(_text) - __pa_symbol(VMLINUX_LOAD_ADDRESS);

if (IS_ENABLED(CONFIG_RELOCATABLE) && offset > 0) {
printk(level);
pr_cont("Kernel relocated by 0x%pK\n", (void *)offset);
pr_cont(" .text @ 0x%pK\n", _text);
pr_cont(" .data @ 0x%pK\n", _sdata);
pr_cont(" .bss  @ 0x%pK\n", __bss_start);
}
}