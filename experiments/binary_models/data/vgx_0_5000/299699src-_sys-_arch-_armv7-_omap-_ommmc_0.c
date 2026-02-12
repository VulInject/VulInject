void
ommmc_write_data(struct ommmc_softc *sc, uint8_t *datap, int datalen)
{
while (datalen > 3) {
DPRINTF(3,("%08x\n", *(uint32_t *)datap));
HWRITE4(sc, MMCHS_DATA, *((uint32_t *)datap));
datap += 4;
datalen -= 4;
}
if (datalen > 0) {
uint32_t rv = *datap++;
if (datalen > 1)
rv |= *datap++ << 8;
if (datalen > 2)
rv |= *datap++ << 16;
DPRINTF(3,("rv %08x\n", rv));
HWRITE4(sc, MMCHS_DATA, rv);
}
}