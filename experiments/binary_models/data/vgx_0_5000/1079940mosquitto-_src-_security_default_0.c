int mosquitto_psk_key_get_default(struct mosquitto *context, const char *hint, const char *identity, char *key, int max_key_len)
{
struct mosquitto__unpwd *u, *tmp = NULL;
struct mosquitto__unpwd *psk_id_ref = NULL;

if(!hint || !identity || !key) return MOSQ_ERR_INVAL;

if(db.config->per_listener_settings){
if(!context->listener) return MOSQ_ERR_INVAL;
psk_id_ref = context->listener->security_options.psk_id;
}else{
psk_id_ref = db.config->security_options.psk_id;
}
if(!psk_id_ref) return MOSQ_ERR_PLUGIN_DEFER;

HASH_ITER(hh, psk_id_ref, u, tmp){
if(!strcmp(u->username, identity)){
strncpy(key, u->password, (size_t)max_key_len);
return MOSQ_ERR_SUCCESS;
}
}

return MOSQ_ERR_AUTH;
}