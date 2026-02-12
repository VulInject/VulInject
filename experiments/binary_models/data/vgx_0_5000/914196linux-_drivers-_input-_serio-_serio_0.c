int __serio_register_driver(struct serio_driver *drv, struct module *owner, const char *mod_name)
{
bool manual_bind = drv->manual_bind;
int error;

drv->driver.bus = &serio_bus;
drv->driver.owner = owner;
drv->driver.mod_name = mod_name;


drv->manual_bind = true;

error = driver_register(&drv->driver);
if (error) {
pr_err("driver_register() failed for %s, error: %d\n",
drv->driver.name, error);
return error;
}


if (!manual_bind) {
drv->manual_bind = false;
error = serio_queue_event(drv, NULL, SERIO_ATTACH_DRIVER);
if (error) {
driver_unregister(&drv->driver);
return error;
}
}

return 0;
}