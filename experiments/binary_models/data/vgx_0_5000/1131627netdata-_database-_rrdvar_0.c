static void rrdvar_insert_callback(const DICTIONARY_ITEM *item __maybe_unused, void *rrdvar, void *constructor_data) {
RRDVAR *rv = rrdvar;
struct rrdvar_constructor *ctr = constructor_data;

ctr->options &= ~RRDVAR_OPTIONS_REMOVED_ON_NEW_OBJECTS;

rv->name = string_dup(ctr->name);
rv->type = ctr->type;
rv->flags = ctr->options;

if(!ctr->value) {
NETDATA_DOUBLE *v = mallocz(sizeof(NETDATA_DOUBLE));
*v = NAN;
rv->value = v;
rv->flags |= RRDVAR_FLAG_ALLOCATED;
}
else
rv->value = ctr->value;

ctr->react_action = RRDVAR_REACT_NEW;
}