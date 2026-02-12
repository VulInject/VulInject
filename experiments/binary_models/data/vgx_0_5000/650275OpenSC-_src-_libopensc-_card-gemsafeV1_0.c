static int get_conf_aid(sc_card_t *card, u8 *aid, size_t *len)
{
sc_context_t		*ctx = card->ctx;
scconf_block		*conf_block, **blocks;
int			i;
const char		*str_aid;

SC_FUNC_CALLED(ctx, SC_LOG_DEBUG_VERBOSE);

conf_block = NULL;
for (i = 0; ctx->conf_blocks[i] != NULL; i++) {
blocks = scconf_find_blocks(ctx->conf, ctx->conf_blocks[i],
"card", "gemsafeV1");
if (blocks != NULL && blocks[0] != NULL)
conf_block = blocks[0];
free(blocks);
}

if (!conf_block) {
sc_log(ctx,  "no card specific options configured, trying default AID\n");
return SC_ERROR_INTERNAL;
}

str_aid = scconf_get_str(conf_block, "aid", NULL);
if (!str_aid) {
sc_log(ctx,  "no aid configured, trying default AID\n");
return SC_ERROR_INTERNAL;
}
return sc_hex_to_bin(str_aid, aid, len);
}