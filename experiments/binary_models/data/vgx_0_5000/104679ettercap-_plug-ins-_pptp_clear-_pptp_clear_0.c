static int pptp_clear_init(void *dummy) 
{

(void) dummy;


if (EC_GBL_OPTIONS->unoffensive) {
INSTANT_USER_MSG("pptp_clear: plugin doesn't work in UNOFFENSIVE mode\n");
return PLUGIN_FINISHED;
}

USER_MSG("pptp_clear: plugin running...\n");

hook_add(HOOK_PACKET_LCP, &parse_lcp);
hook_add(HOOK_PACKET_ECP, &parse_ecp);
hook_add(HOOK_PACKET_IPCP, &parse_ipcp);
return PLUGIN_RUNNING;   
}