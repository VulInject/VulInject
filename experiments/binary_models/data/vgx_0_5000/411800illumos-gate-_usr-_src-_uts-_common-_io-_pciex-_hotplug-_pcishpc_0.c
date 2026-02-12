static void
pcishpc_write_reg(pcie_hp_ctrl_t *ctrl_p, int reg, uint32_t data)
{
pcie_bus_t	*bus_p = PCIE_DIP2BUS(ctrl_p->hc_dip);


pci_config_put8(bus_p->bus_cfg_hdl,
bus_p->bus_pci_hp_off + PCI_HP_DWORD_SELECT_OFF, (uint8_t)reg);


if (pci_config_get8(bus_p->bus_cfg_hdl, bus_p->bus_pci_hp_off +
PCI_HP_DWORD_SELECT_OFF) != (uint8_t)reg) {
PCIE_DBG("pcishpc_write_reg() - Failed writing "
"DWORD select reg\n");
return;
}


pci_config_put32(bus_p->bus_cfg_hdl,
bus_p->bus_pci_hp_off + PCI_HP_DWORD_DATA_OFF, data);


(void) pci_config_get16(bus_p->bus_cfg_hdl, PCI_CONF_VENID);
}