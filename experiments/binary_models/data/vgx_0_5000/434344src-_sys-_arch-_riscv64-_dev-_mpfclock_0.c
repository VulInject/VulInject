void
mpfclock_attach(struct device *parent, struct device *self, void *aux)
{
struct fdt_attach_args *faa = aux;
struct mpfclock_softc *sc = (struct mpfclock_softc *)self;

sc->sc_refclk = clock_get_frequency_idx(faa->fa_node, 0);
if (sc->sc_refclk == 0) {
printf(": can't get refclk frequency\n");
return;
}

sc->sc_iot = faa->fa_iot;
if (bus_space_map(sc->sc_iot, faa->fa_reg[0].addr,
faa->fa_reg[0].size, 0, &sc->sc_ioh) != 0) {
printf(": can't map registers\n");
return;
}

sc->sc_clkcfg = HREAD4(sc, CLOCK_CONFIG_CR);

printf(": %u MHz ref clock\n", (sc->sc_refclk + 500000) / 1000000);

sc->sc_cd.cd_node = faa->fa_node;
sc->sc_cd.cd_cookie = sc;
sc->sc_cd.cd_enable = mpfclock_enable;
sc->sc_cd.cd_get_frequency = mpfclock_get_frequency;
sc->sc_cd.cd_set_frequency = mpfclock_set_frequency;
clock_register(&sc->sc_cd);

mpfclock_sc = sc;
cpuresetfn = mpfclock_cpureset;
}