static void dnsFoundCallback(
const char *hostname, 
ip_addr_t *ipAddr,    
void *arg             
) {
jsWarn("Wifi.getHostByName CB - %s %x", hostname, ipAddr );
if (g_jsHostByNameCallback != NULL) {
JsVar *params[1];
if (ipAddr == NULL) {
params[0] = jsvNewNull();
} else {
params[0] = networkGetAddressAsString((uint8_t *)&ipAddr, 4, 10, '.');
}
jsiQueueEvents(NULL, g_jsHostByNameCallback, params, 1);
jsvUnLock(params[0]);
jsvUnLock(g_jsHostByNameCallback);
g_jsHostByNameCallback = NULL;
}
}