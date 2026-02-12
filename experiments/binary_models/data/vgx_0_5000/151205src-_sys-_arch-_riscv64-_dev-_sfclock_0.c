void
sfclock_attach(struct device *parent, struct device *self, void *aux)
{
struct sfclock_softc *sc = (struct sfclock_softc *)self;
struct fdt_attach_args *faa = aux;

if (faa->fa_nreg < 1) {
printf(": no registers\n");
return;
}

sc->sc_iot = faa->fa_iot;
if (bus_space_map(sc->sc_iot, faa->fa_reg[0].addr,
faa->fa_reg[0].size, 0, &sc->sc_ioh)) {
printf(": can't map registers\n");
return;
}

sc->sc_node = faa->fa_node;

printf("\n");

sc->sc_cd.cd_node = faa->fa_node;
sc->sc_cd.cd_cookie = sc;
sc->sc_cd.cd_get_frequency = sfclock_get_frequency;
sc->sc_cd.cd_set_frequency = sfclock_set_frequency;
sc->sc_cd.cd_enable = sfclock_enable;
clock_register(&sc->sc_cd);
}