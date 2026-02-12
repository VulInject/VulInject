static struct idxd_device *idxd_alloc(struct pci_dev *pdev, struct idxd_driver_data *data)
{
struct device *dev = &pdev->dev;
struct device *conf_dev;
struct idxd_device *idxd;
int rc;

idxd = kzalloc_node(sizeof(*idxd), GFP_KERNEL, dev_to_node(dev));
if (!idxd)
return NULL;

conf_dev = idxd_confdev(idxd);
idxd->pdev = pdev;
idxd->data = data;
idxd_dev_set_type(&idxd->idxd_dev, idxd->data->type);
idxd->id = ida_alloc(&idxd_ida, GFP_KERNEL);
if (idxd->id < 0)
return NULL;

idxd->opcap_bmap = bitmap_zalloc_node(IDXD_MAX_OPCAP_BITS, GFP_KERNEL, dev_to_node(dev));
if (!idxd->opcap_bmap) {
ida_free(&idxd_ida, idxd->id);
return NULL;
}

device_initialize(conf_dev);
conf_dev->parent = dev;
conf_dev->bus = &dsa_bus_type;
conf_dev->type = idxd->data->dev_type;
rc = dev_set_name(conf_dev, "%s%d", idxd->data->name_prefix, idxd->id);
if (rc < 0) {
put_device(conf_dev);
return NULL;
}

spin_lock_init(&idxd->dev_lock);
spin_lock_init(&idxd->cmd_lock);

return idxd;
}