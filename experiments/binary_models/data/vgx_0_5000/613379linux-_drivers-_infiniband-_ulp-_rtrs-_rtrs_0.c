static int create_qp(struct rtrs_con *con, struct ib_pd *pd,
u32 max_send_wr, u32 max_recv_wr, u32 max_sge)
{
struct ib_qp_init_attr init_attr = {NULL};
struct rdma_cm_id *cm_id = con->cm_id;
int ret;

init_attr.cap.max_send_wr = max_send_wr;
init_attr.cap.max_recv_wr = max_recv_wr;
init_attr.cap.max_recv_sge = 1;
init_attr.event_handler = qp_event_handler;
init_attr.qp_context = con;
init_attr.cap.max_send_sge = max_sge;

init_attr.qp_type = IB_QPT_RC;
init_attr.send_cq = con->cq;
init_attr.recv_cq = con->cq;
init_attr.sq_sig_type = IB_SIGNAL_REQ_WR;

ret = rdma_create_qp(cm_id, pd, &init_attr);
if (ret) {
rtrs_err(con->path, "Creating QP failed, err: %d\n", ret);
return ret;
}
con->qp = cm_id->qp;

return ret;
}