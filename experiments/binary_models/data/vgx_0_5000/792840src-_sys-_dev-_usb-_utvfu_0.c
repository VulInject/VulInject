usbd_status
utvfu_vs_alloc_isoc(struct utvfu_softc *sc)
{
int size, i;
void *buf;

DPRINTF(1, "%s: %s\n", DEVNAME(sc), __func__);

for (i = 0; i < UTVFU_ISOC_TRANSFERS; i++) {
sc->sc_iface.ixfer[i].sc = sc;
sc->sc_iface.ixfer[i].xfer = usbd_alloc_xfer(sc->sc_udev);	
if (sc->sc_iface.ixfer[i].xfer == NULL) {
printf("%s: could not allocate isoc VS xfer!\n",
DEVNAME(sc));
return (USBD_NOMEM);	
}

size = sc->sc_iface.psize * sc->sc_nframes;

buf = usbd_alloc_buffer(sc->sc_iface.ixfer[i].xfer, size);
if (buf == NULL) {
printf("%s: could not allocate isoc VS buffer!\n",
DEVNAME(sc));
return (USBD_NOMEM);
}
DPRINTF(1, "%s: allocated %d bytes isoc VS xfer buffer\n",
DEVNAME(sc), size);
}

return (USBD_NORMAL_COMPLETION);
}