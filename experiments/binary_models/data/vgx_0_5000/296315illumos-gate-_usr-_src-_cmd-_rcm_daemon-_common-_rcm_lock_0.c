int
dr_req_lookup(int seq_num, char *rsrc)
{
int	i;
int	len;
int	base = (seq_num >> SEQ_NUM_SHIFT);
int	retval = RCM_FAILURE;

if (rsrc == NULL) {
return (RCM_FAILURE);
}

(void) mutex_lock(&rcm_req_lock);

for (i = 0; i < dr_req_list->n_req_max; i++) {


if ((dr_req_list->req[i].state == RCM_STATE_REMOVE) ||
((dr_req_list->req[i].seq_num >> SEQ_NUM_SHIFT) != base)) {
continue;
}


len = strlcpy(rsrc, dr_req_list->req[i].device, MAXPATHLEN);
if (len < MAXPATHLEN) {
retval = RCM_SUCCESS;
}
break;
}

(void) mutex_unlock(&rcm_req_lock);

return (retval);
}