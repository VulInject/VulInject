int
bufferevent_replacefd(struct bufferevent *bev, evutil_socket_t fd)
{
union bufferevent_ctrl_data d;
int err = -1;
evutil_socket_t old_fd = EVUTIL_INVALID_SOCKET;

BEV_LOCK(bev);
if (bev->be_ops->ctrl) {
err = bev->be_ops->ctrl(bev, BEV_CTRL_GET_FD, &d);
if (!err) {
old_fd = d.fd;
if (old_fd != EVUTIL_INVALID_SOCKET) {
err = evutil_closesocket(old_fd);
}
}
if (!err) {
d.fd = fd;
err = bev->be_ops->ctrl(bev, BEV_CTRL_SET_FD, &d);
}
}
if (err)
event_debug(("%s: cannot replace fd for %p from "EV_SOCK_FMT" to "EV_SOCK_FMT, __func__, (void *)bev, old_fd, fd));
BEV_UNLOCK(bev);

return err;
}