void ixgbe_add_uc_addr(struct ixgbe_hw *hw, uint8_t *addr, uint32_t vmdq)
{
uint32_t rar_entries = hw->mac.num_rar_entries;
uint32_t rar;

DEBUGFUNC("ixgbe_add_uc_addr");

DEBUGOUT6(" UC Addr = %.2X %.2X %.2X %.2X %.2X %.2X\n",
addr[0], addr[1], addr[2], addr[3], addr[4], addr[5]);


if (hw->addr_ctrl.rar_used_count < rar_entries) {
rar = hw->addr_ctrl.rar_used_count;
hw->mac.ops.set_rar(hw, rar, addr, vmdq, IXGBE_RAH_AV);
DEBUGOUT1("Added a secondary address to RAR[%d]\n", rar);
hw->addr_ctrl.rar_used_count++;
} else {
hw->addr_ctrl.overflow_promisc++;
}

DEBUGOUT("ixgbe_add_uc_addr Complete\n");
}