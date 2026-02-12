int renesas_sdhi_get_b_max(struct udevice *dev, void *dst, lbaint_t blkcnt)
{
struct tmio_sd_priv *priv = dev_get_priv(dev);
struct mmc_uclass_priv *upriv = dev_get_uclass_priv(dev);
struct mmc *mmc = upriv->mmc;
size_t len = blkcnt * mmc->read_bl_len;
size_t len_align = roundup(len, RENESAS_SDHI_DMA_ALIGNMENT);

if (renesas_sdhi_addr_aligned_gen((uintptr_t)dst, len, len_align)) {
if (priv->quirks & TMIO_SD_CAP_16BIT)
return U16_MAX;
else
return U32_MAX;
} else {
return (CONFIG_SYS_MALLOC_LEN / 4) / mmc->read_bl_len;
}
}

static const struct dm_mmc_ops renesas_sdhi_ops = {
.send_cmd = renesas_sdhi_send_cmd,
.set_ios = renesas_sdhi_set_ios,
.get_cd = tmio_sd_get_cd,
CONFIG_IS_ENABLED(MMC_HS200_SUPPORT) || \
CONFIG_IS_ENABLED(MMC_HS400_SUPPORT)
.execute_tuning = renesas_sdhi_execute_tuning,
.wait_dat0 = renesas_sdhi_wait_dat0,
.get_b_max = renesas_sdhi_get_b_max,
};