}
EXPORT_SYMBOL_GPL(devm_extcon_dev_unregister);


int devm_extcon_register_notifier(struct device *dev, struct extcon_dev *edev,
unsigned int id, struct notifier_block *nb)
{
struct extcon_dev_notifier_devres *ptr;
int ret;

ptr = devres_alloc(devm_extcon_dev_notifier_unreg, sizeof(*ptr),
GFP_KERNEL);
if (!ptr)
return -ENOMEM;

ret = extcon_register_notifier(edev, id, nb);
if (ret) {
devres_free(ptr);
return ret;
}

ptr->edev = edev;
ptr->id = id;
ptr->nb = nb;
devres_add(dev, ptr);

return 0;
}