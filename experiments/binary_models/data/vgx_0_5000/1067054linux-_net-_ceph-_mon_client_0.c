static void handle_statfs_reply(struct ceph_mon_client *monc,
struct ceph_msg *msg)
{
struct ceph_mon_generic_request *req;
struct ceph_mon_statfs_reply *reply = msg->front.iov_base;
u64 tid = le64_to_cpu(msg->hdr.tid);

dout("%s msg %p tid %llu\n", __func__, msg, tid);

if (msg->front.iov_len != sizeof(*reply))
goto bad;

mutex_lock(&monc->mutex);
req = lookup_generic_request(&monc->generic_request_tree, tid);
if (!req) {
mutex_unlock(&monc->mutex);
return;
}

req->result = 0;
*req->u.st = reply->st; 
__finish_generic_request(req);
mutex_unlock(&monc->mutex);

complete_generic_request(req);
return;

bad:
pr_err("corrupt statfs reply, tid %llu\n", tid);
ceph_msg_dump(msg);
}