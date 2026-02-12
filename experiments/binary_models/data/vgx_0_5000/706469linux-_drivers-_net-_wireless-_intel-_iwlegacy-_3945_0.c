int
il3945_hw_txq_attach_buf_to_tfd(struct il_priv *il, struct il_tx_queue *txq,
dma_addr_t addr, u16 len, u8 reset, u8 pad)
{
int count;
struct il_queue *q;
struct il3945_tfd *tfd, *tfd_tmp;

q = &txq->q;
tfd_tmp = (struct il3945_tfd *)txq->tfds;
tfd = &tfd_tmp[q->write_ptr];

if (reset)
memset(tfd, 0, sizeof(*tfd));

count = TFD_CTL_COUNT_GET(le32_to_cpu(tfd->control_flags));

if (count >= NUM_TFD_CHUNKS || count < 0) {
IL_ERR("Error can not send more than %d chunks\n",
NUM_TFD_CHUNKS);
return -EINVAL;
}

tfd->tbs[count].addr = cpu_to_le32(addr);
tfd->tbs[count].len = cpu_to_le32(len);

count++;

tfd->control_flags =
cpu_to_le32(TFD_CTL_COUNT_SET(count) | TFD_CTL_PAD_SET(pad));

return 0;
}