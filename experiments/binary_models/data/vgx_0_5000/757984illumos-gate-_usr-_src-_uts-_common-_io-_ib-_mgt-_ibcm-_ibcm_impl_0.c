static void
ibcm_init_saa(void *arg)
{
ibcm_port_info_t		*portp = (ibcm_port_info_t *)arg;
int				status;
ib_guid_t			port_guid;
ibmf_saa_subnet_event_args_t	event_args;

port_guid = portp->port_sgid0.gid_guid;

IBTF_DPRINTF_L3(cmlog, "ibcm_init_saa: port guid %llX", port_guid);

event_args.is_event_callback_arg = portp;
event_args.is_event_callback = ibcm_sm_notice_handler;

if ((status = ibmf_sa_session_open(port_guid, 0, &event_args,
IBMF_VERSION, 0, &portp->port_ibmf_saa_hdl)) != IBMF_SUCCESS) {
IBTF_DPRINTF_L2(cmlog, "ibcm_init_saa: "
"ibmf_sa_session_open failed for port guid %llX "
"status = %d", port_guid, status);
} else {
IBTF_DPRINTF_L2(cmlog, "ibcm_init_saa: "
"registered sa_hdl 0x%p for port guid %llX",
portp->port_ibmf_saa_hdl, port_guid);
}

mutex_enter(&ibcm_sa_open_lock);
portp->port_saa_open_in_progress = 0;
cv_broadcast(&ibcm_sa_open_cv);
mutex_exit(&ibcm_sa_open_lock);
}