int ath12k_pci_power_up(struct ath12k_base *ab)
{
struct ath12k_pci *ab_pci = ath12k_pci_priv(ab);
int ret;

ab_pci->register_window = 0;
clear_bit(ATH12K_PCI_FLAG_INIT_DONE, &ab_pci->flags);
ath12k_pci_sw_reset(ab_pci->ab, true);


ath12k_pci_aspm_disable(ab_pci);

ath12k_pci_msi_enable(ab_pci);

ret = ath12k_mhi_start(ab_pci);
if (ret) {
ath12k_err(ab, "failed to start mhi: %d\n", ret);
return ret;
}

if (ab->static_window_map)
ath12k_pci_select_static_window(ab_pci);

return 0;
}