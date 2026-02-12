static void pci_mcfg_apply_quirks(struct acpi_pci_root *root,
struct resource *cfgres,
const struct pci_ecam_ops **ecam_ops)
{
u16 segment = root->segment;
struct resource *bus_range = &root->secondary;
struct mcfg_fixup *f;
int i;

for (i = 0, f = mcfg_quirks; i < ARRAY_SIZE(mcfg_quirks); i++, f++) {
if (pci_mcfg_quirk_matches(f, segment, bus_range)) {
if (f->cfgres.start)
*cfgres = f->cfgres;
if (f->ops)
*ecam_ops =  f->ops;
dev_info(&root->device->dev, "MCFG quirk: ECAM at %pR for %pR with %ps\n",
cfgres, bus_range, *ecam_ops);
return;
}
}
}