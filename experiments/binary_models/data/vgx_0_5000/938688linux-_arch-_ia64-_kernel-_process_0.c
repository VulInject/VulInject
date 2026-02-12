ia64_do_show_stack (struct unw_frame_info *info, void *arg)
{
unsigned long ip, sp, bsp;
const char *loglvl = arg;

printk("%s\nCall Trace:\n", loglvl);
do {
unw_get_ip(info, &ip);
if (ip == 0)
break;

unw_get_sp(info, &sp);
unw_get_bsp(info, &bsp);
printk("%s [<%016lx>] %pS\n"
"                                sp=%016lx bsp=%016lx\n",
loglvl, ip, (void *)ip, sp, bsp);
} while (unw_unwind(info) >= 0);
}