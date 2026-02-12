static int scmi_perf_mb_level_set(const struct scmi_protocol_handle *ph,
u32 domain, u32 level, bool poll)
{
int ret;
struct scmi_xfer *t;
struct scmi_perf_set_level *lvl;

ret = ph->xops->xfer_get_init(ph, PERF_LEVEL_SET, sizeof(*lvl), 0, &t);
if (ret)
return ret;

t->hdr.poll_completion = poll;
lvl = t->tx.buf;
lvl->domain = cpu_to_le32(domain);
lvl->level = cpu_to_le32(level);

ret = ph->xops->do_xfer(ph, t);

ph->xops->xfer_put(ph, t);
return ret;
}