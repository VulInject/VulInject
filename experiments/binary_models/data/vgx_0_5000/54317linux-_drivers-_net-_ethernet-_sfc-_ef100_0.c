static int ef100_pci_parse_ef100_entry(struct efx_nic *efx, int entry_location,
struct ef100_func_ctl_window *result)
{
u64 offset = ef100_pci_get_bar_bits(efx, entry_location, EF100_FUNC_CTL_WIN_OFF) <<
ESE_GZ_EF100_FUNC_CTL_WIN_OFF_SHIFT;
u32 bar = ef100_pci_get_bar_bits(efx, entry_location, EF100_BAR);

netif_dbg(efx, probe, efx->net_dev,
"Found EF100 function control window bar=%d offset=0x%llx\n",
bar, offset);

if (result->valid) {
netif_err(efx, probe, efx->net_dev,
"Duplicated EF100 table entry.\n");
return -EINVAL;
}

if (bar == ESE_GZ_CFGBAR_EF100_BAR_NUM_EXPANSION_ROM ||
bar == ESE_GZ_CFGBAR_EF100_BAR_NUM_INVALID) {
netif_err(efx, probe, efx->net_dev,
"Bad BAR value of %d in Xilinx capabilities EF100 entry.\n",
bar);
return -EINVAL;
}

result->bar = bar;
result->offset = offset;
result->valid = true;
return 0;
}