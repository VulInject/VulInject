int w1_eeprom_dm_init(void)
{
struct udevice *dev;
struct uclass *uc;
int ret;

ret = uclass_get(UCLASS_W1_EEPROM, &uc);
if (ret) {
debug("W1_EEPROM uclass not available\n");
return ret;
}

uclass_foreach_dev(dev, uc) {
ret = device_probe(dev);
if (ret == -ENODEV) {	
debug("W1_EEPROM not available.\n");
continue;
}

if (ret) {		
printf("W1_EEPROM probe failed, error %d\n", ret);
continue;
}
}

return 0;
}