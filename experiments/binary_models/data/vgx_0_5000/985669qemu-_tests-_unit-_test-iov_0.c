static void iov_random(struct iovec **iovp, unsigned *iov_cntp)
{
unsigned niov = g_test_rand_int_range(3,8);
struct iovec *iov = g_malloc(niov * sizeof(*iov));
unsigned i;
for (i = 0; i < niov; ++i) {
iov[i].iov_len = g_test_rand_int_range(5,20);
iov[i].iov_base = g_malloc(iov[i].iov_len);
}
*iovp = iov;
*iov_cntp = niov;
}