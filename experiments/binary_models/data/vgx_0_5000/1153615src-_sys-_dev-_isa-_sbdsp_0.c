int
sbdsp_reset(struct sbdsp_softc *sc)
{
bus_space_tag_t iot = sc->sc_iot;
bus_space_handle_t ioh = sc->sc_ioh;

sc->sc_intr8 = 0;
sc->sc_intr16 = 0;
if (sc->sc_i.run != SB_NOTRUNNING) {
isa_dmaabort(sc->sc_isa, sc->sc_i.dmachan);
sc->sc_i.run = SB_NOTRUNNING;
}
if (sc->sc_o.run != SB_NOTRUNNING) {
isa_dmaabort(sc->sc_isa, sc->sc_o.dmachan);
sc->sc_o.run = SB_NOTRUNNING;
}


bus_space_write_1(iot, ioh, SBP_DSP_RESET, 1);
delay(10);
bus_space_write_1(iot, ioh, SBP_DSP_RESET, 0);
delay(30);
if (sbdsp_rdsp(sc) != SB_MAGIC)
return -1;

return 0;
}