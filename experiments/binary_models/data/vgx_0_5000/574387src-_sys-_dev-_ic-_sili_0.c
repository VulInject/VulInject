struct sili_ccb *
sili_get_ccb(struct sili_port *sp)
{
struct sili_ccb			*ccb;


if (sp->sp_pmp_error_recovery != 0) {
return (NULL);
}

mtx_enter(&sp->sp_free_ccb_mtx);
ccb = TAILQ_FIRST(&sp->sp_free_ccbs);
if (ccb != NULL) {
KASSERT(ccb->ccb_xa.state == ATA_S_PUT);
TAILQ_REMOVE(&sp->sp_free_ccbs, ccb, ccb_entry);
ccb->ccb_xa.state = ATA_S_SETUP;
}
mtx_leave(&sp->sp_free_ccb_mtx);

return (ccb);
}