void
pcamux_attach(struct device *parent, struct device *self, void *aux)
{
struct pcamux_softc *sc = (struct pcamux_softc *)self;
struct i2c_attach_args *ia = aux;

sc->sc_tag = ia->ia_tag;
sc->sc_addr = ia->ia_addr;

sc->sc_channel = -1;	
rw_init(&sc->sc_lock, sc->sc_dev.dv_xname);

if (strcmp(ia->ia_name, "nxp,pca9546") == 0) {
sc->sc_switch = 1;
sc->sc_nchannel = 4;
} else if (strcmp(ia->ia_name, "nxp,pca9547") == 0 ||
strcmp(ia->ia_name, "NXP0002") == 0) {
sc->sc_enable = 1 << 3;
sc->sc_nchannel = 8;
} else if (strcmp(ia->ia_name, "nxp,pca9548") == 0) {
sc->sc_switch = 1;
sc->sc_nchannel = 8;
}

printf("\n");

if (strcmp(ia->ia_name, "NXP0002") == 0)
pcamux_attach_acpi(sc, ia);
else
pcamux_attach_fdt(sc, ia);
}