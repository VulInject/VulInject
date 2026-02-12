static void dequeue_isoc_urb(struct imx21 *imx21,
struct urb *urb, struct ep_priv *ep_priv)
{
struct urb_priv *urb_priv = urb->hcpriv;
struct td *td, *tmp;
int i;

if (urb_priv->active) {
for (i = 0; i < NUM_ISO_ETDS; i++) {
int etd_num = ep_priv->etd[i];
if (etd_num != -1 && imx21->etd[etd_num].urb == urb) {
struct etd_priv *etd = imx21->etd + etd_num;

reset_etd(imx21, etd_num);
free_dmem(imx21, etd);
}
}
}

list_for_each_entry_safe(td, tmp, &ep_priv->td_list, list) {
if (td->urb == urb) {
dev_vdbg(imx21->dev, "removing td %p\n", td);
list_del(&td->list);
}
}
}