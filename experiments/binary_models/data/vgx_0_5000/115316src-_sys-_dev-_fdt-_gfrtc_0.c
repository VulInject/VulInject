void
gfrtc_attach(struct device *parent, struct device *self, void *aux)
{
struct fdt_attach_args *faa = aux;
struct gfrtc_softc *sc = (struct gfrtc_softc *) self;

sc->sc_iot = faa->fa_iot;

if (bus_space_map(sc->sc_iot, faa->fa_reg[0].addr,
faa->fa_reg[0].size, 0, &sc->sc_ioh)) {
printf(": failed to map mem space\n");
return;
}

sc->sc_todr.cookie = sc;
sc->sc_todr.todr_gettime = gfrtc_gettime;
sc->sc_todr.todr_settime = gfrtc_settime;
sc->sc_todr.todr_quality = 1000;
todr_attach(&sc->sc_todr);

printf("\n");
}