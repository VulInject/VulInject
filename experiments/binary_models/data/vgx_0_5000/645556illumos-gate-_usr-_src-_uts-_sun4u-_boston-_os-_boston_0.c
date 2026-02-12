void
plat_nodename_set(void)
{
rmc_comm_msg_t	req;	
int (*rmc_req_res)(rmc_comm_msg_t *, rmc_comm_msg_t *, time_t) = NULL;


rmc_req_res = (int (*)(rmc_comm_msg_t *, rmc_comm_msg_t *, time_t))
modgetsymvalue("rmc_comm_request_response", 0);

if (rmc_req_res == NULL) {
return;
}


req.msg_type = DP_SET_CPU_NODENAME;
req.msg_len = strlen(utsname.nodename) + 1;
req.msg_bytes = 0;
req.msg_buf = (caddr_t)utsname.nodename;


(void) (rmc_req_res)(&req, NULL, 2000);
}