void
aic_isapnp_attach(struct device *parent, struct device *self, void *aux)
{
struct aic_softc *sc = (void *)self;
struct isa_attach_args *ia = aux;

AIC_TRACE(("aic: aic_isapnp_attach\n"));

sc->sc_iot = ia->ia_iot;
sc->sc_ioh = ia->ia_ioh;
sc->sc_irq = ia->ia_irq;
sc->sc_drq = ia->ia_drq;

AIC_TRACE(("aic: aic_isapnp_attach isa_intr_establish(...)\n"));
sc->sc_ih = isa_intr_establish(ia->ia_ic, ia->ia_irq, IST_EDGE,
IPL_BIO, aicintr, sc, sc->sc_dev.dv_xname);
AIC_TRACE(("aic: aic_isapnp_attach aicattach(0x%08x, 0x%08x, %d, %d)\n",
sc->sc_iot, sc->sc_ioh, sc->sc_irq, sc->sc_drq));
aicattach(sc);
}