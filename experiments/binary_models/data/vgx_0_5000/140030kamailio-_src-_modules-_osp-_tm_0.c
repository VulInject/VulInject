static void ospTmcbFunc(
struct cell* t, 
int type, 
struct tmcb_params* ps)
{
if (type & TMCB_RESPONSE_OUT) {
LM_DBG("RESPONSE_OUT\n");
} else if (type & TMCB_E2EACK_IN) {
LM_DBG("E2EACK_IN\n");
} else if (type & TMCB_ON_FAILURE_RO) {
LM_DBG("FAILURE_RO\n");
} else if (type & TMCB_RESPONSE_IN) {
LM_DBG("RESPONSE_IN\n");
} else if (type & TMCB_REQUEST_FWDED) {
LM_DBG("REQUEST_FWDED\n");
} else if (type & TMCB_RESPONSE_FWDED) {
LM_DBG("RESPONSE_FWDED\n");
} else if (type & TMCB_ON_FAILURE) {
LM_DBG("FAILURE\n");
} else if (type & TMCB_LOCAL_COMPLETED) {
LM_DBG("COMPLETED\n");
} else {
LM_DBG("something else '%d'\n", type);
}

if (t) {
ospRecordEvent(t->uac[t->nr_of_outgoings - 1].last_received,
t->uas.status);
} else {
LM_DBG("cell is empty\n");
}
}