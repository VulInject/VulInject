static void *__eeh_pe_state_clear(void *data, void *flag)
{
struct eeh_pe *pe = (struct eeh_pe *)data;
int state = *((int *)flag);
struct eeh_dev *edev, *tmp;
struct pci_dev *pdev;


if (pe->state & EEH_PE_REMOVED)
return NULL;

pe->state &= ~state;


if (!(state & EEH_PE_ISOLATED))
return NULL;

pe->check_count = 0;
eeh_pe_for_each_dev(pe, edev, tmp) {
pdev = eeh_dev_to_pci_dev(edev);
if (!pdev)
continue;

pdev->error_state = pci_channel_io_normal;
}


if (pe->state & EEH_PE_CFG_RESTRICTED)
pe->state &= ~EEH_PE_CFG_BLOCKED;

return NULL;
}