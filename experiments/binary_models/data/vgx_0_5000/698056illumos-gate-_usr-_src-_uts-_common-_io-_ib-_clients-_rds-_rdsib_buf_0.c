void
rds_free_recv_pool(rds_ep_t *ep)
{
rds_bufpool_t *pool;

if (ep->ep_type == RDS_EP_TYPE_DATA) {
pool = &rds_dpool;
} else {
pool = &rds_cpool;
}

mutex_enter(&ep->ep_rcvpool.pool_lock);
if (ep->ep_rcvpool.pool_nfree != 0) {
rds_free_buf(pool, ep->ep_rcvpool.pool_headp,
ep->ep_rcvpool.pool_nfree);
ep->ep_rcvpool.pool_nfree = 0;
ep->ep_rcvpool.pool_headp = NULL;
ep->ep_rcvpool.pool_tailp = NULL;
}
mutex_exit(&ep->ep_rcvpool.pool_lock);
}