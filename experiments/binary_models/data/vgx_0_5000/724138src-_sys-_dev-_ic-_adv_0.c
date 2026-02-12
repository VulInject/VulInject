static int
adv_create_ccbs(ASC_SOFTC *sc, ADV_CCB *ccbstore, int count)
{
ADV_CCB        *ccb;
int             i, error;

for (i = 0; i < count; i++) {
ccb = &ccbstore[i];
if ((error = adv_init_ccb(sc, ccb)) != 0) {
printf("%s: unable to initialize ccb, error = %d\n",
sc->sc_dev.dv_xname, error);
return (i);
}
TAILQ_INSERT_TAIL(&sc->sc_free_ccb, ccb, chain);
}

return (i);
}