static struct smcd_dev *smcd_alloc_dev(struct device *parent, const char *name,
const struct smcd_ops *ops, int max_dmbs)
{
struct smcd_dev *smcd;

smcd = devm_kzalloc(parent, sizeof(*smcd), GFP_KERNEL);
if (!smcd)
return NULL;
smcd->conn = devm_kcalloc(parent, max_dmbs,
sizeof(struct smc_connection *), GFP_KERNEL);
if (!smcd->conn)
return NULL;

smcd->event_wq = alloc_ordered_workqueue("ism_evt_wq-%s)",
WQ_MEM_RECLAIM, name);
if (!smcd->event_wq)
return NULL;

smcd->ops = ops;

spin_lock_init(&smcd->lock);
spin_lock_init(&smcd->lgr_lock);
INIT_LIST_HEAD(&smcd->vlan);
INIT_LIST_HEAD(&smcd->lgr_list);
init_waitqueue_head(&smcd->lgrs_deleted);
return smcd;
}