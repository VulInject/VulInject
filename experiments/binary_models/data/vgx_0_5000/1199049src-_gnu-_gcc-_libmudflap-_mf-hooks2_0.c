
WRAPPER2(void *, dlopen, const char *path, int flags)
{
void *p;
size_t n;
TRACE ("%s\n", __PRETTY_FUNCTION__);
n = strlen (path);
MF_VALIDATE_EXTENT (path, CLAMPADD(n, 1), __MF_CHECK_READ, "dlopen path");
p = dlopen (path, flags);
if (NULL != p) {
__mf_register (p, 0, MF_REGISTER_dlopen, "dlopen result");
MF_VALIDATE_EXTENT (p, 0, __MF_CHECK_WRITE, "dlopen result");
}
return p;
}