mod_authn_dbi_basic (request_st * const r, void *p_d, const http_auth_require_t * const require, const buffer * const username, const char * const pw)
{
handler_t rc;
http_auth_info_t ai;
ai.dalgo    = HTTP_AUTH_DIGEST_NONE;
ai.dlen     = 0;
ai.username = username->ptr;
ai.ulen     = buffer_clen(username);
ai.realm    = require->realm->ptr;
ai.rlen     = buffer_clen(require->realm);
ai.userhash = 0;
rc = mod_authn_dbi_query(r, p_d, &ai, pw);
if (HANDLER_GO_ON != rc) return rc;
return http_auth_match_rules(require, username->ptr, NULL, NULL)
? HANDLER_GO_ON  
: HANDLER_ERROR;
}