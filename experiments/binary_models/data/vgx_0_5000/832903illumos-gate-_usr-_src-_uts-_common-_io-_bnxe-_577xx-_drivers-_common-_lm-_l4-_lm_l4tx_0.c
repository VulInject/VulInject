static __inline void lm_tcp_tx_write_db(
lm_device_t *pdev,
lm_tcp_state_t *tcp,
u8_t post_end)
{
lm_tcp_con_t *tx_con = tcp->tx_con;



if (post_end || 
tx_con->db_more_bytes >= MAX_BYTES_PER_TX_DB ||
tx_con->db_more_bds >= MAX_BDS_PER_TX_DB) {
_lm_tcp_tx_write_db(pdev, tx_con, tcp->cid, tx_con->db_more_bytes, tx_con->db_more_bds, 0); 


DbgBreakIf(S64_SUB(tx_con->bytes_post_cnt + tx_con->db_more_bytes, tx_con->bytes_comp_cnt) < 0);
tx_con->bytes_post_cnt += tx_con->db_more_bytes;
tx_con->buffer_post_cnt += tx_con->db_more_bufs;
tx_con->db_more_bytes = tx_con->db_more_bds = tx_con->db_more_bufs = 0;       
tx_con->fp_db_cnt++;
} else {
DbgMessage(pdev, INFORMl4tx,
"skipped doorbell ringing for cid=%d\n", tcp->cid);
}   
}