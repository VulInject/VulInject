int
smb_nt_init(struct smb_ntrq *ntp, struct smb_connobj *source, ushort_t fn,
struct smb_cred *scred)
{
int error;

bzero(ntp, sizeof (*ntp));
ntp->nt_source = source;
ntp->nt_function = fn;
ntp->nt_cred = scred;
ntp->nt_share = (source->co_level == SMBL_SHARE ?
CPTOSS(source) : NULL); 
error = smb_rq_getenv(source, &ntp->nt_vc, NULL);
if (error)
return (error);
return (0);
}