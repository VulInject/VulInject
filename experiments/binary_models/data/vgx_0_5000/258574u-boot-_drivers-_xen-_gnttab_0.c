void get_gnttab_base(phys_addr_t *gnttab_base, phys_size_t *gnttab_sz)
{
const void *blob = gd->fdt_blob;
struct fdt_resource res;
int mem;

mem = fdt_node_offset_by_compatible(blob, -1, "xen,xen");
if (mem < 0) {
printf("No xen,xen compatible found\n");
BUG();
}

mem = fdt_get_resource(blob, mem, "reg", 0, &res);
if (mem == -FDT_ERR_NOTFOUND) {
printf("No grant table base in the device tree\n");
BUG();
}

*gnttab_base = (phys_addr_t)res.start;
if (gnttab_sz)
*gnttab_sz = (phys_size_t)(res.end - res.start + 1);

debug("FDT suggests grant table base at %llx\n",
*gnttab_base);
}