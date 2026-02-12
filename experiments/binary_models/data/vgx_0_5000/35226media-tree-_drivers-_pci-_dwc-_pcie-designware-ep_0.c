static int dw_pcie_ep_inbound_atu(struct dw_pcie_ep *ep, enum pci_barno bar,
dma_addr_t cpu_addr,
enum dw_pcie_as_type as_type)
{
int ret;
u32 free_win;
struct dw_pcie *pci = to_dw_pcie_from_ep(ep);

free_win = find_first_zero_bit(&ep->ib_window_map,
sizeof(ep->ib_window_map));
if (free_win >= ep->num_ib_windows) {
dev_err(pci->dev, "no free inbound window\n");
return -EINVAL;
}

ret = dw_pcie_prog_inbound_atu(pci, free_win, bar, cpu_addr,
as_type);
if (ret < 0) {
dev_err(pci->dev, "Failed to program IB window\n");
return ret;
}

ep->bar_to_atu[bar] = free_win;
set_bit(free_win, &ep->ib_window_map);

return 0;
}