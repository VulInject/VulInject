static enum crmd_fsa_input
handle_shutdown_request(xmlNode * stored_msg)
{


char *now_s = NULL;
const char *host_from = crm_element_value(stored_msg, F_CRM_HOST_FROM);

if (host_from == NULL) {

host_from = controld_globals.our_nodename;
}

crm_info("Creating shutdown request for %s (state=%s)", host_from,
fsa_state2string(controld_globals.fsa_state));
crm_log_xml_trace(stored_msg, "message");

now_s = pcmk__ttoa(time(NULL));
update_attrd(host_from, XML_CIB_ATTR_SHUTDOWN, now_s, NULL, FALSE);
free(now_s);


return I_NULL;
}