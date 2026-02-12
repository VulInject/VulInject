struct nfc_llc *nfc_llc_allocate(const char *name, struct nfc_hci_dev *hdev,
xmit_to_drv_t xmit_to_drv,
rcv_to_hci_t rcv_to_hci, int tx_headroom,
int tx_tailroom, llc_failure_t llc_failure)
{
struct nfc_llc_engine *llc_engine;
struct nfc_llc *llc;

llc_engine = nfc_llc_name_to_engine(name);
if (llc_engine == NULL)
return NULL;

llc = kzalloc(sizeof(struct nfc_llc), GFP_KERNEL);
if (llc == NULL)
return NULL;

llc->data = llc_engine->ops->init(hdev, xmit_to_drv, rcv_to_hci,
tx_headroom, tx_tailroom,
&llc->rx_headroom, &llc->rx_tailroom,
llc_failure);
if (llc->data == NULL) {
kfree(llc);
return NULL;
}
llc->ops = llc_engine->ops;

return llc;
}