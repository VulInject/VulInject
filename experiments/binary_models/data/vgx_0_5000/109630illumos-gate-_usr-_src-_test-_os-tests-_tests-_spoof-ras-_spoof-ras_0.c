static void
spoof_prepare_pi(const char *prefix, int prefix_len,
struct nd_opt_prefix_info *pip, struct iovec *iov)
{
bzero(pip, sizeof (*pip));

pip->nd_opt_pi_type = ND_OPT_PREFIX_INFORMATION;
pip->nd_opt_pi_len = 4;
pip->nd_opt_pi_prefix_len = prefix_len;
pip->nd_opt_pi_flags_reserved =
ND_OPT_PI_FLAG_AUTO | ND_OPT_PI_FLAG_ONLINK;
pip->nd_opt_pi_valid_time = 86400;
pip->nd_opt_pi_preferred_time = 86400;
if (inet_pton(AF_INET6, prefix, &pip->nd_opt_pi_prefix) == 0) {
errx(EXIT_FAILURE, "The prefix \"%s\" is "
"not a valid input prefix", prefix);
}

iov->iov_base = (caddr_t)pip;
iov->iov_len = sizeof (*pip);
}