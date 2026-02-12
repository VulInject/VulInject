void
omdisplay_free_screen(void *v, void *cookie)
{
struct omdisplay_softc *sc = v;
struct rasops_info *ri = cookie;
struct omdisplay_screen *scr = ri->ri_hw;

LIST_REMOVE(scr, link);
sc->sc_nscreens--;
if (scr == sc->sc_active) {

sc->sc_active = NULL;

printf("lcd_free on active screen\n");

omdisplay_stop(sc);
}

if (scr->buf_va)
bus_dmamem_unmap(sc->sc_dma_tag, scr->buf_va, scr->map_size);

if (scr->nsegs > 0)
bus_dmamem_free(sc->sc_dma_tag, scr->segs, scr->nsegs);

free(scr, M_DEVBUF, 0);
}