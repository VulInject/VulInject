int check_service_parents(service *svc)
{
servicesmember *temp_servicesmember = NULL;
int state = STATE_OK;

log_debug_info(DEBUGL_FUNCTIONS, 0, "check_service_parents()\n");


for(temp_servicesmember = svc->parents; temp_servicesmember; temp_servicesmember = temp_servicesmember->next) {
service *parent_service;


if ((parent_service = temp_servicesmember->service_ptr) == NULL) {
logit(NSLOG_RUNTIME_WARNING, TRUE, "Warning: service '%s' on host '%s' is NULL ptr\n",
temp_servicesmember->service_description, temp_servicesmember->host_name);
continue;
}

state = parent_service->last_hard_state;


if ((state == STATE_CRITICAL) || (state == STATE_UNKNOWN))
return DEPENDENCIES_FAILED;

if (check_service_parents(parent_service) != DEPENDENCIES_OK)
return DEPENDENCIES_FAILED;
}

return DEPENDENCIES_OK;
}