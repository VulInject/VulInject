static int
scmi_base_vendor_id_get(const struct scmi_protocol_handle *ph, bool sub_vendor)
{
u8 cmd;
int ret, size;
char *vendor_id;
struct scmi_xfer *t;
struct scmi_revision_info *rev = ph->get_priv(ph);


if (sub_vendor) {
cmd = BASE_DISCOVER_SUB_VENDOR;
vendor_id = rev->sub_vendor_id;
size = ARRAY_SIZE(rev->sub_vendor_id);
} else {
cmd = BASE_DISCOVER_VENDOR;
vendor_id = rev->vendor_id;
size = ARRAY_SIZE(rev->vendor_id);
}

ret = ph->xops->xfer_get_init(ph, cmd, 0, size, &t);
if (ret)
return ret;

ret = ph->xops->do_xfer(ph, t);
if (!ret)
strscpy(vendor_id, t->rx.buf, size);

ph->xops->xfer_put(ph, t);

return ret;
}