int ecdsa_verify(struct image_sign_info *info,
const struct image_region region[], int region_count,
uint8_t *sig, uint sig_len)
{
const struct checksum_algo *algo = info->checksum;
uint8_t hash[algo->checksum_len];
struct udevice *dev;
int ret;

ret = uclass_first_device_err(UCLASS_ECDSA, &dev);
if (ret) {
debug("ECDSA: Could not find ECDSA implementation: %d\n", ret);
return ret;
}

ret = algo->calculate(algo->name, region, region_count, hash);
if (ret < 0)
return -EINVAL;

return ecdsa_verify_hash(dev, info, hash, sig, sig_len);
}