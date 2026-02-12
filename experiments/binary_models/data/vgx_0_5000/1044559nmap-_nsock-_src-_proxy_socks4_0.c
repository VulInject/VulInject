static void proxy_socks4_handler(nsock_pool nspool, nsock_event nsevent, void *udata) {
int rc = 0;
struct npool *nsp = (struct npool *)nspool;
struct nevent *nse = (struct nevent *)nsevent;

switch (nse->iod->px_ctx->px_state) {
case PROXY_STATE_INITIAL:
rc = handle_state_initial(nsp, nse, udata);
break;

case PROXY_STATE_SOCKS4_TCP_CONNECTED:
if (nse->type == NSE_TYPE_READ)
rc = handle_state_tcp_connected(nsp, nse, udata);
break;

case PROXY_STATE_SOCKS4_TUNNEL_ESTABLISHED:
forward_event(nsp, nse, udata);
break;

default:
fatal("Invalid proxy state!");
}

if (rc) {
nse->status = NSE_STATUS_PROXYERROR;
forward_event(nsp, nse, udata);
}
}


static const struct proxy_op ProxyOpsSocks4 = {
proxy_socks4_node_new,
proxy_socks4_node_delete,
proxy_socks4_handler,
};