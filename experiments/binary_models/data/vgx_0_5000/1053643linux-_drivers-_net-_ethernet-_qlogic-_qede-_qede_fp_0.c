static int qede_rx_int(struct qede_fastpath *fp, int budget)
{
struct qede_rx_queue *rxq = fp->rxq;
struct qede_dev *edev = fp->edev;
int work_done = 0, rcv_pkts = 0;
u16 hw_comp_cons, sw_comp_cons;

hw_comp_cons = le16_to_cpu(*rxq->hw_cons_ptr);
sw_comp_cons = qed_chain_get_cons_idx(&rxq->rx_comp_ring);


rmb();


while ((sw_comp_cons != hw_comp_cons) && (work_done < budget)) {
rcv_pkts += qede_rx_process_cqe(edev, fp, rxq);
qed_chain_recycle_consumed(&rxq->rx_comp_ring);
sw_comp_cons = qed_chain_get_cons_idx(&rxq->rx_comp_ring);
work_done++;
}

rxq->rcv_pkts += rcv_pkts;


while (rxq->num_rx_buffers - rxq->filled_buffers)
if (qede_alloc_rx_buffer(rxq, false))
break;


qede_update_rx_prod(edev, rxq);

return work_done;
}