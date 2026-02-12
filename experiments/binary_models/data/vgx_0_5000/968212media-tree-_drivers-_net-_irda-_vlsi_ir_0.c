static int vlsi_irda_suspend(struct pci_dev *pdev, pm_message_t state)
{
struct net_device *ndev = pci_get_drvdata(pdev);
vlsi_irda_dev_t *idev;

if (!ndev) {
net_err_ratelimited("%s - %s: no netdevice\n",
__func__, pci_name(pdev));
return 0;
}
idev = netdev_priv(ndev);
mutex_lock(&idev->mtx);
if (pdev->current_state != 0) {			
if (state.event > pdev->current_state) {	
pci_set_power_state(pdev, pci_choose_state(pdev, state));
pdev->current_state = state.event;
}
else
net_err_ratelimited("%s - %s: invalid suspend request %u -> %u\n",
__func__, pci_name(pdev),
pdev->current_state, state.event);
mutex_unlock(&idev->mtx);
return 0;
}

if (netif_running(ndev)) {
netif_device_detach(ndev);
vlsi_stop_hw(idev);
pci_save_state(pdev);
if (!idev->new_baud)

idev->new_baud = idev->baud;
}

pci_set_power_state(pdev, pci_choose_state(pdev, state));
pdev->current_state = state.event;
idev->resume_ok = 1;
mutex_unlock(&idev->mtx);
return 0;
}