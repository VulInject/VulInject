static struct usnic_ib_qp_grp_flow*
create_and_add_flow(struct usnic_ib_qp_grp *qp_grp,
struct usnic_transport_spec *trans_spec)
{
struct usnic_ib_qp_grp_flow *qp_flow;
enum usnic_transport_type trans_type;

trans_type = trans_spec->trans_type;
switch (trans_type) {
case USNIC_TRANSPORT_ROCE_CUSTOM:
qp_flow = create_roce_custom_flow(qp_grp, trans_spec);
break;
case USNIC_TRANSPORT_IPV4_UDP:
qp_flow = create_udp_flow(qp_grp, trans_spec);
break;
default:
usnic_err("Unsupported transport %u\n",
trans_spec->trans_type);
return ERR_PTR(-EINVAL);
}

if (!IS_ERR_OR_NULL(qp_flow)) {
list_add_tail(&qp_flow->link, &qp_grp->flows_lst);
usnic_debugfs_flow_add(qp_flow);
}


return qp_flow;
}