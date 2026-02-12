int
px_err_cfg_hdl_check(dev_info_t *dip, const void *handle, const void *arg1,
const void *arg2)
{
int			status = DDI_FM_FATAL;
uint32_t		addr = *(uint32_t *)arg1;
uint16_t		bdf = *(uint16_t *)arg2;
pcie_bus_t		*bus_p;

DBG(DBG_ERR_INTR, dip, "Check CFG Hdl: dip 0x%p addr 0x%x bdf=0x%x\n",
dip, addr, bdf);

bus_p = PCIE_DIP2BUS(dip);


status = (!addr && (PCIE_CHECK_VALID_BDF(bdf) &&
(bus_p->bus_bdf == bdf))) ? DDI_FM_NONFATAL : DDI_FM_FATAL;

return (status);
}