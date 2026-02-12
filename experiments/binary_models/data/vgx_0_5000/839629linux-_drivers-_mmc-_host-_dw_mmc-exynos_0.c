static int dw_mci_exynos_execute_tuning(struct dw_mci_slot *slot, u32 opcode)
{
struct dw_mci *host = slot->host;
struct dw_mci_exynos_priv_data *priv = host->priv;
struct mmc_host *mmc = slot->mmc;
u8 start_smpl, smpl, candidates = 0;
s8 found;
int ret = 0;

start_smpl = dw_mci_exynos_get_clksmpl(host);

do {
mci_writel(host, TMOUT, ~0);
smpl = dw_mci_exynos_move_next_clksmpl(host);

if (!mmc_send_tuning(mmc, opcode, NULL))
candidates |= (1 << smpl);

} while (start_smpl != smpl);

found = dw_mci_exynos_get_best_clksmpl(candidates);
if (found >= 0) {
dw_mci_exynos_set_clksmpl(host, found);
priv->tuned_sample = found;
} else {
ret = -EIO;
dev_warn(&mmc->class_dev,
"There is no candidates value about clksmpl!\n");
}

return ret;
}