static void test_tcp_dtime(struct test_tc_dtime *skel, int family, bool bpf_fwd)
{
__u32 *dtimes, *errs;
const char *addr;
int i, t;

if (family == AF_INET) {
t = bpf_fwd ? TCP_IP4 : TCP_IP4_RT_FWD;
addr = IP4_DST;
} else {
t = bpf_fwd ? TCP_IP6 : TCP_IP6_RT_FWD;
addr = IP6_DST;
}

dtimes = skel->bss->dtimes[t];
errs = skel->bss->errs[t];

skel->bss->test = t;
test_inet_dtime(family, SOCK_STREAM, addr, 50000 + t);


ASSERT_EQ(dtimes[INGRESS_FWDNS_P100], 0,
dtime_cnt_str(t, INGRESS_FWDNS_P100));
for (i = INGRESS_FWDNS_P101; i < SET_DTIME; i++)
ASSERT_GT(dtimes[i], 0, dtime_cnt_str(t, i));

for (i = INGRESS_FWDNS_P100; i < __MAX_CNT; i++)
ASSERT_EQ(errs[i], 0, dtime_err_str(t, i));
}