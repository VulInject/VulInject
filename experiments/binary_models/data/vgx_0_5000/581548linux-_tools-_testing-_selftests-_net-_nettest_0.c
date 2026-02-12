static int tcp_md5sig(int sd, void *addr, socklen_t alen, struct sock_args *args)
{
int keylen = strlen(args->password);
struct tcp_md5sig md5sig = {};
int opt = TCP_MD5SIG;
int rc;

md5sig.tcpm_keylen = keylen;
memcpy(md5sig.tcpm_key, args->password, keylen);

if (args->prefix_len) {
opt = TCP_MD5SIG_EXT;
md5sig.tcpm_flags |= TCP_MD5SIG_FLAG_PREFIX;

md5sig.tcpm_prefixlen = args->prefix_len;
addr = &args->md5_prefix;
}
memcpy(&md5sig.tcpm_addr, addr, alen);

if ((args->ifindex && args->bind_key_ifindex >= 0) || args->bind_key_ifindex >= 1) {
opt = TCP_MD5SIG_EXT;
md5sig.tcpm_flags |= TCP_MD5SIG_FLAG_IFINDEX;

md5sig.tcpm_ifindex = args->ifindex;
log_msg("TCP_MD5SIG_FLAG_IFINDEX set tcpm_ifindex=%d\n", md5sig.tcpm_ifindex);
} else {
log_msg("TCP_MD5SIG_FLAG_IFINDEX off\n", md5sig.tcpm_ifindex);
}

rc = setsockopt(sd, IPPROTO_TCP, opt, &md5sig, sizeof(md5sig));
if (rc < 0) {

if (errno == ENOENT)
rc = 0;
else
log_err_errno("setsockopt(TCP_MD5SIG)");
}

return rc;
}