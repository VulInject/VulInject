static void bt1_pcie_full_stop_bus(struct bt1_pcie *btpci, bool init)
{
struct device *dev = btpci->dw.dev;
struct dw_pcie *pci = &btpci->dw;
int ret;


regmap_update_bits(btpci->sys_regs, BT1_CCU_PCIE_GENC,
BT1_CCU_PCIE_LTSSM_EN, 0);


ret = reset_control_bulk_assert(DW_PCIE_NUM_CORE_RSTS, pci->core_rsts);
if (ret)
dev_err(dev, "Failed to assert core resets\n");


if (!init) {
clk_bulk_disable_unprepare(DW_PCIE_NUM_CORE_CLKS, pci->core_clks);

clk_bulk_disable_unprepare(DW_PCIE_NUM_APP_CLKS, pci->app_clks);
}


gpiod_set_value_cansleep(pci->pe_rst, 1);


msleep(BT1_PCIE_RST_DELAY_MS);
}