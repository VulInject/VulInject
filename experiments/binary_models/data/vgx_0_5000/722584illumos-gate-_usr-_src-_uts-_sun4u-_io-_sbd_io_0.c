void
sbd_detach_io(sbd_handle_t *hp, sbderror_t *ep, dev_info_t *dip, int unit)
{
int rv;
dev_info_t *fdip = NULL;
sbd_board_t *sbp = SBDH2BD(hp->h_sbd);

ASSERT(e_ddi_branch_held(dip));
mutex_enter(&sbp->sb_slock);
rv = e_ddi_branch_unconfigure(dip, &fdip, DEVI_BRANCH_EVENT);
mutex_exit(&sbp->sb_slock);
if (rv) {

if (fdip != NULL) {
sbd_errno_decode(rv, ep, fdip);
ddi_release_devi(fdip);
} else {
sbd_errno_decode(rv, ep, dip);
}
}
}