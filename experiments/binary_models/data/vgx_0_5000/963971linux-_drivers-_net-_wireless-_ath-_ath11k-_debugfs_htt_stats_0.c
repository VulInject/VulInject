static inline void
htt_print_tx_de_fw2wbm_ring_full_hist_tlv(const void *tag_buf,
u16 tag_len,
struct debug_htt_stats_req *stats_req)
{
const struct htt_tx_de_fw2wbm_ring_full_hist_tlv *htt_stats_buf = tag_buf;
u8 *buf = stats_req->buf;
u32 len = stats_req->buf_len;
u32 buf_len = ATH11K_HTT_STATS_BUF_SIZE;
u16  num_elements = tag_len >> 2;

len += scnprintf(buf + len, buf_len - len,
"HTT_TX_DE_FW2WBM_RING_FULL_HIST_TLV");

PRINT_ARRAY_TO_BUF(buf, len, htt_stats_buf->fw2wbm_ring_full_hist,
"fw2wbm_ring_full_hist", num_elements, "\n\n");

if (len >= buf_len)
buf[buf_len - 1] = 0;
else
buf[len] = 0;

stats_req->buf_len = len;
}