void
ipsec_latch_ids(ipsec_latch_t *ipl, ipsid_t *local, ipsid_t *remote)
{
mutex_enter(&ipl->ipl_lock);

if (ipl->ipl_ids_latched) {

mutex_exit(&ipl->ipl_lock);
return;
}

if (local != NULL)
IPSID_REFHOLD(local);
if (remote != NULL)
IPSID_REFHOLD(remote);

ipl->ipl_local_cid = local;
ipl->ipl_remote_cid = remote;
ipl->ipl_ids_latched = B_TRUE;
mutex_exit(&ipl->ipl_lock);
}