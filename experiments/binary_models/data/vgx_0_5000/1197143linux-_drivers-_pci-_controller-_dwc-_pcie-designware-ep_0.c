static int dw_pcie_ep_outbound_atu(struct dw_pcie_ep *ep, u8 func_no,
phys_addr_t phys_addr,
u64 pci_addr, size_t size)
{
struct dw_pcie *pci = to_dw_pcie_from_ep(ep);
u32 free_win;
int ret;

free_win = find_first_zero_bit(ep->ob_window_map, pci->num_ob_windows);
if (free_win >= pci->num_ob_windows) {
dev_err(pci->dev, "No free outbound window\n");
return -EINVAL;
}

ret = dw_pcie_prog_ep_outbound_atu(pci, func_no, free_win, PCIE_ATU_TYPE_MEM,
phys_addr, pci_addr, size);
if (ret)
return ret;

set_bit(free_win, ep->ob_window_map);
ep->outbound_addr[free_win] = phys_addr;

return 0;
}