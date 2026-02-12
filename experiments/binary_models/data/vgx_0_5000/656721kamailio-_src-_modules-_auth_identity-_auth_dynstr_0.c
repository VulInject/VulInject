int app2dynstr(dynstr *sout, str *s2app)
{
char *stmp;
int isize = sout->sd.len + s2app->len;

if (isize > sout->size) {
stmp=pkg_realloc(sout->sd.s, isize);
if (!stmp) {
LOG(L_ERR, "AUTH_IDENTITY:app2dynstr: Not enough memory error\n");
return -1;
}
sout->sd.s=stmp;
sout->size=isize;
}

memcpy(&sout->sd.s[sout->sd.len],s2app->s,s2app->len);
sout->sd.len = isize;

return 0;
}