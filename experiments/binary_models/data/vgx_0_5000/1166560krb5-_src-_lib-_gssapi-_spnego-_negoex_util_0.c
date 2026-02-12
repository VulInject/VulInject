void
negoex_common_auth_schemes(spnego_gss_ctx_id_t ctx,
const uint8_t *schemes, uint16_t nschemes)
{
struct negoex_mech_list list;
struct negoex_auth_mech *mech;
uint16_t i;


K5_TAILQ_INIT(&list);
for (i = 0; i < nschemes; i++) {
mech = negoex_locate_auth_scheme(ctx, schemes + i * GUID_LENGTH);
if (mech == NULL)
continue;
K5_TAILQ_REMOVE(&ctx->negoex_mechs, mech, links);
K5_TAILQ_INSERT_TAIL(&list, mech, links);
}


release_all_mechs(ctx);
K5_TAILQ_CONCAT(&ctx->negoex_mechs, &list, links);
}