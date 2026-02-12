static int pl011_dev_init(struct serial_chip *chip, const void *fdt, int offs,
const char *parms)
{
struct pl011_data *pd = container_of(chip, struct pl011_data, chip);
vaddr_t vbase;
paddr_t pbase;
size_t size;

if (parms && parms[0])
IMSG("pl011: device parameters ignored (%s)", parms);

if (dt_map_dev(fdt, offs, &vbase, &size, DT_MAP_AUTO) < 0)
return -1;

if (size != 0x1000) {
EMSG("pl011: unexpected register size: %zx", size);
return -1;
}

pbase = virt_to_phys((void *)vbase);
pl011_init(pd, pbase, 0, 0);

return 0;
}