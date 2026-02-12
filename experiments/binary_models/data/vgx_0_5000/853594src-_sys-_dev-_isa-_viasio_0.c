void
viasio_attach(struct device *parent, struct device *self, void *aux)
{
struct viasio_softc *sc = (void *)self;
struct isa_attach_args *ia = aux;
u_int8_t reg;


sc->sc_iot = ia->ia_iot;
if (bus_space_map(sc->sc_iot, ia->ipa_io[0].base,
VT1211_IOSIZE, 0, &sc->sc_ioh)) {
printf(": can't map i/o space\n");
return;
}


viasio_conf_enable(sc->sc_iot, sc->sc_ioh);


reg = viasio_conf_read(sc->sc_iot, sc->sc_ioh, VT1211_REV);
printf(": VT1211 rev 0x%02x", reg);


viasio_hm_init(sc);
viasio_wdg_init(sc);
printf("\n");


viasio_conf_disable(sc->sc_iot, sc->sc_ioh);
}