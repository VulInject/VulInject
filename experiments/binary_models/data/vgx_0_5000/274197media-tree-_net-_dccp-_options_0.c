static int dccp_insert_option_ackvec(struct sock *sk, struct sk_buff *skb)
{
struct dccp_sock *dp = dccp_sk(sk);
struct dccp_ackvec *av = dp->dccps_hc_rx_ackvec;
struct dccp_skb_cb *dcb = DCCP_SKB_CB(skb);
const u16 buflen = dccp_ackvec_buflen(av);

const u8 nr_opts = DIV_ROUND_UP(buflen, DCCP_SINGLE_OPT_MAXLEN);
u16 len = buflen + 2 * nr_opts;
u8 i, nonce = 0;
const unsigned char *tail, *from;
unsigned char *to;

if (dcb->dccpd_opt_len + len > DCCP_MAX_OPT_LEN) {
DCCP_WARN("Lacking space for %u bytes on %s packet\n", len,
dccp_packet_name(dcb->dccpd_type));
return -1;
}

if (len > DCCPAV_MIN_OPTLEN &&
len + dcb->dccpd_opt_len + skb->len > dp->dccps_mss_cache) {
DCCP_WARN("No space left for Ack Vector (%u) on skb (%u+%u), "
"MPS=%u ==> reduce payload size?\n", len, skb->len,
dcb->dccpd_opt_len, dp->dccps_mss_cache);
dp->dccps_sync_scheduled = 1;
return 0;
}
dcb->dccpd_opt_len += len;

to   = skb_push(skb, len);
len  = buflen;
from = av->av_buf + av->av_buf_head;
tail = av->av_buf + DCCPAV_MAX_ACKVEC_LEN;

for (i = 0; i < nr_opts; ++i) {
int copylen = len;

if (len > DCCP_SINGLE_OPT_MAXLEN)
copylen = DCCP_SINGLE_OPT_MAXLEN;


nonce ^= av->av_buf_nonce[i];

*to++ = DCCPO_ACK_VECTOR_0 + av->av_buf_nonce[i];
*to++ = copylen + 2;


if (from + copylen > tail) {
const u16 tailsize = tail - from;

memcpy(to, from, tailsize);
to	+= tailsize;
len	-= tailsize;
copylen	-= tailsize;
from	= av->av_buf;
}

memcpy(to, from, copylen);
from += copylen;
to   += copylen;
len  -= copylen;
}

if (dccp_ackvec_update_records(av, dcb->dccpd_seq, nonce))
return -ENOBUFS;
return 0;
}