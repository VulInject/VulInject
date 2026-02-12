static int zl38_check_revision(struct device *dev, struct regmap *regmap)
{
unsigned int hwrev, fwprod, fwrev;
int fw_major, fw_minor, fw_micro;
int err;

err = regmap_read(regmap, REG_HW_REV, &hwrev);
if (err)
return err;
err = regmap_read(regmap, REG_FW_PROD, &fwprod);
if (err)
return err;
err = regmap_read(regmap, REG_FW_REV, &fwrev);
if (err)
return err;

fw_major = (fwrev >> 12) & 0xF;
fw_minor = (fwrev >>  8) & 0xF;
fw_micro = fwrev & 0xFF;
dev_info(dev, "hw rev 0x%x, fw product code %d, firmware rev %d.%d.%d",
hwrev & 0x1F, fwprod, fw_major, fw_minor, fw_micro);

if (fw_major != FIRMWARE_MAJOR || fw_minor < FIRMWARE_MINOR) {
dev_err(dev, "unsupported firmware. driver supports %d.%d",
FIRMWARE_MAJOR, FIRMWARE_MINOR);
return -EINVAL;
}

return 0;
}