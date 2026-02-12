static void sctp_diag_get_info(struct sock *sk, struct inet_diag_msg *r,
void *info)
{
struct sctp_infox *infox = (struct sctp_infox *)info;

if (infox->asoc) {
r->idiag_rqueue = atomic_read(&infox->asoc->rmem_alloc);
r->idiag_wqueue = infox->asoc->sndbuf_used;
} else {
r->idiag_rqueue = sk->sk_ack_backlog;
r->idiag_wqueue = sk->sk_max_ack_backlog;
}
if (infox->sctpinfo)
sctp_get_sctp_info(sk, infox->asoc, infox->sctpinfo);
}