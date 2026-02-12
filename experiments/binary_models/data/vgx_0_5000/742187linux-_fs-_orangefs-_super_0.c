static int orangefs_unmount(int id, __s32 fs_id, const char *devname)
{
struct orangefs_kernel_op_s *op;
int r;
op = op_alloc(ORANGEFS_VFS_OP_FS_UMOUNT);
if (!op)
return -ENOMEM;
op->upcall.req.fs_umount.id = id;
op->upcall.req.fs_umount.fs_id = fs_id;
strncpy(op->upcall.req.fs_umount.orangefs_config_server,
devname, ORANGEFS_MAX_SERVER_ADDR_LEN - 1);
r = service_operation(op, "orangefs_fs_umount", 0);

if (r)
gossip_err("orangefs_unmount: service_operation %d\n", r);
op_release(op);
return r;
}