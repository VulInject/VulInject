static int
detect_client_change(rcm_handle_t *hdl, int cmd, int flags, group_t *group,
char *rsrc)
{
int i;
int state;


for (i = 0; i < group->nphcis; i++) {


if (strcmp(group->phcis[i].path, rsrc) == 0)
continue;


if ((group->phcis[i].state == DI_PATH_STATE_ONLINE) ||
(group->phcis[i].state == DI_PATH_STATE_STANDBY)) {
if (rcm_get_rsrcstate(hdl, group->phcis[i].path, &state)
!= RCM_SUCCESS) {
rcm_log_message(RCM_ERROR,
"MPXIO: Failed to query resource state\n");
continue;
}
rcm_log_message(RCM_TRACE2, "MPXIO: state of %s: %d\n",
group->phcis[i].path, state);
if (state == RCM_STATE_ONLINE) {
return (0);
}
}
}


return (1);
}