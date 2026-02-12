static void do_sendmsg_corked(int fd, struct msghdr *msg)
{
bool do_zerocopy = cfg_zerocopy;
int i, payload_len, extra_len;


payload_len = cfg_payload_len / cfg_cork;
extra_len = cfg_payload_len - (cfg_cork * payload_len);

do_setsockopt(fd, IPPROTO_UDP, UDP_CORK, 1);

for (i = 0; i < cfg_cork; i++) {


if (cfg_cork_mixed)
do_zerocopy = (i & 1);

msg->msg_iov[0].iov_len = payload_len + extra_len;
extra_len = 0;

do_sendmsg(fd, msg, do_zerocopy,
(cfg_dst_addr.ss_family == AF_INET ?
PF_INET : PF_INET6));
}

do_setsockopt(fd, IPPROTO_UDP, UDP_CORK, 0);
}