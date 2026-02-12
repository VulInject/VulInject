void
nfslog_getfh(struct exportinfo *exi, fhandle *fh, char *fname, enum uio_seg seg,
cred_t *cr)
{
struct svc_req	req;
int		res = 0;
struct netbuf	nb = {0, 0, NULL};
int		error = 0;
char		*namebuf;
size_t		len;
nfslog_getfhargs gfh;

ASSERT(exi != NULL);
ASSERT(exi->exi_export.ex_flags & EX_LOG);

bzero(&req, sizeof (req));
req.rq_prog = NFSLOG_PROGRAM;
req.rq_vers = NFSLOG_VERSION;
req.rq_proc = NFSLOG_GETFH;
req.rq_cred.oa_flavor = AUTH_NONE;

namebuf = kmem_alloc(MAXPATHLEN + 4, KM_SLEEP);
if (seg == UIO_USERSPACE) {
error = copyinstr(fname, namebuf, MAXPATHLEN, &len);
} else {
error = copystr(fname, namebuf, MAXPATHLEN, &len);
}

if (!error) {
gfh.gfh_fh_buf = *fh;
gfh.gfh_path = namebuf;

nfslog_write_record(exi, &req, (caddr_t)&gfh, (caddr_t)&res,
cr, &nb, 0, NFSLOG_ONE_BUFFER);
}
kmem_free(namebuf, MAXPATHLEN + 4);
}