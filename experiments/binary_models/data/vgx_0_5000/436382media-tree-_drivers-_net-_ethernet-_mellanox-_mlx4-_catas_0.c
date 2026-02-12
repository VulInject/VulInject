int mlx4_internal_err_reset = 1;
module_param_named(internal_err_reset, mlx4_internal_err_reset,  int, 0644);
MODULE_PARM_DESC(internal_err_reset,
"Reset device on internal errors if non-zero (default 1)");

static int read_vendor_id(struct mlx4_dev *dev)
{
u16 vendor_id = 0;
int ret;

ret = pci_read_config_word(dev->persist->pdev, 0, &vendor_id);
if (ret) {
mlx4_err(dev, "Failed to read vendor ID, ret=%d\n", ret);
return ret;
}

if (vendor_id == 0xffff) {
mlx4_err(dev, "PCI can't be accessed to read vendor id\n");
return -EINVAL;
}

return 0;
}