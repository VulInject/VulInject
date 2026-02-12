bool antminer_detect_one_with_drv(const char * const devpath, struct device_drv * const drv)
{
struct ICARUS_INFO *info = calloc(1, sizeof(struct ICARUS_INFO));
if (unlikely(!info))
quit(1, "Failed to malloc ICARUS_INFO");

*info = (struct ICARUS_INFO){
.baud = ANTMINER_IO_SPEED,
.Hs = ANTMINER_HASH_TIME,
.timing_mode = MODE_LONG,
.do_icarus_timing = true,
.read_size = 5,
.reopen_mode = IRM_NEVER,

.has_bm1382_freq_register = antminer_chip_has_bm1382_freq_register(detectone_meta_info.product),
};

struct cgpu_info * const dev = icarus_detect_custom(devpath, drv, info);
if (!dev)
{
free(info);
return false;
}

dev->set_device_funcs = antminer_set_device_funcs;
info->read_timeout_ms = 75;

return true;
}