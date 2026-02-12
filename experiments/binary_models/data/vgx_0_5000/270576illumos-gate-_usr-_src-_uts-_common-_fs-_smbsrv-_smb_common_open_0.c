static int
smb_set_open_attributes(smb_request_t *sr, smb_ofile_t *of)
{
smb_attr_t	attr;
smb_arg_open_t	*op = &sr->sr_open;
smb_node_t	*node = of->f_node;
int		rc = 0;

bzero(&attr, sizeof (smb_attr_t));

if (op->created_readonly) {
attr.sa_dosattr = op->dattr | FILE_ATTRIBUTE_READONLY;
attr.sa_mask |= SMB_AT_DOSATTR;
}

if (op->dsize != 0) {
attr.sa_allocsz = op->dsize;
attr.sa_mask |= SMB_AT_ALLOCSZ;
}

if ((op->mtime.tv_sec != 0) && (op->mtime.tv_sec != UINT_MAX)) {
attr.sa_vattr.va_mtime = op->mtime;
attr.sa_mask |= SMB_AT_MTIME;
}

if (attr.sa_mask != 0)
rc = smb_node_setattr(sr, node, of->f_cr, of, &attr);

return (rc);
}