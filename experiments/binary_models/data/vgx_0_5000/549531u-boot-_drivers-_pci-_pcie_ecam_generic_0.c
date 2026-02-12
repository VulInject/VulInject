static int pci_generic_ecam_of_to_plat(struct udevice *dev)
{
struct generic_ecam_pcie *pcie = dev_get_priv(dev);
struct fdt_resource reg_res;
DECLARE_GLOBAL_DATA_PTR;
int err;

err = fdt_get_resource(gd->fdt_blob, dev_of_offset(dev), "reg",
0, &reg_res);
if (err < 0) {
pr_err("\"reg\" resource not found\n");
return err;
}

pcie->size = fdt_resource_size(&reg_res);
pcie->cfg_base = map_physmem(reg_res.start, pcie->size, MAP_NOCACHE);

return 0;
}