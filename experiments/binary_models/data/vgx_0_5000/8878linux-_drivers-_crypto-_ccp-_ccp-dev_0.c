struct ccp_device *ccp_alloc_struct(struct sp_device *sp)
{
struct device *dev = sp->dev;
struct ccp_device *ccp;

ccp = devm_kzalloc(dev, sizeof(*ccp), GFP_KERNEL);
if (!ccp)
return NULL;
ccp->dev = dev;
ccp->sp = sp;
ccp->axcache = sp->axcache;

INIT_LIST_HEAD(&ccp->cmd);
INIT_LIST_HEAD(&ccp->backlog);

spin_lock_init(&ccp->cmd_lock);
mutex_init(&ccp->req_mutex);
mutex_init(&ccp->sb_mutex);
ccp->sb_count = KSB_COUNT;
ccp->sb_start = 0;


init_waitqueue_head(&ccp->sb_queue);
init_waitqueue_head(&ccp->suspend_queue);

snprintf(ccp->name, MAX_CCP_NAME_LEN, "ccp-%u", sp->ord);
snprintf(ccp->rngname, MAX_CCP_NAME_LEN, "ccp-%u-rng", sp->ord);

return ccp;
}