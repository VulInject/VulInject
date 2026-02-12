static void sparx5_fdma_rx_add_dcb(struct sparx5_rx *rx,
struct sparx5_rx_dcb_hw *dcb,
u64 nextptr)
{
int idx = 0;


for (idx = 0; idx < FDMA_RX_DCB_MAX_DBS; ++idx) {
struct sparx5_db_hw *db = &dcb->db[idx];

db->status = FDMA_DCB_STATUS_INTR;
}
dcb->nextptr = FDMA_DCB_INVALID_DATA;
dcb->info = FDMA_DCB_INFO_DATAL(FDMA_XTR_BUFFER_SIZE);
rx->last_entry->nextptr = nextptr;
rx->last_entry = dcb;
}