int
kue_rx_list_init(struct kue_softc *sc)
{
struct kue_cdata	*cd;
struct kue_chain	*c;
int			i;

DPRINTFN(5,("%s: %s: enter\n", sc->kue_dev.dv_xname, __func__));

cd = &sc->kue_cdata;
for (i = 0; i < KUE_RX_LIST_CNT; i++) {
c = &cd->kue_rx_chain[i];
c->kue_sc = sc;
c->kue_idx = i;
if (kue_newbuf(sc, c, NULL) == ENOBUFS)
return (ENOBUFS);
if (c->kue_xfer == NULL) {
c->kue_xfer = usbd_alloc_xfer(sc->kue_udev);
if (c->kue_xfer == NULL)
return (ENOBUFS);
c->kue_buf = usbd_alloc_buffer(c->kue_xfer, KUE_BUFSZ);
if (c->kue_buf == NULL)
return (ENOBUFS); 
}
}

return (0);
}