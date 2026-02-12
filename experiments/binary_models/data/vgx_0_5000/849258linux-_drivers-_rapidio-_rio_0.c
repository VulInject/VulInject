int rio_route_add_entry(struct rio_dev *rdev,
u16 table, u16 route_destid, u8 route_port, int lock)
{
int rc = -EINVAL;
struct rio_switch_ops *ops = rdev->rswitch->ops;

if (lock) {
rc = rio_lock_device(rdev->net->hport, rdev->destid,
rdev->hopcount, 1000);
if (rc)
return rc;
}

spin_lock(&rdev->rswitch->lock);

if (!ops || !ops->add_entry) {
rc = rio_std_route_add_entry(rdev->net->hport, rdev->destid,
rdev->hopcount, table,
route_destid, route_port);
} else if (try_module_get(ops->owner)) {
rc = ops->add_entry(rdev->net->hport, rdev->destid,
rdev->hopcount, table, route_destid,
route_port);
module_put(ops->owner);
}

spin_unlock(&rdev->rswitch->lock);

if (lock)
rio_unlock_device(rdev->net->hport, rdev->destid,
rdev->hopcount);

return rc;
}