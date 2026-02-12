int
nep_mii_readreg(struct device *self, int phy, int reg)
{
struct nep_softc *sc = (struct nep_softc *)self;
uint64_t frame;
int n;

frame = MIF_FRAME_READ;
frame |= (reg << MIF_FRAME_REG_SHIFT) | (phy << MIF_FRAME_PHY_SHIFT);
nep_write(sc, MIF_FRAME_OUTPUT, frame);
for (n = 0; n < 1000; n++) {
delay(10);
frame = nep_read(sc, MIF_FRAME_OUTPUT);
if (frame & MIF_FRAME_TA0)
return (frame & MIF_FRAME_DATA);
}

printf("%s: %s timeout\n", sc->sc_dev.dv_xname, __func__);
return (0);
}