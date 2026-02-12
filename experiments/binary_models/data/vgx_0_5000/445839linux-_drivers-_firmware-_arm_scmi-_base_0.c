static int scmi_base_attributes_get(const struct scmi_protocol_handle *ph)
{
int ret;
struct scmi_xfer *t;
struct scmi_msg_resp_base_attributes *attr_info;
struct scmi_revision_info *rev = ph->get_priv(ph);

ret = ph->xops->xfer_get_init(ph, PROTOCOL_ATTRIBUTES,
0, sizeof(*attr_info), &t);
if (ret)
return ret;

ret = ph->xops->do_xfer(ph, t);
if (!ret) {
attr_info = t->rx.buf;
rev->num_protocols = attr_info->num_protocols;
rev->num_agents = attr_info->num_agents;
}

ph->xops->xfer_put(ph, t);

return ret;
}