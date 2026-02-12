static struct tb_cfg_result decode_error(struct ctl_pkg *response)
{
struct cfg_error_pkg *pkg = response->buffer;
struct tb_cfg_result res = { 0 };
res.response_route = get_route(pkg->header);
res.response_port = 0;
res.err = check_header(response, sizeof(*pkg), TB_CFG_PKG_ERROR,
get_route(pkg->header));
if (res.err)
return res;

WARN(pkg->zero1, "pkg->zero1 is %#x\n", pkg->zero1);
WARN(pkg->zero2, "pkg->zero1 is %#x\n", pkg->zero1);
WARN(pkg->zero3, "pkg->zero1 is %#x\n", pkg->zero1);
res.err = 1;
res.tb_error = pkg->error;
res.response_port = pkg->port;
return res;

}