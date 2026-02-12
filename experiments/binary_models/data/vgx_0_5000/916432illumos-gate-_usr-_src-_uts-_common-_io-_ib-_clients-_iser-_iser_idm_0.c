static kv_status_t
iser_handle_boolean(nvpair_t *nvp, boolean_t value, const idm_kv_xlate_t *ikvx,
boolean_t iser_value, nvlist_t *request_nvl, nvlist_t *response_nvl,
nvlist_t *negotiated_nvl)
{
kv_status_t		kvrc = KV_UNHANDLED;
int			nvrc;
boolean_t		respond = B_FALSE;

if (value != iser_value) {

value = iser_value;
nvrc = nvlist_add_boolean_value(negotiated_nvl,
ikvx->ik_key_name, value);
if (nvrc == 0) {
kvrc = KV_HANDLED_NO_TRANSIT;
respond = B_TRUE;
}

} else {

nvrc = nvlist_add_nvpair(negotiated_nvl, nvp);

respond = (ikvx->ik_declarative == B_FALSE);
}


if (nvrc == 0 && respond) {
nvrc = nvlist_add_boolean_value(response_nvl,
ikvx->ik_key_name, value);

(void) nvlist_remove_all(request_nvl, ikvx->ik_key_name);
}

if (kvrc == KV_HANDLED_NO_TRANSIT) {
return (kvrc);
}

return (idm_nvstat_to_kvstat(nvrc));
}