static int nicvf_rcv_pkt_handler(struct nicvf *nic,
struct cmp_queue *cq, void *cq_desc,
void **ppkt, int cqe_type)
{
void *pkt;

size_t pkt_len;
struct cqe_rx_t *cqe_rx = (struct cqe_rx_t *)cq_desc;
int err = 0;


err = nicvf_check_cqe_rx_errs(nic, cq, cq_desc);
if (err && !cqe_rx->rb_cnt)
return -1;

pkt = nicvf_get_rcv_pkt(nic, cq_desc, &pkt_len);
if (!pkt) {
debug("Packet not received\n");
return -1;
}

if (pkt)
*ppkt = pkt;

return pkt_len;
}