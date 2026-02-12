int
tcpedit_set_encoder_dltplugin_byid(tcpedit_t *tcpedit, int dlt)
{
tcpeditdlt_plugin_t *plugin;
tcpeditdlt_t *ctx;

assert(tcpedit);

ctx = tcpedit->dlt_ctx;
assert(ctx);

if (ctx->encoder) {
tcpedit_seterr(tcpedit, "You have already selected a DLT encoder: %s", ctx->encoder->name);
return TCPEDIT_ERROR;
}

plugin = tcpedit_dlt_getplugin(ctx, dlt);
if (plugin == NULL) {
tcpedit_seterr(tcpedit, "No output DLT plugin decoder with DLT type: 0x%04x", dlt);
return TCPEDIT_ERROR;
}

ctx->encoder = plugin;


if (ctx->encoder->dlt != ctx->decoder->dlt) {
if (ctx->encoder->plugin_init(ctx) != TCPEDIT_OK) {

return TCPEDIT_ERROR;
}
}

return TCPEDIT_OK;
}