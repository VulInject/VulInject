static void __nvmet_req_complete(struct nvmet_req *req, u16 status)
{
if (status)
nvmet_set_status(req, status);


req->rsp->sq_head = 0;
if (likely(req->sq)) 
req->rsp->sq_id = cpu_to_le16(req->sq->qid);
req->rsp->command_id = req->cmd->common.command_id;

if (req->ns)
nvmet_put_namespace(req->ns);
req->ops->queue_response(req);
}