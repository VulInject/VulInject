int nfs40_discover_server_trunking(struct nfs_client *clp,
struct nfs_client **result,
struct rpc_cred *cred)
{
struct nfs4_setclientid_res clid = {
.clientid = clp->cl_clientid,
.confirm = clp->cl_confirm,
};
struct nfs_net *nn = net_generic(clp->cl_net, nfs_net_id);
unsigned short port;
int status;

port = nn->nfs_callback_tcpport;
if (clp->cl_addr.ss_family == AF_INET6)
port = nn->nfs_callback_tcpport6;

status = nfs4_proc_setclientid(clp, NFS4_CALLBACK, port, cred, &clid);
if (status != 0)
goto out;
clp->cl_clientid = clid.clientid;
clp->cl_confirm = clid.confirm;

status = nfs40_walk_client_list(clp, result, cred);
if (status == 0) {

nfs4_schedule_state_renewal(*result);
}
out:
return status;
}