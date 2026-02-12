}
EXPORT_SYMBOL(atm_charge);

struct sk_buff *atm_alloc_charge(struct atm_vcc *vcc, int pdu_size,
gfp_t gfp_flags)
{
struct sock *sk = sk_atm(vcc);
int guess = SKB_TRUESIZE(pdu_size);

atm_force_charge(vcc, guess);
if (atomic_read(&sk->sk_rmem_alloc) <= sk->sk_rcvbuf) {
struct sk_buff *skb = alloc_skb(pdu_size, gfp_flags);

if (skb) {
atomic_add(skb->truesize-guess,
&sk->sk_rmem_alloc);
return skb;
}
}
atm_return(vcc, guess);
atomic_inc(&vcc->stats->rx_drop);
return NULL;
}