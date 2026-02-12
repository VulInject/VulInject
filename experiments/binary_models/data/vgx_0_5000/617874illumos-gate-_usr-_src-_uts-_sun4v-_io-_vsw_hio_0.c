void
vsw_hio_start_ports(vsw_t *vswp)
{
vsw_port_list_t	*plist = &vswp->plist;
vsw_port_t	*portp;
vsw_share_t	*vsharep;
boolean_t	reset;

if (vswp->hio_capable == B_FALSE) {
return;
}
READ_ENTER(&plist->lockrw);
for (portp = plist->head; portp != NULL; portp = portp->p_next) {
if ((portp->p_hio_enabled == B_FALSE) ||
(portp->p_hio_capable == B_FALSE)) {
continue;
}

reset = B_FALSE;
mutex_enter(&vswp->mac_lock);
vsharep = vsw_hio_find_vshare_port(vswp, portp);
if (vsharep == NULL) {
reset = B_TRUE;
}
mutex_exit(&vswp->mac_lock);

if (reset == B_TRUE) {

vsw_hio_port_reset(portp, B_FALSE);
}
}
RW_EXIT(&plist->lockrw);
}