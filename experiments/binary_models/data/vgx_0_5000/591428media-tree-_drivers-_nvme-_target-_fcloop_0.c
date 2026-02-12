static int
fcloop_ls_req(struct nvme_fc_local_port *localport,
struct nvme_fc_remote_port *remoteport,
struct nvmefc_ls_req *lsreq)
{
struct fcloop_lsreq *tls_req = lsreq->private;
struct fcloop_rport *rport = remoteport->private;
int ret = 0;

tls_req->lsreq = lsreq;
INIT_WORK(&tls_req->work, fcloop_tgt_lsrqst_done_work);

if (!rport->targetport) {
tls_req->status = -ECONNREFUSED;
schedule_work(&tls_req->work);
return ret;
}

tls_req->status = 0;
tls_req->tport = rport->targetport->private;
ret = nvmet_fc_rcv_ls_req(rport->targetport, &tls_req->tgt_ls_req,
lsreq->rqstaddr, lsreq->rqstlen);

return ret;
}