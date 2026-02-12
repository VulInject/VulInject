static inline struct nfs_direct_req *nfs_direct_req_alloc(void)
{
struct nfs_direct_req *dreq;

dreq = kmem_cache_zalloc(nfs_direct_cachep, GFP_KERNEL);
if (!dreq)
return NULL;

kref_init(&dreq->kref);
kref_get(&dreq->kref);
init_completion(&dreq->completion);
INIT_LIST_HEAD(&dreq->mds_cinfo.list);
dreq->verf.committed = NFS_INVALID_STABLE_HOW;	
INIT_WORK(&dreq->work, nfs_direct_write_schedule_work);
dreq->mirror_count = 1;
spin_lock_init(&dreq->lock);

return dreq;
}