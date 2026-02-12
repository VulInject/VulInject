}
EXPORT_SYMBOL(il_tx_queue_init);

void
il_tx_queue_reset(struct il_priv *il, u32 txq_id)
{
int slots, actual_slots;
struct il_tx_queue *txq = &il->txq[txq_id];

if (txq_id == il->cmd_queue) {
slots = TFD_CMD_SLOTS;
actual_slots = TFD_CMD_SLOTS + 1;
} else {
slots = TFD_TX_CMD_SLOTS;
actual_slots = TFD_TX_CMD_SLOTS;
}

memset(txq->meta, 0, sizeof(struct il_cmd_meta) * actual_slots);
txq->need_update = 0;


il_queue_init(il, &txq->q, slots, txq_id);


il->ops->txq_init(il, txq);
}