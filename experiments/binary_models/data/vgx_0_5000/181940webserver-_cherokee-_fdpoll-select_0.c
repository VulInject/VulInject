_watch (cherokee_fdpoll_select_t *fdp, int timeout_msecs)
{
int mfd;
int r, idx, ridx;

fdp->working_rfdset = fdp->master_rfdset;
fdp->working_wfdset = fdp->master_wfdset;
mfd = select_get_maxfd(fdp);
if (timeout_msecs == INFTIM) {
r = select (mfd + 1, &fdp->working_rfdset, &fdp->working_wfdset, NULL, NULL);
} else {
struct timeval timeout;
timeout.tv_sec = timeout_msecs / 1000L;
timeout.tv_usec = ( timeout_msecs % 1000L ) * 1000L;
r = select (mfd + 1, &fdp->working_rfdset, &fdp->working_wfdset, NULL, &timeout);
}

if (r <= 0) {
return r;
}

ridx = 0;
for (idx = 0; idx < FDPOLL(fdp)->npollfds; ++idx) {
if (_check (fdp, fdp->select_fds[idx], 0)) {
fdp->select_rfdidx[ridx++] = fdp->select_fds[idx];
if (ridx == r)
break;
}
}

return ridx;        
}