static void iser_connected_handler(struct rdma_cm_id *cma_id,
const void *private_data)
{
struct iser_conn *iser_conn = cma_id->context;
struct ib_qp_attr attr;
struct ib_qp_init_attr init_attr;

lockdep_assert_held(&iser_conn->state_mutex);

if (iser_conn->state != ISER_CONN_PENDING)

return;

(void)ib_query_qp(cma_id->qp, &attr, ~0, &init_attr);
iser_info("remote qpn:%x my qpn:%x\n", attr.dest_qp_num, cma_id->qp->qp_num);

if (private_data) {
u8 flags = *(u8 *)private_data;

iser_conn->snd_w_inv = !(flags & ISER_SEND_W_INV_NOT_SUP);
}

iser_info("conn %p: negotiated %s invalidation\n",
iser_conn, iser_conn->snd_w_inv ? "remote" : "local");

iser_conn->state = ISER_CONN_UP;
complete(&iser_conn->up_completion);
}