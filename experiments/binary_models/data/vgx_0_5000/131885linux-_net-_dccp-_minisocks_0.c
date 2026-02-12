void dccp_time_wait(struct sock *sk, int state, int timeo)
{
struct inet_timewait_sock *tw;

tw = inet_twsk_alloc(sk, &dccp_death_row, state);

if (tw != NULL) {
const struct inet_connection_sock *icsk = inet_csk(sk);
const int rto = (icsk->icsk_rto << 2) - (icsk->icsk_rto >> 1);
if (tw->tw_family == PF_INET6) {
tw->tw_v6_daddr = sk->sk_v6_daddr;
tw->tw_v6_rcv_saddr = sk->sk_v6_rcv_saddr;
tw->tw_ipv6only = sk->sk_ipv6only;
}


if (timeo < rto)
timeo = rto;

if (state == DCCP_TIME_WAIT)
timeo = DCCP_TIMEWAIT_LEN;


local_bh_disable();
inet_twsk_schedule(tw, timeo);

inet_twsk_hashdance(tw, sk, &dccp_hashinfo);
local_bh_enable();
} else {

DCCP_WARN("time wait bucket table overflow\n");
}

dccp_done(sk);
}