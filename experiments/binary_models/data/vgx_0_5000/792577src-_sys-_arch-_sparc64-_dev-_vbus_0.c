bus_space_tag_t
vbus_alloc_bus_tag(struct vbus_softc *sc, bus_space_tag_t parent)
{
struct sparc_bus_space_tag *bt;

bt = malloc(sizeof(*bt), M_DEVBUF, M_NOWAIT | M_ZERO);
if (bt == NULL)
panic("could not allocate vbus bus tag");

strlcpy(bt->name, sc->sc_dv.dv_xname, sizeof(bt->name));
bt->cookie = sc;
bt->parent = parent;
bt->asi = parent->asi;
bt->sasi = parent->sasi;
bt->sparc_bus_map = parent->sparc_bus_map;
bt->sparc_intr_establish = vbus_intr_establish;

return (bt);
}