void
ti_mem_read(struct ti_softc *sc, u_int32_t addr, u_int32_t len, void *buf)
{
int			segptr, segsize, cnt;
caddr_t			ptr;

segptr = addr;
cnt = len;
ptr = buf;

while(cnt) {
if (cnt < TI_WINLEN)
segsize = cnt;
else
segsize = TI_WINLEN - (segptr % TI_WINLEN);
CSR_WRITE_4(sc, TI_WINBASE, (segptr & ~(TI_WINLEN - 1)));
bus_space_read_region_4(sc->ti_btag, sc->ti_bhandle,
TI_WINDOW + (segptr & (TI_WINLEN - 1)), (u_int32_t *)ptr,
segsize / 4);
ptr += segsize;
segptr += segsize;
cnt -= segsize;
}
}