enum clnt_stat
netname2user(char *name, uid_t *uid, gid_t *gid, int *len, gid_t *groups)
{
struct getcredres res;
enum clnt_stat stat;

res.getcredres_u.cred.gids.gids_val = (uint_t *)groups;
if ((stat = key_call(KEY_GETCRED, xdr_netnamestr, (char *)&name,
xdr_getcredres, (char *)&res, CRED())) != RPC_SUCCESS) {
RPCLOG(1, "netname2user(%s): ", name);
RPCLOG(1, "rpc status %d ", stat);
RPCLOG(1, "(%s)\n", clnt_sperrno(stat));
return (stat);
}

if (res.status != KEY_SUCCESS) {
RPCLOG(1, "netname2user(%s): ", name);
RPCLOG(1, "key status %d\n", res.status);
return (RPC_FAILED);	
}
*uid = res.getcredres_u.cred.uid;
*gid = res.getcredres_u.cred.gid;
*len = res.getcredres_u.cred.gids.gids_len;
return (RPC_SUCCESS);
}