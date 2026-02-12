int c2s_router_mio_callback(mio_t m, mio_action_t a, mio_fd_t fd, void *data, void *arg) {
c2s_t c2s = (c2s_t) arg;
int nbytes;

switch(a) {
case action_READ:
log_debug(ZONE, "read action on fd %d", fd->fd);

ioctl(fd->fd, FIONREAD, &nbytes);
if(nbytes == 0) {
sx_kill(c2s->router);
return 0;
}

return sx_can_read(c2s->router);

case action_WRITE:
log_debug(ZONE, "write action on fd %d", fd->fd);
return sx_can_write(c2s->router);

case action_CLOSE:
log_debug(ZONE, "close action on fd %d", fd->fd);
log_write(c2s->log, LOG_NOTICE, "connection to router closed");

c2s_lost_router = 1;


c2s->online = 0;

break;

case action_ACCEPT:
break;
}

return 0;
}