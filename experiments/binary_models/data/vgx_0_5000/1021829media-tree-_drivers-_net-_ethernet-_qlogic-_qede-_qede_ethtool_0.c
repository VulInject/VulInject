static void qede_get_strings_stats_txq(struct qede_dev *edev,
struct qede_tx_queue *txq, u8 **buf)
{
int i;

for (i = 0; i < QEDE_NUM_TQSTATS; i++) {
if (txq->is_xdp)
sprintf(*buf, "%d [XDP]: %s",
QEDE_TXQ_XDP_TO_IDX(edev, txq),
qede_tqstats_arr[i].string);
else
sprintf(*buf, "%d: %s", txq->index,
qede_tqstats_arr[i].string);
*buf += ETH_GSTRING_LEN;
}
}