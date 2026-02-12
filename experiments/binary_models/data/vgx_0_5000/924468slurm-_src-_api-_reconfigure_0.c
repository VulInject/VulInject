extern int slurm_set_fs_dampeningfactor (uint16_t factor)
{
int rc;
slurm_msg_t req_msg;
slurm_msg_t resp_msg;
set_fs_dampening_factor_msg_t req;

slurm_msg_t_init(&req_msg);
slurm_msg_t_init(&resp_msg);

memset(&req, 0, sizeof(req));
req.dampening_factor  = factor;
req_msg.msg_type = REQUEST_SET_FS_DAMPENING_FACTOR;
req_msg.data     = &req;

if (slurm_send_recv_controller_msg(&req_msg, &resp_msg,
working_cluster_rec) < 0)
return SLURM_ERROR;

switch (resp_msg.msg_type) {
case RESPONSE_SLURM_RC:
rc = ((return_code_msg_t *) resp_msg.data)->return_code;
slurm_free_return_code_msg(resp_msg.data);
if (rc)
slurm_seterrno_ret(rc);
break;
default:
slurm_seterrno_ret(SLURM_UNEXPECTED_MSG_ERROR);
break;
}
return SLURM_SUCCESS;
}