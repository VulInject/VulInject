int log_socket_prefix(enum LogLevel lev, void *ctx, char *dst, unsigned int dstlen)
{
const struct PgSocket *sock = ctx;
const char *user, *db, *host;
char host6[PGADDR_BUF];
int port;
char stype;


if (!sock)
return 0;


stype = is_server_socket(sock) ? 'S' : 'C';
port = pga_port(&sock->remote_addr);
db = sock->pool ? sock->pool->db->name : "(nodb)";
user = sock->login_user ? sock->login_user->name : "(nouser)";
if (pga_is_unix(&sock->remote_addr)) {
unsigned long pid = sock->remote_addr.scred.pid;
if (pid) {
snprintf(host6, sizeof(host6), "unix(%lu)", pid);
host = host6;
} else {
host = "unix";
}
} else {
host = pga_ntop(&sock->remote_addr, host6, sizeof(host6));
}

if (pga_family(&sock->remote_addr) == AF_INET6) {
return snprintf(dst, dstlen, "%c-%p: %s/%s@[%s]:%d ",
stype, sock, db, user, host, port);
} else {
return snprintf(dst, dstlen, "%c-%p: %s/%s@%s:%d ",
stype, sock, db, user, host, port);
}
}