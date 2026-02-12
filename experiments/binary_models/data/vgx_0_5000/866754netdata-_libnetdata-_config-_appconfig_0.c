static inline struct config_option *appconfig_value_create(struct section *co, const char *name, const char *value) {
debug(D_CONFIG, "Creating config entry for name '%s', value '%s', in section '%s'.", name, value, co->name);

struct config_option *cv = callocz(1, sizeof(struct config_option));
cv->name = strdupz(name);
cv->hash = simple_hash(cv->name);
cv->value = strdupz(value);

struct config_option *found = appconfig_option_index_add(co, cv);
if(found != cv) {
error("indexing of config '%s' in section '%s': already exists - using the existing one.", cv->name, co->name);
freez(cv->value);
freez(cv->name);
freez(cv);
return found;
}

config_section_wrlock(co);
struct config_option *cv2 = co->values;
if(cv2) {
while (cv2->next) cv2 = cv2->next;
cv2->next = cv;
}
else co->values = cv;
config_section_unlock(co);

return cv;
}