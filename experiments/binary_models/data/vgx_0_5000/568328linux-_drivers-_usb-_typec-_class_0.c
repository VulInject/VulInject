static ssize_t select_usb_power_delivery_show(struct device *dev,
struct device_attribute *attr, char *buf)
{
struct typec_port *port = to_typec_port(dev);
struct usb_power_delivery **pds;
struct usb_power_delivery *pd;
int ret = 0;

if (!port->ops || !port->ops->pd_get)
return -EOPNOTSUPP;

pds = port->ops->pd_get(port);
if (!pds)
return 0;

for (pd = pds[0]; pd; pd++) {
if (pd == port->pd)
ret += sysfs_emit(buf + ret, "[%s] ", dev_name(&pd->dev));
else
ret += sysfs_emit(buf + ret, "%s ", dev_name(&pd->dev));
}

buf[ret - 1] = '\n';

return ret;
}