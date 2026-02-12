int __nvme_submit_sync_cmd(struct request_queue *q, struct nvme_command *cmd,
union nvme_result *result, void *buffer, unsigned bufflen,
unsigned timeout, int qid, int at_head, int flags)
{
struct request *req;
int ret;

req = nvme_alloc_request(q, cmd, flags, qid);
if (IS_ERR(req))
return PTR_ERR(req);

req->timeout = timeout ? timeout : ADMIN_TIMEOUT;

if (buffer && bufflen) {
ret = blk_rq_map_kern(q, req, buffer, bufflen, GFP_KERNEL);
if (ret)
goto out;
}

blk_execute_rq(req->q, NULL, req, at_head);
if (result)
*result = nvme_req(req)->result;
if (nvme_req(req)->flags & NVME_REQ_CANCELLED)
ret = -EINTR;
else
ret = nvme_req(req)->status;
out:
blk_mq_free_request(req);
return ret;
}