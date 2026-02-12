static int i5500_temp_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
{
int err;
struct device *hwmon_dev;
u32 tstimer;
s8 tsfsc;

err = pcim_enable_device(pdev);
if (err) {
dev_err(&pdev->dev, "Failed to enable device\n");
return err;
}

pci_read_config_byte(pdev, REG_TSFSC, &tsfsc);
pci_read_config_dword(pdev, REG_TSTIMER, &tstimer);
if (tsfsc == 0x7F && tstimer == 0x07D30D40) {
dev_notice(&pdev->dev, "Sensor seems to be disabled\n");
return -ENODEV;
}

hwmon_dev = devm_hwmon_device_register_with_info(&pdev->dev, "intel5500", NULL,
&i5500_chip_info, NULL);
return PTR_ERR_OR_ZERO(hwmon_dev);
}