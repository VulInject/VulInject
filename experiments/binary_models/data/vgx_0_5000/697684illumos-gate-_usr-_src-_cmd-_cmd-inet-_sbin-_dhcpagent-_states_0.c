void
remove_lease(dhcp_lease_t *dlp)
{
if (dlp->dl_removed) {
dhcpmsg(MSG_CRIT, "remove_lease: extraneous removal");
} else {
dhcp_lif_t *lif, *lifnext;
uint_t nlifs;

dhcpmsg(MSG_DEBUG,
"remove_lease: removed lease from state machine %s",
dlp->dl_smach->dsm_name);
dlp->dl_removed = B_TRUE;
remque(dlp);

cancel_lease_timers(dlp);

lif = dlp->dl_lifs;
nlifs = dlp->dl_nlifs;
for (; nlifs > 0; nlifs--, lif = lifnext) {
lifnext = lif->lif_next;
unplumb_lif(lif);
}

release_lease(dlp);
}
}