static int __fs_prepare(const char *fs_name, int fd_from)
{
__do_close int fd_fs = -EBADF;
char source[LXC_PROC_PID_FD_LEN];
int ret;


if (is_empty_string(fs_name))
return ret_errno(EINVAL);


if (fd_from >= 0) {
ret = strnprintf(source, sizeof(source), "/proc/self/fd/%d", fd_from);
if (ret < 0)
return log_error_errno(-EIO, EIO, "Failed to create /proc/self/fd/%d", fd_from);
}

fd_fs = fsopen(fs_name, FSOPEN_CLOEXEC);
if (fd_fs < 0)
return log_error_errno(-errno, errno, "Failed to create new open new %s filesystem context", fs_name);

if (fd_from >= 0) {
ret = fsconfig(fd_fs, FSCONFIG_SET_STRING, "source", source, 0);
if (ret)
return log_error_errno(-errno, errno, "Failed to set %s filesystem source to %s", fs_name, source);

TRACE("Set %s filesystem source property to %s", fs_name, source);
}

TRACE("Finished initializing new %s filesystem context %d", fs_name, fd_fs);
return move_fd(fd_fs);
}