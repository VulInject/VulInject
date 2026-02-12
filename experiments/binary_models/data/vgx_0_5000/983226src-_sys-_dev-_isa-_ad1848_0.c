int
ad1848_halt_output(void *addr)
{
struct ad1848_softc *sc = addr;
u_char reg;

DPRINTF(("ad1848: ad1848_halt_output\n"));
mtx_enter(&audio_lock);
reg = ad_read(sc, SP_INTERFACE_CONFIG);
ad_write(sc, SP_INTERFACE_CONFIG, (reg & ~PLAYBACK_ENABLE));

if (sc->sc_playrun == 1) {
isa_dmaabort(sc->sc_isa, sc->sc_drq);
sc->sc_playrun = 0;
}
mtx_leave(&audio_lock);
return 0;
}