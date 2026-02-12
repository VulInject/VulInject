static int label_to_buffer_callback(const DICTIONARY_ITEM *item, void *value, void *data) {
const char *name = dictionary_acquired_item_name(item);
struct labels_to_buffer *t = (struct labels_to_buffer *)data;
RRDLABEL *lb = (RRDLABEL *)value;

size_t n_size = (t->name_sanitizer ) ? ( RRDLABELS_MAX_NAME_LENGTH  * 2 ) : 1;
size_t v_size = (t->value_sanitizer) ? ( RRDLABELS_MAX_VALUE_LENGTH * 2 ) : 1;

char n[n_size];
char v[v_size];

const char *nn = name, *vv = string2str(lb->label_value);

if(t->name_sanitizer) {
t->name_sanitizer(n, name, n_size);
nn = n;
}

if(t->value_sanitizer) {
t->value_sanitizer(v, string2str(lb->label_value), v_size);
vv = v;
}

if(!t->filter_callback || t->filter_callback(name, string2str(lb->label_value), lb->label_source, t->filter_data)) {
buffer_sprintf(t->wb, "%s%s%s%s%s%s%s%s%s", t->count++?t->between_them:"", t->before_each, t->quote, nn, t->quote, t->equal, t->quote, vv, t->quote);
return 1;
}

return 0;
}