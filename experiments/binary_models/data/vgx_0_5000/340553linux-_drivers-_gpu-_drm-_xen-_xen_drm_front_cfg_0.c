int xen_drm_front_cfg_card(struct xen_drm_front_info *front_info,
struct xen_drm_front_cfg *cfg)
{
struct xenbus_device *xb_dev = front_info->xb_dev;
int ret, i;

if (xenbus_read_unsigned(front_info->xb_dev->nodename,
XENDISPL_FIELD_BE_ALLOC, 0)) {
DRM_INFO("Backend can provide display buffers\n");
cfg->be_alloc = true;
}

cfg->num_connectors = 0;
for (i = 0; i < ARRAY_SIZE(cfg->connectors); i++) {
ret = cfg_connector(front_info, &cfg->connectors[i],
xb_dev->nodename, i);
if (ret < 0)
break;
cfg->num_connectors++;
}

if (!cfg->num_connectors) {
DRM_ERROR("No connector(s) configured at %s\n",
xb_dev->nodename);
return -ENODEV;
}

return 0;
}