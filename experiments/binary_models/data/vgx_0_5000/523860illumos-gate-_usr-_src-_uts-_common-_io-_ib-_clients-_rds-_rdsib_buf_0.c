void
rds_free_buf(rds_bufpool_t *pool, rds_buf_t *bp, uint_t nbuf)
{
uint_t		ix;

RDS_DPRINTF4("rds_free_buf", "Enter");

ASSERT(nbuf != 0);

mutex_enter(&pool->pool_lock);

if (pool->pool_nfree != 0) {
pool->pool_tailp->buf_nextp = bp;
} else {
pool->pool_headp = bp;
}

if (nbuf == 1) {
ASSERT(bp->buf_state == RDS_RCVBUF_FREE);
bp->buf_ep = NULL;
bp->buf_nextp = NULL;
pool->pool_tailp = bp;
} else {
for (ix = 1; ix < nbuf; ix++) {
ASSERT(bp->buf_state == RDS_RCVBUF_FREE);
bp->buf_ep = NULL;
bp = bp->buf_nextp;
}
ASSERT(bp->buf_state == RDS_RCVBUF_FREE);
bp->buf_ep = NULL;
bp->buf_nextp = NULL;
pool->pool_tailp = bp;
}

pool->pool_tailp->buf_nextp = NULL;

pool->pool_nfree += nbuf;
pool->pool_nbusy -= nbuf;

mutex_exit(&pool->pool_lock);

RDS_DPRINTF4("rds_free_buf", "Return");
}