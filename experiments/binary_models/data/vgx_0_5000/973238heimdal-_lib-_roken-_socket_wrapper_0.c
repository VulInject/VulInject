_PUBLIC_ int swrap_connect(int s, const struct sockaddr *serv_addr, socklen_t addrlen)
{
int ret;
struct sockaddr_un un_addr;
struct socket_info *si = find_socket_info(s);

if (!si) {
return real_connect(s, serv_addr, addrlen);
}

if (si->bound == 0) {
ret = swrap_auto_bind(si);
if (ret == -1) return -1;
}

if (si->family != serv_addr->sa_family) {
errno = EINVAL;
return -1;
}

ret = sockaddr_convert_to_un(si, (const struct sockaddr *)serv_addr, addrlen, &un_addr, 0, NULL);
if (ret == -1) return -1;

swrap_dump_packet(si, serv_addr, SWRAP_CONNECT_SEND, NULL, 0);

ret = real_connect(s, (struct sockaddr *)&un_addr,
sizeof(struct sockaddr_un));


if (ret == -1 && errno == ENOENT) {
errno = EHOSTUNREACH;
}

if (ret == 0) {
si->peername_len = addrlen;
si->peername = sockaddr_dup(serv_addr, addrlen);

swrap_dump_packet(si, serv_addr, SWRAP_CONNECT_RECV, NULL, 0);
swrap_dump_packet(si, serv_addr, SWRAP_CONNECT_ACK, NULL, 0);
} else {
swrap_dump_packet(si, serv_addr, SWRAP_CONNECT_UNREACH, NULL, 0);
}

return ret;
}