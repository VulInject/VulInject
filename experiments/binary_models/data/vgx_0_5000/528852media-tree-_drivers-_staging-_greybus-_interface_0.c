static int gb_interface_route_create(struct gb_interface *intf)
{
struct gb_svc *svc = intf->hd->svc;
u8 intf_id = intf->interface_id;
u8 device_id;
int ret;


ret = ida_simple_get(&svc->device_id_map,
GB_SVC_DEVICE_ID_MIN, GB_SVC_DEVICE_ID_MAX + 1,
GFP_KERNEL);
if (ret < 0) {
dev_err(&intf->dev, "failed to allocate device id: %d\n", ret);
return ret;
}
device_id = ret;

ret = gb_svc_intf_device_id(svc, intf_id, device_id);
if (ret) {
dev_err(&intf->dev, "failed to set device id %u: %d\n",
device_id, ret);
goto err_ida_remove;
}


ret = gb_svc_route_create(svc, svc->ap_intf_id, GB_SVC_DEVICE_ID_AP,
intf_id, device_id);
if (ret) {
dev_err(&intf->dev, "failed to create route: %d\n", ret);
goto err_svc_id_free;
}

intf->device_id = device_id;

return 0;

err_svc_id_free:

err_ida_remove:
ida_simple_remove(&svc->device_id_map, device_id);

return ret;
}