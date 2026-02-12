bus_space_tag_t
pyro_alloc_bus_tag(struct pyro_pbm *pbm, const char *name, int ss,
int asi, int sasi)
{
struct pyro_softc *sc = pbm->pp_sc;
struct sparc_bus_space_tag *bt;

bt = malloc(sizeof(*bt), M_DEVBUF, M_NOWAIT | M_ZERO);
if (bt == NULL)
panic("pyro: could not allocate bus tag");

snprintf(bt->name, sizeof(bt->name), "%s-pbm_%s(%d/%2.2x)",
sc->sc_dv.dv_xname, name, ss, asi);

bt->cookie = pbm;
bt->parent = sc->sc_bust;
bt->default_type = ss;
bt->asi = asi;
bt->sasi = sasi;
bt->sparc_bus_map = pyro_bus_map;
bt->sparc_bus_mmap = pyro_bus_mmap;
bt->sparc_intr_establish = pyro_intr_establish;
bt->sparc_intr_establish_cpu = pyro_intr_establish_cpu;
return (bt);
}