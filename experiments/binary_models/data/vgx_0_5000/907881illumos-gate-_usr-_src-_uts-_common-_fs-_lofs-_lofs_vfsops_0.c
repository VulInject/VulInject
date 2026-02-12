static int
lofsinit(int fstyp, char *name)
{
static const fs_operation_def_t lo_vfsops_template[] = {
VFSNAME_MOUNT,		{ .vfs_mount = lo_mount },
VFSNAME_UNMOUNT,	{ .vfs_unmount = lo_unmount },
VFSNAME_ROOT,		{ .vfs_root = lo_root },
VFSNAME_STATVFS,	{ .vfs_statvfs = lo_statvfs },
VFSNAME_SYNC,		{ .vfs_sync = lo_sync },
VFSNAME_VGET,		{ .vfs_vget = lo_vget },
VFSNAME_FREEVFS,	{ .vfs_freevfs = lo_freevfs },
NULL,			NULL
};
int error;

error = vfs_setfsops(fstyp, lo_vfsops_template, &lo_vfsops);
if (error != 0) {
cmn_err(CE_WARN, "lofsinit: bad vfs ops template");
return (error);
}

error = vn_make_ops(name, lo_vnodeops_template, &lo_vnodeops);
if (error != 0) {
(void) vfs_freevfsops_by_type(fstyp);
cmn_err(CE_WARN, "lofsinit: bad vnode ops template");
return (error);
}

lofsfstype = fstyp;

return (0);
}