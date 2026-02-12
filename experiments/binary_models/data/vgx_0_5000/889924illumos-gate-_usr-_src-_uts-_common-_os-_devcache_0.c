static int
kfread(kfile_t *fp, char *buf, ssize_t bufsiz, ssize_t *ret_n)
{
ssize_t		resid;
int		err;
ssize_t		n;

ASSERT(modrootloaded);

if (fp->kf_state != 0)
return (fp->kf_state);

err = vn_rdwr(UIO_READ, fp->kf_vp, buf, bufsiz, fp->kf_fpos,
UIO_SYSSPACE, 0, (rlim64_t)0, kcred, &resid);
if (err != 0) {
KFDEBUG((CE_CONT, "%s: read error %d\n",
fp->kf_fname, err));
fp->kf_state = err;
return (err);
}

ASSERT(resid >= 0 && resid <= bufsiz);
n = bufsiz - resid;

KFDEBUG1((CE_CONT, "%s: read %ld bytes ok %ld bufsiz, %ld resid\n",
fp->kf_fname, n, bufsiz, resid));

fp->kf_fpos += n;
*ret_n = n;
return (0);
}