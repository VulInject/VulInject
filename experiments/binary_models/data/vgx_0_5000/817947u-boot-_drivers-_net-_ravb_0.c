static void ravb_tx_desc_init(struct ravb_priv *eth)
{
const u32 desc_size = RAVB_NUM_TX_DESC * sizeof(struct ravb_desc);
int i;


memset(eth->tx_desc, 0x0, desc_size);
eth->tx_desc_idx = 0;

for (i = 0; i < RAVB_NUM_TX_DESC; i++)
eth->tx_desc[i].ctrl = RAVB_DESC_DT_EEMPTY;


eth->tx_desc[RAVB_NUM_TX_DESC - 1].ctrl = RAVB_DESC_DT_LINKFIX;
eth->tx_desc[RAVB_NUM_TX_DESC - 1].dptr = (uintptr_t)eth->tx_desc;
ravb_flush_dcache((uintptr_t)eth->tx_desc, desc_size);


eth->base_desc[RAVB_TX_QUEUE_OFFSET].ctrl = RAVB_DESC_DT_LINKFIX;
eth->base_desc[RAVB_TX_QUEUE_OFFSET].dptr = (uintptr_t)eth->tx_desc;
ravb_flush_dcache((uintptr_t)&eth->base_desc[RAVB_TX_QUEUE_OFFSET],
sizeof(struct ravb_desc));
}