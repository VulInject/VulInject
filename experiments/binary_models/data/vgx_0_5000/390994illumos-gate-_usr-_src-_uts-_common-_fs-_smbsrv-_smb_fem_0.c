static int
smb_fem_oplock_setattr(
femarg_t		*arg,
vattr_t		*vap,
int			flags,
cred_t		*cr,
caller_context_t	*ct)
{
smb_node_t	*node;
uint32_t	status;
int	rc = 0;

if (ct != &smb_ct && (vap->va_mask & AT_SIZE) != 0) {
node = (smb_node_t *)(arg->fa_fnode->fn_available);
SMB_NODE_VALID(node);

status = smb_oplock_break_SETINFO(node, NULL,
FileEndOfFileInformation);
if (status == NT_STATUS_OPLOCK_BREAK_IN_PROGRESS)
rc = smb_fem_oplock_wait(node, ct);
else if (status != 0)
rc = EIO;
}
if (rc == 0)
rc = vnext_setattr(arg, vap, flags, cr, ct);
return (rc);
}