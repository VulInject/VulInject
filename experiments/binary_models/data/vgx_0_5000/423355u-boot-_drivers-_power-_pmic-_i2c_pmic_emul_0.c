static int sandbox_i2c_pmic_read_data(struct udevice *emul, uchar chip,
uchar *buffer, int len)
{
struct sandbox_i2c_pmic_plat_data *plat = dev_get_plat(emul);

if (plat->rw_idx + len > plat->buf_size) {
pr_err("Request exceeds PMIC register range! Max register: %#x",
plat->reg_count);
return -EFAULT;
}

debug("Read PMIC: %#x at register: %#x idx: %#x count: %d\n",
(unsigned int)chip & 0xff, plat->rw_reg, plat->rw_idx, len);

memcpy(buffer, plat->reg + plat->rw_idx, len);

return 0;
}