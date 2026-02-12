static void
qede_lro_cont(qede_rx_ring_t *rx_ring,
struct eth_fast_path_rx_tpa_cont_cqe *cqe)
{
qede_lro_info_t *lro_info;
int i;

lro_info = &rx_ring->lro_info[cqe->tpa_agg_index];


if (agg_print) {
qede_dump_cont_lro_cqe(cqe);
}

for (i = 0; i < ETH_TPA_CQE_CONT_LEN_LIST_SIZE; i++) {
if (cqe->len_list[i] == 0) {
break;
}
qede_get_next_lro_buffer(rx_ring, lro_info);
}
}