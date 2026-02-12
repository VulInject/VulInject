static int hfi1_vnic_up(struct hfi1_vnic_vport_info *vinfo)
{
struct hfi1_devdata *dd = vinfo->dd;
struct net_device *netdev = vinfo->netdev;
int i, rc;


if (!vinfo->vesw_id)
return -EINVAL;

rc = idr_alloc(&dd->vnic.vesw_idr, vinfo, vinfo->vesw_id,
vinfo->vesw_id + 1, GFP_NOWAIT);
if (rc < 0)
return rc;

for (i = 0; i < vinfo->num_rx_q; i++) {
struct hfi1_vnic_rx_queue *rxq = &vinfo->rxq[i];

skb_queue_head_init(&rxq->skbq);
napi_enable(&rxq->napi);
}

netif_carrier_on(netdev);
netif_tx_start_all_queues(netdev);
set_bit(HFI1_VNIC_UP, &vinfo->flags);

return 0;
}