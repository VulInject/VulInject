static void fdt_fixup_liodn_tbl(void *blob, struct liodn_id_table *tbl, int sz)
{
int i;

for (i = 0; i < sz; i++) {
int off;

if (tbl[i].compat == NULL)
continue;

off = fdt_node_offset_by_compat_reg(blob,
tbl[i].compat, tbl[i].compat_offset);
if (off >= 0) {
off = fdt_setprop(blob, off, "fsl,liodn",
&tbl[i].id[0],
sizeof(u32) * tbl[i].num_ids);
if (off > 0)
printf("WARNING unable to set fsl,liodn for "
"%s: %s\n",
tbl[i].compat, fdt_strerror(off));
} else {
debug("WARNING: could not set fsl,liodn for %s: %s.\n",
tbl[i].compat, fdt_strerror(off));
}
}
}