int netup_ci_slot_status(struct cx23885_dev *dev, u32 pci_status)
{
struct cx23885_tsport *port = NULL;
struct netup_ci_state *state = NULL;

ci_dbg_print("%s:\n", __func__);

if (0 == (pci_status & (PCI_MSK_GPIO0 | PCI_MSK_GPIO1)))
return 0;

if (pci_status & PCI_MSK_GPIO0) {
port = &dev->ts1;
state = port->port_priv;
schedule_work(&state->work);
ci_dbg_print("%s: Wakeup CI0\n", __func__);
}

if (pci_status & PCI_MSK_GPIO1) {
port = &dev->ts2;
state = port->port_priv;
schedule_work(&state->work);
ci_dbg_print("%s: Wakeup CI1\n", __func__);
}

return 1;
}