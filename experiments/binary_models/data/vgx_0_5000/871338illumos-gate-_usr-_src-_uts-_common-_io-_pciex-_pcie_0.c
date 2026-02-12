int
pcie_init_cfghdl(dev_info_t *cdip)
{
pcie_bus_t		*bus_p;
ddi_acc_handle_t	eh = NULL;

bus_p = PCIE_DIP2BUS(cdip);
if (bus_p == NULL)
return (DDI_FAILURE);


if (pci_config_setup(cdip, &eh) != DDI_SUCCESS) {
cmn_err(CE_WARN, "Cannot setup config access"
" for BDF 0x%x\n", bus_p->bus_bdf);
return (DDI_FAILURE);
}

bus_p->bus_cfg_hdl = eh;
return (DDI_SUCCESS);
}