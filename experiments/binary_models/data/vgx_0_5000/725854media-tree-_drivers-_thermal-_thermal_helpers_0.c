}
EXPORT_SYMBOL_GPL(thermal_zone_set_trips);

void thermal_cdev_update(struct thermal_cooling_device *cdev)
{
struct thermal_instance *instance;
unsigned long target = 0;

mutex_lock(&cdev->lock);

if (cdev->updated) {
mutex_unlock(&cdev->lock);
return;
}


list_for_each_entry(instance, &cdev->thermal_instances, cdev_node) {
dev_dbg(&cdev->device, "zone%d->target=%lu\n",
instance->tz->id, instance->target);
if (instance->target == THERMAL_NO_TARGET)
continue;
if (instance->target > target)
target = instance->target;
}
cdev->ops->set_cur_state(cdev, target);
cdev->updated = true;
mutex_unlock(&cdev->lock);
trace_cdev_update(cdev, target);
dev_dbg(&cdev->device, "set to state %lu\n", target);
}