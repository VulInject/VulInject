static int nvme_nvm_submit_io(struct nvm_dev *dev, struct nvm_rq *rqd)
{
struct request_queue *q = dev->q;
struct nvme_ns *ns = q->queuedata;
struct request *rq;
struct bio *bio = rqd->bio;
struct nvme_nvm_command *cmd;

cmd = kzalloc(sizeof(struct nvme_nvm_command), GFP_KERNEL);
if (!cmd)
return -ENOMEM;

nvme_nvm_rqtocmd(rqd, ns, cmd);

rq = nvme_alloc_request(q, (struct nvme_command *)cmd, 0, NVME_QID_ANY);
if (IS_ERR(rq)) {
kfree(cmd);
return -ENOMEM;
}
rq->cmd_flags &= ~REQ_FAILFAST_DRIVER;

if (bio) {
blk_init_request_from_bio(rq, bio);
} else {
rq->ioprio = IOPRIO_PRIO_VALUE(IOPRIO_CLASS_BE, IOPRIO_NORM);
rq->__data_len = 0;
}

rq->end_io_data = rqd;

blk_execute_rq_nowait(q, NULL, rq, 0, nvme_nvm_end_io);

return 0;
}