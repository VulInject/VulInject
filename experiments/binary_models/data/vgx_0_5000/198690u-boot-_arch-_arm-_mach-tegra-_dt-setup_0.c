void ft_carveout_setup(void *fdt, const char * const *nodes, unsigned int count)
{
const void *cboot_fdt = (const void *)cboot_boot_x0;
unsigned int i;
int err;

for (i = 0; i < count; i++) {
printf("copying carveout for %s...\n", nodes[i]);

err = ft_copy_carveout(fdt, cboot_fdt, nodes[i]);
if (err < 0) {
if (err != -FDT_ERR_NOTFOUND)
printf("failed to copy carveout for %s: %d\n",
nodes[i], err);

continue;
}
}
}