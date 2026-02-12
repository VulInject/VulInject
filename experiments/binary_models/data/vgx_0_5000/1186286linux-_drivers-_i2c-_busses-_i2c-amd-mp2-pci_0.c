}
EXPORT_SYMBOL_GPL(amd_mp2_rw_timeout);

int amd_mp2_register_cb(struct amd_i2c_common *i2c_common)
{
struct amd_mp2_dev *privdata = i2c_common->mp2_dev;
struct pci_dev *pdev = privdata->pci_dev;

if (i2c_common->bus_id > 1)
return -EINVAL;

if (privdata->busses[i2c_common->bus_id]) {
pci_err(pdev, "Bus %d already taken!\n", i2c_common->bus_id);
return -EINVAL;
}

privdata->busses[i2c_common->bus_id] = i2c_common;

return 0;
}