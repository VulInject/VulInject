static int charger_extcon_init(struct charger_manager *cm,
struct charger_cable *cable)
{
int ret;


INIT_WORK(&cable->wq, charger_extcon_work);
cable->nb.notifier_call = charger_extcon_notifier;
ret = extcon_register_interest(&cable->extcon_dev,
cable->extcon_name, cable->name, &cable->nb);
if (ret < 0) {
pr_info("Cannot register extcon_dev for %s(cable: %s)\n",
cable->extcon_name, cable->name);
ret = -EINVAL;
}

return ret;
}