static RD_NTSTATUS
parallel_create(uint32 device_id, uint32 access, uint32 share_mode, uint32 disposition,
uint32 flags, char *filename, RD_NTHANDLE * handle)
{
UNUSED(access);
UNUSED(share_mode);
UNUSED(disposition);
UNUSED(flags);
UNUSED(filename);
int parallel_fd;

parallel_fd = open(g_rdpdr_device[device_id].local_path, O_RDWR);
if (parallel_fd == -1)
{
logger(Core, Error, "parallel_create(), open failed: %s", strerror(errno));
return RD_STATUS_ACCESS_DENIED;
}


if (fcntl(parallel_fd, F_SETFL, O_NONBLOCK) == -1)
logger(Core, Error, "parallel_create(), fcntl failed: %s", strerror(errno));


ioctl(parallel_fd, LPABORT, (int) 1);

g_rdpdr_device[device_id].handle = parallel_fd;

*handle = parallel_fd;

return RD_STATUS_SUCCESS;
}