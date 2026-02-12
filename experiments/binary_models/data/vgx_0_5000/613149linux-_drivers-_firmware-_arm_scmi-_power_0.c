static int scmi_power_state_set(const struct scmi_protocol_handle *ph,
u32 domain, u32 state)
{
int ret;
struct scmi_xfer *t;
struct scmi_power_set_state *st;

ret = ph->xops->xfer_get_init(ph, POWER_STATE_SET, sizeof(*st), 0, &t);
if (ret)
return ret;

st = t->tx.buf;
st->flags = cpu_to_le32(0);
st->domain = cpu_to_le32(domain);
st->state = cpu_to_le32(state);

ret = ph->xops->do_xfer(ph, t);

ph->xops->xfer_put(ph, t);
return ret;
}