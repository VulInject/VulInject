static int pr_manager_helper_write(PRManagerHelper *pr_mgr,
int fd,
const void *buf, int sz, Error **errp)
{
size_t nfds = (fd != -1);
while (sz > 0) {
struct iovec iov;
ssize_t n_written;

iov.iov_base = (void *)buf;
iov.iov_len = sz;
n_written = qio_channel_writev_full(QIO_CHANNEL(pr_mgr->ioc), &iov, 1,
nfds ? &fd : NULL, nfds, errp);

if (n_written <= 0) {
assert(n_written != QIO_CHANNEL_ERR_BLOCK);
object_unref(OBJECT(pr_mgr->ioc));
pr_mgr->ioc = NULL;
pr_manager_send_status_changed_event(pr_mgr);
return n_written < 0 ? -EINVAL : 0;
}

nfds = 0;
buf += n_written;
sz -= n_written;
}

return 0;
}