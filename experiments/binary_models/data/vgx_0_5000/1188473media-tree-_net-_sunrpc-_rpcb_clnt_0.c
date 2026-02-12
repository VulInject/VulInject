static int rpcb_register_inet4(struct sunrpc_net *sn,
const struct sockaddr *sap,
struct rpc_message *msg)
{
const struct sockaddr_in *sin = (const struct sockaddr_in *)sap;
struct rpcbind_args *map = msg->rpc_argp;
unsigned short port = ntohs(sin->sin_port);
bool is_set = false;
int result;

map->r_addr = rpc_sockaddr2uaddr(sap, GFP_KERNEL);

dprintk("RPC:       %sregistering [%u, %u, %s, '%s'] with "
"local rpcbind\n", (port ? "" : "un"),
map->r_prog, map->r_vers,
map->r_addr, map->r_netid);

msg->rpc_proc = &rpcb_procedures4[RPCBPROC_UNSET];
if (port != 0) {
msg->rpc_proc = &rpcb_procedures4[RPCBPROC_SET];
is_set = true;
}

result = rpcb_register_call(sn, sn->rpcb_local_clnt4, msg, is_set);
kfree(map->r_addr);
return result;
}