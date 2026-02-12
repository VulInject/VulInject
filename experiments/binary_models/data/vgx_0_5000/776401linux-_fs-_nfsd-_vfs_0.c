__be32
nfsd_open(struct svc_rqst *rqstp, struct svc_fh *fhp, umode_t type,
int may_flags, struct file **filp)
{
__be32 err;
bool retried = false;

validate_process_creds();

if (type == S_IFREG)
may_flags |= NFSD_MAY_OWNER_OVERRIDE;
retry:
err = fh_verify(rqstp, fhp, type, may_flags);
if (!err) {
err = __nfsd_open(rqstp, fhp, type, may_flags, filp);
if (err == nfserr_stale && !retried) {
retried = true;
fh_put(fhp);
goto retry;
}
}
validate_process_creds();
return err;
}