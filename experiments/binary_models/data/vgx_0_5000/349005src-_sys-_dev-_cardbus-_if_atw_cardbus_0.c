int
atw_cardbus_enable(struct atw_softc *sc)
{
struct atw_cardbus_softc *csc = (void *) sc;
cardbus_devfunc_t ct = csc->sc_ct;
cardbus_chipset_tag_t cc = ct->ct_cc;
cardbus_function_tag_t cf = ct->ct_cf;


Cardbus_function_enable(ct);


atw_cardbus_setup(csc);


csc->sc_ih = cardbus_intr_establish(cc, cf, csc->sc_intrline, IPL_NET,
atw_intr, sc, sc->sc_dev.dv_xname);
if (csc->sc_ih == NULL) {
printf("%s: unable to establish interrupt at %d\n",
sc->sc_dev.dv_xname, csc->sc_intrline);
Cardbus_function_disable(csc->sc_ct);
return (1);
}

return (0);
}