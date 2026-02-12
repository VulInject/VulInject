int network_close(server *srv) {
for (uint32_t i = 0; i < srv->srv_sockets.used; ++i) {
server_socket *srv_socket = srv->srv_sockets.ptr[i];
if (srv_socket->fd != -1) {
network_unregister_sock(srv, srv_socket);
close(srv_socket->fd);
}

buffer_free(srv_socket->srv_token);

free(srv_socket);
}

free(srv->srv_sockets.ptr);
srv->srv_sockets.ptr = NULL;
srv->srv_sockets.used = 0;

for (uint32_t i = 0; i < srv->srv_sockets_inherited.used; ++i) {
server_socket *srv_socket = srv->srv_sockets_inherited.ptr[i];
if (srv_socket->fd != -1 && srv_socket->sidx != (unsigned short)~0u) {
close(srv_socket->fd);
}

buffer_free(srv_socket->srv_token);

free(srv_socket);
}

free(srv->srv_sockets_inherited.ptr);
srv->srv_sockets_inherited.ptr = NULL;
srv->srv_sockets_inherited.used = 0;

return 0;
}