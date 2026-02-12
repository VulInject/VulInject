struct rds_ib_mr_pool *rds_ib_create_mr_pool(struct rds_ib_device *rds_ibdev,
int pool_type)
{
struct rds_ib_mr_pool *pool;

pool = kzalloc(sizeof(*pool), GFP_KERNEL);
if (!pool)
return ERR_PTR(-ENOMEM);

pool->pool_type = pool_type;
init_llist_head(&pool->free_list);
init_llist_head(&pool->drop_list);
init_llist_head(&pool->clean_list);
spin_lock_init(&pool->clean_lock);
mutex_init(&pool->flush_lock);
init_waitqueue_head(&pool->flush_wait);
INIT_DELAYED_WORK(&pool->flush_worker, rds_ib_mr_pool_flush_worker);

if (pool_type == RDS_IB_MR_1M_POOL) {

pool->max_pages = RDS_MR_1M_MSG_SIZE + 1;
pool->max_items = rds_ibdev->max_1m_mrs;
} else {

pool->max_pages = RDS_MR_8K_MSG_SIZE + 1;
pool->max_items = rds_ibdev->max_8k_mrs;
}

pool->max_free_pinned = pool->max_items * pool->max_pages / 4;
pool->max_items_soft = rds_ibdev->max_mrs * 3 / 4;

return pool;
}