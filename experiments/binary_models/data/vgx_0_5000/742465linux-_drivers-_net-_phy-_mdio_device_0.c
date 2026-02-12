int mdio_driver_register(struct mdio_driver *drv)
{
struct mdio_driver_common *mdiodrv = &drv->mdiodrv;
int retval;

pr_debug("%s: %s\n", __func__, mdiodrv->driver.name);

mdiodrv->driver.bus = &mdio_bus_type;
mdiodrv->driver.probe = mdio_probe;
mdiodrv->driver.remove = mdio_remove;
mdiodrv->driver.shutdown = mdio_shutdown;

retval = driver_register(&mdiodrv->driver);
if (retval) {
pr_err("%s: Error %d in registering driver\n",
mdiodrv->driver.name, retval);

return retval;
}

return 0;
}