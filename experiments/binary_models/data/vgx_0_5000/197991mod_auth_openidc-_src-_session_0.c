static apr_byte_t oidc_session_load_cache(request_rec *r, oidc_session_t *z) {
oidc_cfg *c = ap_get_module_config(r->server->module_config, &auth_openidc_module);

apr_byte_t rc = FALSE;


char *uuid = oidc_util_get_cookie(r, oidc_cfg_dir_cookie(r));


if (uuid != NULL) {

rc = oidc_session_load_cache_by_uuid(r, c, uuid, z);


if (rc == FALSE) {
oidc_error(r, "cache backend failure for key %s", uuid);
return FALSE;
}


if (z->state == NULL) {

oidc_util_set_cookie(r, oidc_cfg_dir_cookie(r), "", 0, OIDC_COOKIE_EXT_SAME_SITE_NONE(c, r));
}
}

return rc;
}