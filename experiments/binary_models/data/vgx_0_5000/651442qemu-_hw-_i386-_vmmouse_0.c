static void vmmouse_realizefn(DeviceState *dev, Error **errp)
{
VMMouseState *s = VMMOUSE(dev);

DPRINTF("vmmouse_init\n");

if (!s->i8042) {
error_setg(errp, "'i8042' link is not set");
return;
}
if (!object_resolve_path_type("", TYPE_VMPORT, NULL)) {
error_setg(errp, "vmmouse needs a machine with vmport");
return;
}

vmport_register(VMPORT_CMD_VMMOUSE_STATUS, vmmouse_ioport_read, s);
vmport_register(VMPORT_CMD_VMMOUSE_COMMAND, vmmouse_ioport_read, s);
vmport_register(VMPORT_CMD_VMMOUSE_DATA, vmmouse_ioport_read, s);
}