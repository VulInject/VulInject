void
db_show_panic_cmd(db_expr_t addr, int have_addr, db_expr_t count, char *modif)
{
struct cpu_info *ci;
char *prefix;
CPU_INFO_ITERATOR cii;
int panicked = 0;

CPU_INFO_FOREACH(cii, ci) {
if (ci->ci_panicbuf[0] != '\0') {
prefix = (panicstr == ci->ci_panicbuf) ? "*" : " ";
db_printf("%scpu%d: %s\n",
prefix, CPU_INFO_UNIT(ci), ci->ci_panicbuf);
panicked = 1;
}
}
if (!panicked)
db_printf("the kernel did not panic\n");	
}