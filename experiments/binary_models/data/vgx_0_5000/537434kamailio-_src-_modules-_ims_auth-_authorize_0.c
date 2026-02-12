int proxy_authenticate(struct sip_msg* _m, char* _realm, char* _table) {
str srealm;
str stable;

if (_table == NULL) {
LM_ERR("invalid table parameter\n");
return -1;
}

stable.s = _table;
stable.len = strlen(stable.s);

if (get_str_fparam(&srealm, _m, (fparam_t*) _realm) < 0) {
LM_ERR("failed to get realm value\n");
return -1; 
}

if (srealm.len == 0) {
LM_ERR("invalid realm parameter - empty value\n");
return -1; 
}
LM_DBG("realm value [%.*s]\n", srealm.len, srealm.s);

return digest_authenticate(_m, &srealm, &stable, HDR_PROXYAUTH_T);
}