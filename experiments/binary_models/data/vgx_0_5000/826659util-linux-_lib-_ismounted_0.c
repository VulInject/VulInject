int check_mount_point(const char *device, int *mount_flags,
char *mtpt, int mtlen)
{
int	retval = 0;

if (is_swap_device(device)) {
*mount_flags = MF_MOUNTED | MF_SWAP;
if (mtpt && mtlen)
xstrncpy(mtpt, "[SWAP]", mtlen);
} else {
retval = check_mntent(device, mount_flags, mtpt, mtlen);
retval = check_getmntinfo(device, mount_flags, mtpt, mtlen);
*mount_flags = 0;
}
if (retval)
return retval;

{
struct stat st_buf;
int fd;
if ((stat(device, &st_buf) != 0) ||
!S_ISBLK(st_buf.st_mode))
return 0;
fd = open(device, O_RDONLY|O_EXCL|O_CLOEXEC|O_NONBLOCK);
if (fd < 0) {
if (errno == EBUSY)
*mount_flags |= MF_BUSY;
} else
close(fd);
}

return 0;
}