static int qrtr_port_assign(struct qrtr_sock *ipc, int *port)
{
int rc;

mutex_lock(&qrtr_port_lock);
if (!*port) {
rc = idr_alloc(&qrtr_ports, ipc,
QRTR_MIN_EPH_SOCKET, QRTR_MAX_EPH_SOCKET + 1,
GFP_ATOMIC);
if (rc >= 0)
*port = rc;
} else if (*port < QRTR_MIN_EPH_SOCKET && !capable(CAP_NET_ADMIN)) {
rc = -EACCES;
} else if (*port == QRTR_PORT_CTRL) {
rc = idr_alloc(&qrtr_ports, ipc, 0, 1, GFP_ATOMIC);
} else {
rc = idr_alloc(&qrtr_ports, ipc, *port, *port + 1, GFP_ATOMIC);
if (rc >= 0)
*port = rc;
}
mutex_unlock(&qrtr_port_lock);

if (rc == -ENOSPC)
return -EADDRINUSE;
else if (rc < 0)
return rc;

sock_hold(&ipc->sk);

return 0;
}