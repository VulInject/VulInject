int null_alloc_reqbuf(struct ptlrpc_sec *sec,
struct ptlrpc_request *req,
int msgsize)
{
if (!req->rq_reqbuf) {
int alloc_size = size_roundup_power2(msgsize);

LASSERT(!req->rq_pool);
req->rq_reqbuf = libcfs_kvzalloc(alloc_size, GFP_NOFS);
if (!req->rq_reqbuf)
return -ENOMEM;

req->rq_reqbuf_len = alloc_size;
} else {
LASSERT(req->rq_pool);
LASSERT(req->rq_reqbuf_len >= msgsize);
memset(req->rq_reqbuf, 0, msgsize);
}

req->rq_reqmsg = req->rq_reqbuf;
return 0;
}