static void
update_header(mblk_t *mp, mac_header_info_t *hdr_info, boolean_t striphdr)
{
if (hdr_info->mhi_bindsap == ETHERTYPE_VLAN) {
struct ether_vlan_header *evhp;
uint16_t ether_type;


evhp = (struct ether_vlan_header *)mp->b_rptr;
hdr_info->mhi_istagged = B_TRUE;
hdr_info->mhi_tci = ntohs(evhp->ether_tci);
if (striphdr) {

ether_type = ntohs(evhp->ether_type);
hdr_info->mhi_origsap = ether_type;
hdr_info->mhi_bindsap = (ether_type > ETHERMTU) ?
ether_type : DLS_SAP_LLC;
mp->b_rptr = (uchar_t *)(evhp + 1);
}
} else {
hdr_info->mhi_istagged = B_FALSE;
hdr_info->mhi_tci = VLAN_ID_NONE;
if (striphdr)
mp->b_rptr += sizeof (struct ether_header);
}
}