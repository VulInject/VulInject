static void at24c_eeprom_realize(DeviceState *dev, Error **errp)
{
EEPROMState *ee = AT24C_EE(dev);

if (ee->blk) {
int64_t len = blk_getlength(ee->blk);

if (len != ee->rsize) {
error_setg(errp, "%s: Backing file size %" PRId64 " != %u",
TYPE_AT24C_EE, len, ee->rsize);
return;
}

if (blk_set_perm(ee->blk, BLK_PERM_CONSISTENT_READ | BLK_PERM_WRITE,
BLK_PERM_ALL, &error_fatal) < 0)
{
error_setg(errp, "%s: Backing file incorrect permission",
TYPE_AT24C_EE);
return;
}
}

ee->mem = g_malloc0(ee->rsize);
}