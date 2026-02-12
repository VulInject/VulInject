int atmel_sdhci_init(void *regbase, u32 id)
{
struct sdhci_host *host;
u32 max_clk, min_clk = ATMEL_SDHC_MIN_FREQ;

host = (struct sdhci_host *)calloc(1, sizeof(struct sdhci_host));
if (!host) {
printf("%s: sdhci_host calloc failed\n", __func__);
return -ENOMEM;
}

host->name = "atmel_sdhci";
host->ioaddr = regbase;
host->quirks = SDHCI_QUIRK_WAIT_SEND_CMD;
max_clk = at91_get_periph_generated_clk(id);
if (!max_clk) {
printf("%s: Failed to get the proper clock\n", __func__);
free(host);
return -ENODEV;
}
host->max_clk = max_clk;

add_sdhci(host, 0, min_clk);

return 0;
}