static int zpci_bus_add_device(struct zpci_bus *zbus, struct zpci_dev *zdev)
{
int rc = -EINVAL;

if (zbus->function[zdev->devfn]) {
pr_err("devfn %04x is already assigned\n", zdev->devfn);
return rc;
}

zdev->zbus = zbus;
zbus->function[zdev->devfn] = zdev;
zpci_nb_devices++;

if (zbus->multifunction && !zdev->rid_available) {
WARN_ONCE(1, "rid_available not set for multifunction\n");
goto error;
}
rc = zpci_init_slot(zdev);
if (rc)
goto error;
zdev->has_hp_slot = 1;

return 0;

error:
zbus->function[zdev->devfn] = NULL;
zdev->zbus = NULL;
zpci_nb_devices--;
return rc;
}