char *json_tr_set_crt_buffer(void)
{
_json_tr_buffer = _json_tr_buffer_list[_json_tr_buffer_idx];
_json_tr_buffer_idx = (_json_tr_buffer_idx + 1) % JSON_TR_BUFFER_SLOTS;
return _json_tr_buffer;
}

do {                                                 \
if(val->rs.len > JSON_TR_BUFFER_SIZE - 1) {       \
LM_ERR("result is too big\n");               \
return -1;                                   \
}                                                \
strncpy(_json_tr_buffer, val->rs.s, val->rs.len); \
val->rs.s = _json_tr_buffer;                      \
} while(0);

void json_destroy_pv_value(pv_value_t *val)
{
if(val->flags & PV_VAL_PKG)
pkg_free(val->rs.s);
else if(val->flags & PV_VAL_SHM)
shm_free(val->rs.s);
pkg_free(val);
}