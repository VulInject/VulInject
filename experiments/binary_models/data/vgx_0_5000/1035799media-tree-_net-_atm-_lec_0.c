static void lec_arp_clear_vccs(struct lec_arp_table *entry)
{
if (entry->vcc) {
struct atm_vcc *vcc = entry->vcc;
struct lec_vcc_priv *vpriv = LEC_VCC_PRIV(vcc);
struct net_device *dev = (struct net_device *)vcc->proto_data;

vcc->pop = vpriv->old_pop;
if (vpriv->xoff)
netif_wake_queue(dev);
kfree(vpriv);
vcc->user_back = NULL;
vcc->push = entry->old_push;
vcc_release_async(vcc, -EPIPE);
entry->vcc = NULL;
}
if (entry->recv_vcc) {
entry->recv_vcc->push = entry->old_recv_push;
vcc_release_async(entry->recv_vcc, -EPIPE);
entry->recv_vcc = NULL;
}
}