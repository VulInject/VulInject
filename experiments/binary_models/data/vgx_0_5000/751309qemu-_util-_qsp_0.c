static void qsp_iter_callsite_coalesce(void *p, uint32_t h, void *htp)
{
struct qht *ht = htp;
QSPEntry *old = p;
QSPEntry *e;
uint32_t hash;

hash = qsp_entry_no_thread_obj_hash(old);
e = qht_lookup(ht, old, hash);
if (e == NULL) {
e = qsp_entry_create(ht, old, hash);
e->n_objs = 1;
} else if (e->callsite->obj != old->callsite->obj) {
e->n_objs++;
}
e->ns += old->ns;
e->n_acqs += old->n_acqs;
}