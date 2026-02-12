static int latency_config_add_bucket(latency_config_t *conf,
oconfig_item_t *ci) {
if ((ci->values_num != 2) || (ci->values[0].type != OCONFIG_TYPE_NUMBER) ||
(ci->values[1].type != OCONFIG_TYPE_NUMBER)) {
P_ERROR("\"%s\" requires exactly two numeric arguments.", ci->key);
return EINVAL;
}

if (ci->values[1].value.number &&
ci->values[1].value.number <= ci->values[0].value.number) {
P_ERROR("MIN must be less than MAX in \"%s\".", ci->key);
return ERANGE;
}

if (ci->values[0].value.number < 0) {
P_ERROR("MIN must be greater then or equal to zero in \"%s\".", ci->key);
return ERANGE;
}

latency_bucket_t *tmp =
realloc(conf->buckets, sizeof(*conf->buckets) * (conf->buckets_num + 1));
if (tmp == NULL) {
P_ERROR("realloc failed.");
return ENOMEM;
}
conf->buckets = tmp;
conf->buckets[conf->buckets_num].lower_bound =
DOUBLE_TO_CDTIME_T(ci->values[0].value.number);
conf->buckets[conf->buckets_num].upper_bound =
DOUBLE_TO_CDTIME_T(ci->values[1].value.number);
conf->buckets_num++;

return 0;
} 