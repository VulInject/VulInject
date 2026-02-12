void
pwdog_attach(struct device *parent, struct device *self, void *aux)
{
struct pwdog_softc *pwdog = (struct pwdog_softc *)self;
struct pci_attach_args *pa = (struct pci_attach_args *)aux;
pcireg_t memtype;
bus_size_t iosize;

memtype = pci_mapreg_type(pa->pa_pc, pa->pa_tag, PCI_MAPREG_START);
if (pci_mapreg_map(pa, PCI_MAPREG_START, memtype, 0, &pwdog->iot,
&pwdog->ioh, NULL, &iosize, 0)) {
printf("\n%s: PCI %s region not found\n",
pwdog->pwdog_dev.dv_xname,
memtype == PCI_MAPREG_TYPE_IO ? "I/O" : "memory");
return;
}
printf("\n");
bus_space_write_1(pwdog->iot, pwdog->ioh, PWDOG_DISABLE, 0);
wdog_register(pwdog_set_timeout, pwdog);
}