static __inline void _lm_tcp_tx_write_db(
lm_device_t  * pdev,
lm_tcp_con_t * tx_con,
u32_t cid,
u32_t nbytes,
u16_t nbds,
u8_t fin)
{
volatile struct toe_tx_db_data *db_data = tx_con->db_data.tx;

db_data->bds_prod += nbds;       
DbgBreakIf((db_data->bds_prod & 0xff) == 0);
db_data->bytes_prod_seq += nbytes;        

if(fin) {
DbgBreakIf(db_data->flags & (TOE_TX_DB_DATA_FIN << TOE_TX_DB_DATA_FIN_SHIFT));
db_data->flags |= (TOE_TX_DB_DATA_FIN << TOE_TX_DB_DATA_FIN_SHIFT);
}

if (!(tx_con->flags & TCP_TX_DB_BLOCKED)) {
DbgMessage(pdev, INFORMl4tx,
"ringing tx doorbell: cid=%d, (nbytes+=%d, nbds+=%d, fin=%d)\n", 
cid, nbytes, nbds, fin);
TOE_TX_DOORBELL(pdev, cid);    
}
}