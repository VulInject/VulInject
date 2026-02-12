static u16 sdhci_iproc_readw(struct sdhci_host *host, int reg)
{
struct sdhci_pltfm_host *pltfm_host = sdhci_priv(host);
struct sdhci_iproc_host *iproc_host = sdhci_pltfm_priv(pltfm_host);
u32 val;
u16 word;

if ((reg == SDHCI_TRANSFER_MODE) && iproc_host->is_cmd_shadowed) {

val = iproc_host->shadow_cmd;
} else if ((reg == SDHCI_BLOCK_SIZE || reg == SDHCI_BLOCK_COUNT) &&
iproc_host->is_blk_shadowed) {

val = iproc_host->shadow_blk;
} else {
val = sdhci_iproc_readl(host, (reg & ~3));
}
word = val >> REG_OFFSET_IN_BITS(reg) & 0xffff;
return word;
}