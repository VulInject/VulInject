void *
mfi_get_ccb(void *cookie)
{
struct mfi_softc	*sc = cookie;
struct mfi_ccb		*ccb;

KERNEL_UNLOCK();

mtx_enter(&sc->sc_ccb_mtx);
ccb = SLIST_FIRST(&sc->sc_ccb_freeq);
if (ccb != NULL) {
SLIST_REMOVE_HEAD(&sc->sc_ccb_freeq, ccb_link);
ccb->ccb_state = MFI_CCB_READY;
}
mtx_leave(&sc->sc_ccb_mtx);

DNPRINTF(MFI_D_CCB, "%s: mfi_get_ccb: %p\n", DEVNAME(sc), ccb);
KERNEL_LOCK();

return (ccb);
}