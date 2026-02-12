int
ufshci_reset(struct ufshci_softc *sc)
{
int i;
int retry = 10;
uint32_t hce;


UFSHCI_WRITE_4(sc, UFSHCI_REG_HCE, UFSHCI_REG_HCE_HCE);

for (i = 0; i < retry; i++) {
hce = UFSHCI_READ_4(sc, UFSHCI_REG_HCE);
if (hce == 1)
break;
delay(1);
}
if (i == retry) {
printf("%s: Enabling Host Controller failed!\n",
sc->sc_dev.dv_xname);
return -1;
}

DPRINTF("\n%s: Host Controller enabled (i=%d)\n", __func__, i);

return 0;
}