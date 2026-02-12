static void
mwl_txq_init(struct mwl_softc *sc, struct mwl_tx_ring *txring, int qnum)
{
struct mwl_txbuf *bf;
struct mwl_txdesc *ds;
int i;

txring->qnum = qnum;
txring->txpri = 0;	

bf = txring->buf;
ds = txring->desc;
for (i = 0; i < MWL_TX_RING_COUNT - 1; i++) {
bf++;
ds->pPhysNext = bf->bf_daddr;
ds++;
}
bf = txring->buf;
ds->pPhysNext = LE_32(bf->bf_daddr);
}