static int
rfs4_fattr4_lease_time(nfs4_attr_cmd_t cmd, struct nfs4_svgetit_arg *sarg,
union nfs4_attr_u *na)
{
int error = 0;

switch (cmd) {
case NFS4ATTR_SUPPORTED:
if (sarg->op == NFS4ATTR_SETIT)
error = EINVAL;
break;		
case NFS4ATTR_GETIT:
na->lease_time = rfs4_lease_time;
break;
case NFS4ATTR_SETIT:

error = EINVAL;
break;
case NFS4ATTR_VERIT:
if (na->lease_time != rfs4_lease_time)
error = -1;	
break;
case NFS4ATTR_FREEIT:
break;
}
return (error);
}