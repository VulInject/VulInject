static int rvu_dbg_mcs_port_stats_display(struct seq_file *filp, void *unused, int dir)
{
struct mcs *mcs = filp->private;
struct mcs_port_stats stats;
int lmac;

seq_puts(filp, "\n port stats\n");
mutex_lock(&mcs->stats_lock);
for_each_set_bit(lmac, &mcs->hw->lmac_bmap, mcs->hw->lmac_cnt) {
mcs_get_port_stats(mcs, &stats, lmac, dir);
seq_printf(filp, "port%d: Tcam Miss: %lld\n", lmac, stats.tcam_miss_cnt);
seq_printf(filp, "port%d: Parser errors: %lld\n", lmac, stats.parser_err_cnt);

if (dir == MCS_RX && mcs->hw->mcs_blks > 1)
seq_printf(filp, "port%d: Preempt error: %lld\n", lmac,
stats.preempt_err_cnt);
if (dir == MCS_TX)
seq_printf(filp, "port%d: Sectag insert error: %lld\n", lmac,
stats.sectag_insert_err_cnt);
}
mutex_unlock(&mcs->stats_lock);
return 0;
}