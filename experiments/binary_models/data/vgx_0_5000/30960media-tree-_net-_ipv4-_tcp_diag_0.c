static void tcp_diag_get_info(struct sock *sk, struct inet_diag_msg *r,
void *_info)
{
struct tcp_info *info = _info;

if (sk_state_load(sk) == TCP_LISTEN) {
r->idiag_rqueue = sk->sk_ack_backlog;
r->idiag_wqueue = sk->sk_max_ack_backlog;
} else if (sk->sk_type == SOCK_STREAM) {
const struct tcp_sock *tp = tcp_sk(sk);

r->idiag_rqueue = max_t(int, tp->rcv_nxt - tp->copied_seq, 0);
r->idiag_wqueue = tp->write_seq - tp->snd_una;
}
if (info)
tcp_get_info(sk, info);
}