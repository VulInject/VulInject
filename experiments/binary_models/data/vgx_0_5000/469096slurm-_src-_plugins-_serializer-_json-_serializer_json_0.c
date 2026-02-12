extern int serialize_p_string_to_data(data_t **dest, const char *src,
size_t length)
{
json_object *jobj = NULL;
data_t *data = NULL;
struct json_tokener *tok = json_tokener_new();

if (!tok)
return ENOMEM;

if (!src)
return ESLURM_DATA_PTR_NULL;


if (length >= INT32_MAX) {
error("%s: unable to parse JSON: too large",
__func__);
return ESLURM_DATA_TOO_LARGE;
}

jobj = _try_parse(src, length, tok);
if (jobj) {
data = _json_to_data(jobj, NULL);
json_object_put(jobj);
}

json_tokener_free(tok);

*dest = data;
return SLURM_SUCCESS;
}