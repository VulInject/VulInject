static uint16_t nfs_server_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
{
const struct nfs_client *clp = cookie_netfs_data;
const struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *) &clp->cl_addr;
const struct sockaddr_in *sin = (struct sockaddr_in *) &clp->cl_addr;
struct nfs_server_key *key = buffer;
uint16_t len = sizeof(struct nfs_server_key);

memset(key, 0, len);
key->nfsversion = clp->rpc_ops->version;
key->family = clp->cl_addr.ss_family;

switch (clp->cl_addr.ss_family) {
case AF_INET:
key->port = sin->sin_port;
key->addr[0].ipv4_addr = sin->sin_addr;
len += sizeof(key->addr[0].ipv4_addr);
break;

case AF_INET6:
key->port = sin6->sin6_port;
key->addr[0].ipv6_addr = sin6->sin6_addr;
len += sizeof(key->addr[0].ipv6_addr);
break;

default:
printk(KERN_WARNING "NFS: Unknown network family '%d'\n",
clp->cl_addr.ss_family);
len = 0;
break;
}

return len;
}