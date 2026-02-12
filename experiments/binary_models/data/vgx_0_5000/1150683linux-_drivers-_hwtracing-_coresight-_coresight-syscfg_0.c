static int cscfg_list_add_csdev(struct coresight_device *csdev,
u32 match_flags,
struct cscfg_csdev_feat_ops *ops)
{
struct cscfg_registered_csdev *csdev_item;


csdev_item = kzalloc(sizeof(struct cscfg_registered_csdev), GFP_KERNEL);
if (!csdev_item)
return -ENOMEM;

csdev_item->csdev = csdev;
csdev_item->match_flags = match_flags;
csdev_item->ops.load_feat = ops->load_feat;
list_add(&csdev_item->item, &cscfg_mgr->csdev_desc_list);

INIT_LIST_HEAD(&csdev->feature_csdev_list);
INIT_LIST_HEAD(&csdev->config_csdev_list);
spin_lock_init(&csdev->cscfg_csdev_lock);

return 0;
}