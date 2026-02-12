static void init_context(struct ctx_info *ctxi, struct cxlflash_cfg *cfg,
struct cxl_context *ctx, int ctxid, struct file *file,
u32 perms)
{
struct afu *afu = cfg->afu;

ctxi->rht_perms = perms;
ctxi->ctrl_map = &afu->afu_map->ctrls[ctxid].ctrl;
ctxi->ctxid = ENCODE_CTXID(ctxi, ctxid);
ctxi->pid = current->tgid; 
ctxi->ctx = ctx;
ctxi->cfg = cfg;
ctxi->file = file;
ctxi->initialized = true;
mutex_init(&ctxi->mutex);
kref_init(&ctxi->kref);
INIT_LIST_HEAD(&ctxi->luns);
INIT_LIST_HEAD(&ctxi->list); 
}