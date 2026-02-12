int
arcofi_start_input(void *v, void *rbuf, int rsz, void (*cb)(void *),
void *cbarg)
{
struct arcofi_softc *sc = (struct arcofi_softc *)v;

printf("%s: start_input, mode %d\n",
sc->sc_dev.dv_xname, sc->sc_mode);


if (sc->sc_mode == 0)
arcofi_write(sc, ARCOFI_CSR,
arcofi_read(sc, ARCOFI_CSR) | CSR_DATA_FIFO_ENABLE);
sc->sc_mode |= AUMODE_RECORD;

sc->sc_recv.buf = (uint8_t *)rbuf;
sc->sc_recv.past = (uint8_t *)rbuf + rsz;
sc->sc_recv.cb = cb;
sc->sc_recv.cbarg = cbarg;


arcofi_write(sc, ARCOFI_FIFO_IR, arcofi_read(sc, ARCOFI_FIFO_IR) |
FIFO_IR_ENABLE(FIFO_IR_IN_HALF_EMPTY));

return 0;
}