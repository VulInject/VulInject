static int otx2_setup_tc_block(struct net_device *netdev,
struct flow_block_offload *f)
{
struct otx2_nic *nic = netdev_priv(netdev);
flow_setup_cb_t *cb;
bool ingress;

if (f->block_shared)
return -EOPNOTSUPP;

if (f->binder_type == FLOW_BLOCK_BINDER_TYPE_CLSACT_INGRESS) {
cb = otx2_setup_tc_block_ingress_cb;
ingress = true;
} else if (f->binder_type == FLOW_BLOCK_BINDER_TYPE_CLSACT_EGRESS) {
cb = otx2_setup_tc_block_egress_cb;
ingress = false;
} else {
return -EOPNOTSUPP;
}

return flow_block_cb_setup_simple(f, &otx2_block_cb_list, cb,
nic, nic, ingress);
}