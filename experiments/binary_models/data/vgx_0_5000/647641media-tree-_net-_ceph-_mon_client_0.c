static struct ceph_mon_generic_request *
alloc_generic_request(struct ceph_mon_client *monc, gfp_t gfp)
{
struct ceph_mon_generic_request *req;

req = kzalloc(sizeof(*req), gfp);
if (!req)
return NULL;

req->monc = monc;
kref_init(&req->kref);
RB_CLEAR_NODE(&req->node);
init_completion(&req->completion);

dout("%s greq %p\n", __func__, req);
return req;
}