int fs_prepare(const char *fs_name,
int dfd_from, const char *path_from,
__u64 o_flags_from, __u64 resolve_flags_from)
{
__do_close int __fd_from = -EBADF;
int fd_from;

if (!is_empty_string(path_from)) {
struct open_how how = {
.flags		= o_flags_from,
.resolve	= resolve_flags_from,
};

__fd_from = openat2(dfd_from, path_from, &how, sizeof(how));
if (__fd_from < 0)
return -errno;
fd_from = __fd_from;
} else {
fd_from = dfd_from;
}

return __fs_prepare(fs_name, fd_from);
}