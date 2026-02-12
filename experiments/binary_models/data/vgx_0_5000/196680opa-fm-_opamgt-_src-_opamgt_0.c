OMGT_STATUS_T omgt_open_port(struct omgt_port **port, char *hfi_name, uint8_t port_num, struct omgt_params *session_params)
{
OMGT_STATUS_T status;
struct omgt_port *rc;

if ((rc = calloc(1, sizeof(*rc))) == NULL)
return (OMGT_STATUS_INSUFFICIENT_MEMORY);

if (session_params) {
rc->dbg_file = session_params->debug_file;
rc->error_file = session_params->error_file;
} else {
rc->dbg_file = NULL;
rc->error_file = NULL;
}

status = omgt_open_port_internal(rc, hfi_name, port_num);
if (status == OMGT_STATUS_SUCCESS) {
rc->is_oob_enabled = FALSE;
*port = rc;
} else {
free(rc);
*port = NULL;
}

return status;
}