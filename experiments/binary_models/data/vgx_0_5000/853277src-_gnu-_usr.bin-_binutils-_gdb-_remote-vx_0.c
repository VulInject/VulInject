net_load (char *filename, CORE_ADDR *pTextAddr, CORE_ADDR *pDataAddr,
CORE_ADDR *pBssAddr)
{
enum clnt_stat status;
struct ldfile ldstruct;
struct timeval load_timeout;

memset ((char *) &ldstruct, '\0', sizeof (ldstruct));



load_timeout.tv_sec = 99999999;	
load_timeout.tv_usec = 0;

status = clnt_call (pClient, VX_LOAD, xdr_wrapstring, &filename, xdr_ldfile,
&ldstruct, load_timeout);

if (status == RPC_SUCCESS)
{
if (*ldstruct.name == 0)	
return -1;
*pTextAddr = ldstruct.txt_addr;
*pDataAddr = ldstruct.data_addr;
*pBssAddr = ldstruct.bss_addr;
return 0;
}
else
return -1;
}