static void
zs_attach_sbus(struct device *parent, struct device *self, void *aux)
{
struct zsc_softc *zsc = (void *) self;
struct sbus_attach_args *sa = aux;
struct zsdevice *zsaddr;
bus_space_handle_t kvaddr;

if (sa->sa_nintr == 0) {
printf(" no interrupt lines\n");
return;
}


if (sa->sa_npromvaddrs) {

zsaddr = (struct zsdevice *)
(unsigned long int)sa->sa_promvaddrs[0];
} else {
if (sbus_bus_map(sa->sa_bustag, sa->sa_slot, sa->sa_offset,
sa->sa_size, BUS_SPACE_MAP_LINEAR, 0, &kvaddr) != 0) {
printf("%s @ sbus: cannot map registers\n",
self->dv_xname);
return;
}
zsaddr = (struct zsdevice *)
bus_space_vaddr(sa->sa_bustag, kvaddr);
}

zsc->zsc_bustag = sa->sa_bustag;
zsc->zsc_dmatag = sa->sa_dmatag;
zsc->zsc_promunit = getpropint(sa->sa_node, "slave", -2);
zsc->zsc_node = sa->sa_node;

zs_attach(zsc, zsaddr, sa->sa_pri);
}