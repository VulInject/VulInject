static int
get_zone_arg(RES* ssl, xfrd_state_type* xfrd, char* arg,
struct zone_options** zo)
{
const dname_type* dname;
if(!arg[0]) {

*zo = NULL;
return 1;
}
dname = dname_parse(xfrd->region, arg);
if(!dname) {
(void)ssl_printf(ssl, "error cannot parse zone name '%s'\n", arg);
*zo = NULL;
return 0;
}
*zo = zone_options_find(xfrd->nsd->options, dname);
region_recycle(xfrd->region, (void*)dname, dname_total_size(dname));
if(!*zo) {
(void)ssl_printf(ssl, "error zone %s not configured\n", arg);
return 0;
}
return 1;
}