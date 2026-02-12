static int nbd_send_option_request(QIOChannel *ioc, uint32_t opt,
uint32_t len, const char *data,
Error **errp)
{
ERRP_GUARD();
NBDOption req;
QEMU_BUILD_BUG_ON(sizeof(req) != 16);

if (len == -1) {
req.length = len = strlen(data);
}
trace_nbd_send_option_request(opt, nbd_opt_lookup(opt), len);

stq_be_p(&req.magic, NBD_OPTS_MAGIC);
stl_be_p(&req.option, opt);
stl_be_p(&req.length, len);

if (nbd_write(ioc, &req, sizeof(req), errp) < 0) {
error_prepend(errp, "Failed to send option request header: ");
return -1;
}

if (len && nbd_write(ioc, (char *) data, len, errp) < 0) {
error_prepend(errp, "Failed to send option request data: ");
return -1;
}

return 0;
}