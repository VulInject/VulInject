static pci_ers_result_t zpci_event_notify_error_detected(struct pci_dev *pdev,
struct pci_driver *driver)
{
pci_ers_result_t ers_res = PCI_ERS_RESULT_DISCONNECT;

ers_res = driver->err_handler->error_detected(pdev,  pdev->error_state);
if (ers_result_indicates_abort(ers_res))
pr_info("%s: Automatic recovery failed after initial reporting\n", pci_name(pdev));
else if (ers_res == PCI_ERS_RESULT_NEED_RESET)
pr_debug("%s: Driver needs reset to recover\n", pci_name(pdev));

return ers_res;
}