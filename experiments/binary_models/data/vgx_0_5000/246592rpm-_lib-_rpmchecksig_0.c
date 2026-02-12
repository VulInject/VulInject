int rpmcliImportPubkeys(rpmts ts, ARGV_const_t argv)
{
int res = 0;
for (ARGV_const_t arg = argv; arg && *arg; arg++) {
const char *fn = *arg;
uint8_t *buf = NULL;
ssize_t blen = 0;
char *t = NULL;
int iorc;


iorc = rpmioSlurp(fn, &buf, &blen);
if (iorc || buf == NULL || blen < 64) {
rpmlog(RPMLOG_ERR, _("%s: import read failed(%d).\n"), fn, iorc);
res++;
} else {
res += doImport(ts, fn, (char *)buf, blen);
}

free(t);
free(buf);
}
return res;
}