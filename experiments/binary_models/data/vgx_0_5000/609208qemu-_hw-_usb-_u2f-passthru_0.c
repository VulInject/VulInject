static void u2f_passthru_realize(U2FKeyState *base, Error **errp)
{
U2FPassthruState *key = PASSTHRU_U2F_KEY(base);
int fd;

if (key->hidraw == NULL) {
fd = u2f_passthru_open_from_scan();
if (fd < 0) {
error_setg(errp, "%s: Failed to find a U2F USB device",
TYPE_U2F_PASSTHRU);
return;
}
error_setg(errp, "%s: Missing hidraw", TYPE_U2F_PASSTHRU);
return;
} else {
fd = qemu_open_old(key->hidraw, O_RDWR);
if (fd < 0) {
error_setg(errp, "%s: Failed to open %s", TYPE_U2F_PASSTHRU,
key->hidraw);
return;
}

if (!u2f_passthru_is_u2f_device(fd)) {
qemu_close(fd);
error_setg(errp, "%s: Passed hidraw does not represent "
"a U2F HID device", TYPE_U2F_PASSTHRU);
return;
}
}
key->hidraw_fd = fd;
u2f_passthru_reset(key);
}