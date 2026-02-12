static void
start_loop(void)
{
struct event_base *base;
struct evconnlistener *listener;
struct sockaddr_storage ss;
ev_socklen_t socklen = sizeof(ss);
evutil_socket_t fd;

base = event_base_new();
if (base == NULL) {
puts("Could not open event base!");
exit(1);
}

listener = evconnlistener_new_bind(base, listener_accept_cb, NULL,
LEV_OPT_CLOSE_ON_FREE|LEV_OPT_REUSEABLE,
-1, (struct sockaddr *)&saddr, sizeof(saddr));
if (listener == NULL) {
my_perror("Could not create listener!");
exit(1);
}
fd = evconnlistener_get_fd(listener);
if (fd < 0) {
puts("Couldn't get fd from listener");
exit(1);
}
if (getsockname(fd, (struct sockaddr *)&ss, &socklen) < 0) {
my_perror("getsockname()");
exit(1);
}
memcpy(&saddr, &ss, sizeof(saddr));
if (saddr.sin_family != AF_INET) {
puts("AF mismatch from getsockname().");
exit(1);
}

start_client(base);

event_base_dispatch(base);
}