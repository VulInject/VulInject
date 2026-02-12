bool mgos_event_register_base(int ev, const char *name) {
struct event *e;
SLIST_FOREACH(e, &s_events, next) {
if (e->ev == ev) {
LOG(LL_ERROR, ("conflicting event: %s", e->name));
return false;
}
}
e = calloc(1, sizeof(*e));
if (e == NULL) return false;
e->ev = ev;
e->name = name;
SLIST_INSERT_HEAD(&s_events, e, next);
return true;
}