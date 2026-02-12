ibcm_status_t
ibcm_free_allqps(ibcm_hca_info_t *hcap, int port_no)
{
ibcm_qp_list_t		*entry, *freed;
ibcm_status_t		ibcm_status = IBCM_SUCCESS;

IBTF_DPRINTF_L5(cmlog, "ibcm_free_allqps: hcap %p port_no %d", hcap,
port_no);

mutex_enter(&ibcm_qp_list_lock);
entry = hcap->hca_port_info[port_no-1].port_qplist;
while ((entry != NULL) &&
((ibcm_status = ibcm_free_qp(entry)) == IBCM_SUCCESS)) {
freed = entry;
entry = entry->qp_next;
kmem_free(freed, sizeof (ibcm_qp_list_t));
}

if (ibcm_status != IBCM_SUCCESS)	
hcap->hca_port_info[port_no-1].port_qplist = entry;
else	
hcap->hca_port_info[port_no-1].port_qplist = NULL;

mutex_exit(&ibcm_qp_list_lock);
return (ibcm_status);
}