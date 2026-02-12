static __be32
nfsd_proc_readdir(struct svc_rqst *rqstp, struct nfsd_readdirargs *argp,
struct nfsd_readdirres  *resp)
{
int		count;
__be32		nfserr;
loff_t		offset;

dprintk("nfsd: READDIR  %s %d bytes at %d\n",
SVCFH_fmt(&argp->fh),		
argp->count, argp->cookie);


count = (argp->count >> 2) - 2;


count -= 2;
if (count < 0)
count = 0;

resp->buffer = argp->buffer;
resp->offset = NULL;
resp->buflen = count;
resp->common.err = nfs_ok;

offset = argp->cookie;
nfserr = nfsd_readdir(rqstp, &argp->fh, &offset, 
&resp->common, nfssvc_encode_entry);

resp->count = resp->buffer - argp->buffer;
if (resp->offset)
*resp->offset = htonl(offset);

fh_put(&argp->fh);
return nfserr;
}