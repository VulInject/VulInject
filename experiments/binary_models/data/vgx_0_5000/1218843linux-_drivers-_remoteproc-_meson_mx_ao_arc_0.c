static void *meson_mx_ao_arc_rproc_da_to_va(struct rproc *rproc, u64 da,
size_t len, bool *is_iomem)
{
struct meson_mx_ao_arc_rproc_priv *priv = rproc->priv;


if ((da + len) > priv->sram_size)
return NULL;

return (void *)priv->sram_va + da;
}

static struct rproc_ops meson_mx_ao_arc_rproc_ops = {
.start		= meson_mx_ao_arc_rproc_start,
.stop		= meson_mx_ao_arc_rproc_stop,
.da_to_va	= meson_mx_ao_arc_rproc_da_to_va,
.get_boot_addr	= rproc_elf_get_boot_addr,
.load		= rproc_elf_load_segments,
.sanity_check	= rproc_elf_sanity_check,
};