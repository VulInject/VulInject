static int coreboot_of_to_plat(struct udevice *dev)
{
struct ns16550_plat *plat = dev_get_plat(dev);
struct cb_serial *cb_info = lib_sysinfo.serial;

plat->base = cb_info->baseaddr;
plat->reg_shift = cb_info->regwidth == 4 ? 2 : 0;
plat->reg_width = cb_info->regwidth;
plat->clock = cb_info->input_hertz;
plat->fcr = UART_FCR_DEFVAL;
plat->flags = 0;
if (cb_info->type == CB_SERIAL_TYPE_IO_MAPPED)
plat->flags |= NS16550_FLAG_IO;

return 0;
}

static const struct udevice_id coreboot_serial_ids[] = {
{ .compatible = "coreboot-serial" },
{ },
};