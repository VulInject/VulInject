struct dcd_pkt *
dcd_resalloc(struct dcd_address *ap, int cmdlen, int statuslen,
ataopaque_t dmatoken, int (*callback)())
{

register struct dcd_pkt *pkt;
register dcd_hba_tran_t	*tranp = ap->a_hba_tran;
register int		(*func)(caddr_t);


func = (callback == SLEEP_FUNC) ? SLEEP_FUNC: NULL_FUNC;
pkt = (*tranp->tran_init_pkt) (ap, NULL, (struct buf *)dmatoken,
cmdlen, statuslen, 0, 0, func, NULL);

if (pkt == NULL) {
if (callback != NULL_FUNC && callback != SLEEP_FUNC) {
ddi_set_callback(callback, NULL, &dcd_callback_id);
}
}
return (pkt);
}