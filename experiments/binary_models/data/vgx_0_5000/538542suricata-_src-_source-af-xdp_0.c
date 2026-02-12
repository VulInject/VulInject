static TmEcode ConfigureBusyPolling(AFXDPThreadVars *ptv)
{
const int fd = xsk_socket__fd(ptv->xsk.xsk);
int sock_opt = 1;

if (!ptv->xsk.enable_busy_poll) {
SCReturnInt(TM_ECODE_OK);
}


if (!SCKernelVersionIsAtLeast(5, 11)) {
SCLogWarning("Kernel version older than required: v5.11,"
" upgrade kernel version to use 'enable-busy-poll' option.");
SCReturnInt(TM_ECODE_FAILED);
}

if (WriteLinuxTunables(ptv) != TM_ECODE_OK) {
SCReturnInt(TM_ECODE_FAILED);
}

if (setsockopt(fd, SOL_SOCKET, SO_PREFER_BUSY_POLL, (void *)&sock_opt, sizeof(sock_opt)) < 0) {
SCReturnInt(TM_ECODE_FAILED);
}

sock_opt = ptv->xsk.busy_poll_time;
if (setsockopt(fd, SOL_SOCKET, SO_BUSY_POLL, (void *)&sock_opt, sizeof(sock_opt)) < 0) {
SCReturnInt(TM_ECODE_FAILED);
}

sock_opt = ptv->xsk.busy_poll_budget;
if (setsockopt(fd, SOL_SOCKET, SO_BUSY_POLL_BUDGET, (void *)&sock_opt, sizeof(sock_opt)) < 0) {
SCReturnInt(TM_ECODE_FAILED);
}

SCReturnInt(TM_ECODE_OK);
}