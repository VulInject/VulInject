void
rs5c313_landisk_attach(struct device *parent, struct device *self, void *aux)
{
struct rs5c313_softc *sc = (void *)self;

printf(": RS5C313 real time clock\n");

if (rs5c313_init(sc) != 0) {
printf("%s: init failed\n", self->dv_xname);
return;
}

rs5c313_ops._cookie = sc;
sh_clock_init(SH_CLOCK_NORTC, &rs5c313_ops);
}