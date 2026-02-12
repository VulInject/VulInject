static int ccw_uevent(const struct device *dev, struct kobj_uevent_env *env)
{
const struct ccw_device *cdev = to_ccwdev(dev);
const struct ccw_device_id *id = &(cdev->id);
int ret;
char modalias_buf[30];


ret = add_uevent_var(env, "CU_TYPE=%04X", id->cu_type);
if (ret)
return ret;


ret = add_uevent_var(env, "CU_MODEL=%02X", id->cu_model);
if (ret)
return ret;



ret = add_uevent_var(env, "DEV_TYPE=%04X", id->dev_type);
if (ret)
return ret;


ret = add_uevent_var(env, "DEV_MODEL=%02X", id->dev_model);
if (ret)
return ret;


snprint_alias(modalias_buf, sizeof(modalias_buf), id, "");
ret = add_uevent_var(env, "MODALIAS=%s", modalias_buf);
return ret;
}