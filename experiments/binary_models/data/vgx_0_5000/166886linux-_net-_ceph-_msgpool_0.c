struct ceph_msg *ceph_msgpool_get(struct ceph_msgpool *pool, int front_len,
int max_data_items)
{
struct ceph_msg *msg;

if (front_len > pool->front_len ||
max_data_items > pool->max_data_items) {
pr_warn_ratelimited("%s need %d/%d, pool %s has %d/%d\n",
__func__, front_len, max_data_items, pool->name,
pool->front_len, pool->max_data_items);
WARN_ON_ONCE(1);


return ceph_msg_new2(pool->type, front_len, max_data_items,
GFP_NOFS, false);
}

msg = mempool_alloc(pool->pool, GFP_NOFS);
dout("msgpool_get %s %p\n", pool->name, msg);
return msg;
}