static void receive_rcom_lookup(struct dlm_ls *ls, struct dlm_rcom *rc_in)
{
struct dlm_rcom *rc;
struct dlm_mhandle *mh;
int error, ret_nodeid, nodeid = rc_in->rc_header.h_nodeid;
int len = rc_in->rc_header.h_length - sizeof(struct dlm_rcom);

error = create_rcom(ls, nodeid, DLM_RCOM_LOOKUP_REPLY, 0, &rc, &mh);
if (error)
return;

if (rc_in->rc_id == 0xFFFFFFFF) {
log_error(ls, "receive_rcom_lookup dump from %d", nodeid);
dlm_dump_rsb_name(ls, rc_in->rc_buf, len);
return;
}

error = dlm_master_lookup(ls, nodeid, rc_in->rc_buf, len,
DLM_LU_RECOVER_MASTER, &ret_nodeid, NULL);
if (error)
ret_nodeid = error;
rc->rc_result = ret_nodeid;
rc->rc_id = rc_in->rc_id;
rc->rc_seq_reply = rc_in->rc_seq;

send_rcom(ls, mh, rc);
}