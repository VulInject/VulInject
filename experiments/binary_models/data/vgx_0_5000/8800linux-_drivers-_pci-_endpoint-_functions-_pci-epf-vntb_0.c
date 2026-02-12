static int epf_ntb_init_epc_bar(struct epf_ntb *ntb)
{
const struct pci_epc_features *epc_features;
enum pci_barno barno;
enum epf_ntb_bar bar;
struct device *dev;
u32 num_mws;
int i;

barno = BAR_0;
num_mws = ntb->num_mws;
dev = &ntb->epf->dev;
epc_features = pci_epc_get_features(ntb->epf->epc, ntb->epf->func_no, ntb->epf->vfunc_no);


for (bar = BAR_CONFIG; bar <= BAR_MW0; bar++, barno++) {
barno = pci_epc_get_next_free_bar(epc_features, barno);
if (barno < 0) {
dev_err(dev, "Fail to get NTB function BAR\n");
return barno;
}
ntb->epf_ntb_bar[bar] = barno;
}


for (bar = BAR_MW1, i = 1; i < num_mws; bar++, barno++, i++) {
barno = pci_epc_get_next_free_bar(epc_features, barno);
if (barno < 0) {
ntb->num_mws = i;
dev_dbg(dev, "BAR not available for > MW%d\n", i + 1);
}
ntb->epf_ntb_bar[bar] = barno;
}

return 0;
}