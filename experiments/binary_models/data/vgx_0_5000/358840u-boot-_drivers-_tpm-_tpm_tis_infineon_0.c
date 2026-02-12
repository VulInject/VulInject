static int tpm_tis_i2c_request_locality(struct udevice *dev, int loc)
{
struct tpm_chip *chip = dev_get_priv(dev);
unsigned long start, stop;
u8 buf = TPM_ACCESS_REQUEST_USE;
int rc;

rc = tpm_tis_i2c_check_locality(dev, loc);
if (rc >= 0) {
debug("%s: Already have locality\n", __func__);
return loc;  
} else if (rc != -ENOENT) {
debug("%s: Failed to get locality: %d\n", __func__, rc);
return rc;
}

rc = tpm_tis_i2c_write(dev, TPM_INFINEON_ACCESS(loc), &buf, 1);
if (rc) {
debug("%s: Failed to write to TPM: %d\n", __func__, rc);
return rc;
}


start = get_timer(0);
stop = chip->timeout_a;
do {
rc = tpm_tis_i2c_check_locality(dev, loc);
if (rc >= 0) {
debug("%s: Have locality\n", __func__);
return loc;
} else if (rc != -ENOENT) {
debug("%s: Failed to get locality: %d\n", __func__, rc);
return rc;
}
mdelay(TPM_TIMEOUT_MS);
} while (get_timer(start) < stop);
debug("%s: Timeout getting locality: %d\n", __func__, rc);

return rc;
}