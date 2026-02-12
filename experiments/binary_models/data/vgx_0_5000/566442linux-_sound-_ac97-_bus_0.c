static int ac97_add_adapter(struct ac97_controller *ac97_ctrl)
{
int ret;

mutex_lock(&ac97_controllers_mutex);
ret = idr_alloc(&ac97_adapter_idr, ac97_ctrl, 0, 0, GFP_KERNEL);
ac97_ctrl->nr = ret;
if (ret >= 0) {
dev_set_name(&ac97_ctrl->adap, "ac97-%d", ret);
ac97_ctrl->adap.type = &ac97_adapter_type;
ac97_ctrl->adap.parent = ac97_ctrl->parent;
ret = device_register(&ac97_ctrl->adap);
if (ret)
put_device(&ac97_ctrl->adap);
}
if (!ret)
list_add(&ac97_ctrl->controllers, &ac97_controllers);
mutex_unlock(&ac97_controllers_mutex);

if (!ret)
dev_dbg(&ac97_ctrl->adap, "adapter registered by %s\n",
dev_name(ac97_ctrl->parent));
return ret;
}