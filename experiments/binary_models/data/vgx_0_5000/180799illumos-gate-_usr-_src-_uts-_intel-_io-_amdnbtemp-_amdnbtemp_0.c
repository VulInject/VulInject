static int
amdnbtemp_read(void *arg, sensor_ioctl_scalar_t *scalar)
{
amdnbtemp_t *at = arg;

mutex_enter(&at->at_mutex);
at->at_raw = pci_config_get32(at->at_cfgspace, AMDNBTEMP_TEMPREG);
if (at->at_raw == PCI_EINVAL32) {
mutex_exit(&at->at_mutex);
return (EIO);
}

at->at_temp = AMDNBTEMP_TEMPREG_CURTMP(at->at_raw);
if (at->at_tjsel &&
AMDNBTEMP_TEMPREG_TJSEL(at->at_raw) == AMDNBTEMP_TJSEL_ADJUST) {
at->at_temp -= AMDNBTEMP_TEMP_ADJUST;
}

scalar->sis_unit = SENSOR_UNIT_CELSIUS;
scalar->sis_gran = AMDNBTEMP_GRANULARITY;
scalar->sis_value = at->at_temp;
mutex_exit(&at->at_mutex);

return (0);
}