static bool bw_validate(char *buf, unsigned long *data, struct rdt_resource *r)
{
unsigned long bw;
int ret;


if (!r->membw.delay_linear && r->membw.arch_needs_linear) {
rdt_last_cmd_puts("No support for non-linear MB domains\n");
return false;
}

ret = kstrtoul(buf, 10, &bw);
if (ret) {
rdt_last_cmd_printf("Non-decimal digit in MB value %s\n", buf);
return false;
}

if ((bw < r->membw.min_bw || bw > r->default_ctrl) &&
!is_mba_sc(r)) {
rdt_last_cmd_printf("MB value %ld out of range [%d,%d]\n", bw,
r->membw.min_bw, r->default_ctrl);
return false;
}

*data = roundup(bw, (unsigned long)r->membw.bw_gran);
return true;
}