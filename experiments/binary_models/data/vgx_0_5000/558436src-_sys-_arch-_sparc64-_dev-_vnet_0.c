void
vnet_ldc_reset(struct ldc_conn *lc)
{
struct vnet_softc *sc = lc->lc_sc;
int i;

timeout_del(&sc->sc_handshake_to);
sc->sc_tx_prod = sc->sc_tx_cons = 0;
sc->sc_peer_state = VIO_DP_STOPPED;
sc->sc_vio_state = 0;
vnet_link_state(sc);

sc->sc_lm->lm_next = 1;
sc->sc_lm->lm_count = 1;
for (i = 1; i < sc->sc_lm->lm_nentries; i++)
sc->sc_lm->lm_slot[i].entry = 0;

for (i = 0; i < sc->sc_vd->vd_nentries; i++) {
if (sc->sc_vsd[i].vsd_buf) {
pool_put(&sc->sc_pool, sc->sc_vsd[i].vsd_buf);
sc->sc_vsd[i].vsd_buf = NULL;
}
sc->sc_vd->vd_desc[i].hdr.dstate = VIO_DESC_FREE;
}
}