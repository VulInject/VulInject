static int tmio_mmc_start_data(struct tmio_mmc_host *host,
struct mmc_data *data)
{
struct tmio_mmc_data *pdata = host->pdata;

pr_debug("setup data transfer: blocksize %08x  nr_blocks %d\n",
data->blksz, data->blocks);


if (host->mmc->ios.bus_width == MMC_BUS_WIDTH_4 ||
host->mmc->ios.bus_width == MMC_BUS_WIDTH_8) {
int blksz_2bytes = pdata->flags & TMIO_MMC_BLKSZ_2BYTES;

if (data->blksz < 2 || (data->blksz < 4 && !blksz_2bytes)) {
pr_err("%s: %d byte block unsupported in 4/8 bit mode\n",
mmc_hostname(host->mmc), data->blksz);
return -EINVAL;
}
}

tmio_mmc_init_sg(host, data);
host->data = data;


sd_ctrl_write16(host, CTL_SD_XFER_LEN, data->blksz);
sd_ctrl_write16(host, CTL_XFER_BLK_COUNT, data->blocks);

tmio_mmc_start_dma(host, data);

return 0;
}