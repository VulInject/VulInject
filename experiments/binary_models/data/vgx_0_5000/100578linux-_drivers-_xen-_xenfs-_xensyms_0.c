static int xensyms_open(struct inode *inode, struct file *file)
{
struct seq_file *m;
struct xensyms *xs;
int ret;

ret = seq_open_private(file, &xensyms_seq_ops,
sizeof(struct xensyms));
if (ret)
return ret;

m = file->private_data;
xs = (struct xensyms *)m->private;

xs->namelen = XEN_KSYM_NAME_LEN + 1;
xs->name = kzalloc(xs->namelen, GFP_KERNEL);
if (!xs->name) {
seq_release_private(inode, file);
return -ENOMEM;
}
set_xen_guest_handle(xs->op.u.symdata.name, xs->name);
xs->op.cmd = XENPF_get_symbol;
xs->op.u.symdata.namelen = xs->namelen;

return 0;
}