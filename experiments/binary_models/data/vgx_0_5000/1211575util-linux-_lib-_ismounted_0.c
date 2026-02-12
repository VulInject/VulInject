static int check_getmntinfo(const char *file, int *mount_flags,
char *mtpt, int mtlen)
{
struct statfs *mp;
int    len, n;
const  char   *s1;
char	*s2;

n = getmntinfo(&mp, MNT_NOWAIT);
if (n == 0)
return errno;

len = sizeof(_PATH_DEV) - 1;
s1 = file;
if (strncmp(_PATH_DEV, s1, len) == 0)
s1 += len;

*mount_flags = 0;
while (--n >= 0) {
s2 = mp->f_mntfromname;
if (strncmp(_PATH_DEV, s2, len) == 0) {
s2 += len - 1;
*s2 = 'r';
}
if (strcmp(s1, s2) == 0 || strcmp(s1, &s2[1]) == 0) {
*mount_flags = MF_MOUNTED;
break;
}
++mp;
}
if (mtpt && n >= 0)
xstrncpy(mtpt, mp->f_mntonname, mtlen);
return 0;
}