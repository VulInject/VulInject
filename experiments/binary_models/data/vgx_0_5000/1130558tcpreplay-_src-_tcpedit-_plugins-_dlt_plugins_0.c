int
tcpedit_dlt_l2len(tcpeditdlt_t *ctx, int dlt, const u_char *packet, const int pktlen)
{
tcpeditdlt_plugin_t *plugin;
int res;

assert(ctx);
assert(dlt >= 0);
assert(packet);

if ((plugin = tcpedit_dlt_getplugin(ctx, dlt)) == NULL) {
tcpedit_seterr(ctx->tcpedit, "Unable to find plugin for DLT 0x%04x", dlt);
return -1;        
}

res = plugin->plugin_l2len(ctx, packet, pktlen);
if (res == -1) {
tcpedit_seterr(ctx->tcpedit, "Packet length %d is to short to contain a layer 2 header for DLT 0x%04x",
pktlen, dlt);
return -1;
}

return res;
}