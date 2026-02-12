static int xhci_pci_setup(struct usb_hcd *hcd)
{
struct xhci_hcd		*xhci;
struct pci_dev		*pdev = to_pci_dev(hcd->self.controller);
int			retval;

xhci = hcd_to_xhci(hcd);
if (!xhci->sbrn)
pci_read_config_byte(pdev, XHCI_SBRN_OFFSET, &xhci->sbrn);

retval = xhci_gen_setup(hcd, xhci_pci_quirks);
if (retval)
return retval;

if (!usb_hcd_is_primary_hcd(hcd))
return 0;

xhci_dbg(xhci, "Got SBRN %u\n", (unsigned int) xhci->sbrn);


return xhci_pci_reinit(xhci, pdev);
}