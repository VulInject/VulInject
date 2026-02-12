static void rrddimvar_insert_callback(const DICTIONARY_ITEM *item __maybe_unused, void *rrddimvar, void *constructor_data) {
RRDDIMVAR *rs = rrddimvar;
struct rrddimvar_constructor *ctr = constructor_data;

if(!ctr->prefix) ctr->prefix = "";
if(!ctr->suffix) ctr->suffix = "";

rs->prefix = string_strdupz(ctr->prefix);
rs->suffix = string_strdupz(ctr->suffix);

rs->type = ctr->type;
rs->value = ctr->value;
rs->flags = ctr->flags;
rs->rrddim = ctr->rrddim;

rrddimvar_update_variables_unsafe(rs);
}