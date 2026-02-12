static void smi_event_handler(ipmi_con_t __attribute__((unused)) * ipmi,
const ipmi_addr_t __attribute__((unused)) * addr,
unsigned int __attribute__((unused)) addr_len,
ipmi_event_t *event, void *cb_data) {
unsigned int type = ipmi_event_get_type(event);
ipmi_domain_t *domain = cb_data;

DEBUG("%s: Event received: type %u", __FUNCTION__, type);

if (type != 0x02)

return;


ipmi_domain_reread_sels(domain, NULL, NULL);
}