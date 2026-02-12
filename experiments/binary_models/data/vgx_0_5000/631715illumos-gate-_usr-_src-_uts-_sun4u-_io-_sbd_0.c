sbdp_handle_t *
sbd_get_sbdp_handle(sbd_board_t *sbp, sbd_handle_t *hp)
{
sbdp_handle_t		*hdp;

hdp = kmem_zalloc(sizeof (sbdp_handle_t), KM_SLEEP);
hdp->h_err = kmem_zalloc(sizeof (sbd_error_t), KM_SLEEP);
if (sbp == NULL) {
hdp->h_board = -1;
hdp->h_wnode = -1;
} else {
hdp->h_board = sbp->sb_num;
hdp->h_wnode = sbp->sb_wnode;
}

if (hp == NULL) {
hdp->h_flags = 0;
hdp->h_opts = NULL;
} else {
hdp->h_flags = SBD_2_SBDP_FLAGS(hp->h_flags);
hdp->h_opts = &hp->h_opts;
}

return (hdp);
}