int
lge_list_tx_init(struct lge_softc *sc)
{
struct lge_list_data	*ld;
struct lge_ring_data	*cd;
int			i;

cd = &sc->lge_cdata;
ld = sc->lge_ldata;
for (i = 0; i < LGE_TX_LIST_CNT; i++) {
ld->lge_tx_list[i].lge_mbuf = NULL;
ld->lge_tx_list[i].lge_ctl = 0;
}

cd->lge_tx_prod = cd->lge_tx_cons = 0;

return (0);
}