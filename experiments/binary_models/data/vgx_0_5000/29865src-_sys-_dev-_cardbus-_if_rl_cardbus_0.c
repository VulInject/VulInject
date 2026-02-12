int 
rl_cardbus_detach(struct device *self, int flags)
{
struct rl_cardbus_softc	*csc = (void *) self;
struct rl_softc		*sc = &csc->sc_rl;
struct cardbus_devfunc	*ct = csc->sc_ct;
int			rv;

if (ct == NULL)
panic("%s: data structure lacks", sc->sc_dev.dv_xname);
rv = rl_detach(sc);
if (rv)
return (rv);

if (sc->sc_ih != NULL)
cardbus_intr_disestablish(ct->ct_cc, ct->ct_cf, sc->sc_ih);


if (csc->sc_bar_reg != 0)
Cardbus_mapreg_unmap(ct, csc->sc_bar_reg,
sc->rl_btag, sc->rl_bhandle, csc->sc_mapsize);

return (0);
}