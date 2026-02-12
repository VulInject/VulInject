u32_t lm_tcp_rx_peninsula_to_rq(lm_device_t * pdev, lm_tcp_state_t * tcp, u32_t max_num_bytes_to_copy, u8_t sb_idx)
{
lm_tcp_buffer_t          * curr_tcp_buf;
lm_tcp_con_rx_gen_info_t * gen_info;
d_list_t                   return_list;
u32_t                      copied_bytes = 0, currently_copied = 0;

DbgMessage(pdev, VERBOSEl4rx, "###lm_tcp_rx_peninsula_to_rq cid=%d\n", tcp->cid);

gen_info     = &tcp->rx_con->u.rx.gen_info;

DbgBreakIf(gen_info->peninsula_blocked == TRUE); 


d_list_init(&return_list, NULL, NULL, 0);

curr_tcp_buf = lm_tcp_next_entry_dpc_active_list(tcp->rx_con);




while (max_num_bytes_to_copy && gen_info->dpc_peninsula_nbytes  && curr_tcp_buf) {
currently_copied = lm_tcp_rx_peninsula_to_rq_copy(pdev, tcp, curr_tcp_buf, &return_list, max_num_bytes_to_copy, TRUE);
curr_tcp_buf = (lm_tcp_buffer_t *)s_list_next_entry(&curr_tcp_buf->link);
DbgBreakIf(max_num_bytes_to_copy < currently_copied);
max_num_bytes_to_copy -= currently_copied;
copied_bytes += currently_copied;
}

if (!d_list_is_empty(&return_list)) {

lm_tcp_return_list_of_gen_bufs(pdev,tcp , &return_list,
(sb_idx != NON_EXISTENT_SB_IDX) ? MM_TCP_RGB_COLLECT_GEN_BUFS : 0, sb_idx);
}



tcp->rx_con->bytes_comp_cnt += copied_bytes;

lm_tcp_complete_nbytes(pdev, tcp, tcp->rx_con, copied_bytes,  0);

DbgMessage(pdev, VERBOSEl4rx, "lm_tcp_rx_peninsula_to_rq copied %d bytes cid=%d\n", copied_bytes, tcp->cid);
return copied_bytes;
}