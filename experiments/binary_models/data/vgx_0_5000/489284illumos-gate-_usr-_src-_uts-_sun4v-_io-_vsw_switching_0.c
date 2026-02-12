mblk_t *
vsw_vlan_frame_pretag(void *arg, int type, mblk_t *mp)
{
vsw_t			*vswp;
vsw_port_t		*portp;
struct ether_header	*ehp;
mblk_t			*bp;
mblk_t			*bpt;
mblk_t			*bph;
mblk_t			*bpn;
uint16_t		pvid;

ASSERT((type == VSW_LOCALDEV) || (type == VSW_VNETPORT));

if (type == VSW_LOCALDEV) {
vswp = (vsw_t *)arg;
pvid = vswp->pvid;
portp = NULL;
} else {

portp = (vsw_port_t *)arg;
pvid = portp->pvid;
vswp = portp->p_vswp;
}

bpn = bph = bpt = NULL;

for (bp = mp; bp != NULL; bp = bpn) {

bpn = bp->b_next;
bp->b_next = bp->b_prev = NULL;


ehp = (struct ether_header *)bp->b_rptr;

if (ehp->ether_type != ETHERTYPE_VLAN) {	


if (pvid != vswp->default_vlan_id) {
bp = vnet_vlan_insert_tag(bp, pvid);
if (bp == NULL) {
continue;
}
}
}


if (bph == NULL) {
bph = bpt = bp;
} else {
bpt->b_next = bp;
bpt = bp;
}

}

return (bph);
}