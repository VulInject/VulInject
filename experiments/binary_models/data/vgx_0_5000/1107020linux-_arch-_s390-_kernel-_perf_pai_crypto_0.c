static void paicrypt_event_destroy(struct perf_event *event)
{
struct paicrypt_map *cpump = per_cpu_ptr(&paicrypt_map, event->cpu);

cpump->event = NULL;
static_branch_dec(&pai_key);
mutex_lock(&pai_reserve_mutex);
debug_sprintf_event(cfm_dbg, 5, "%s event %#llx cpu %d users %d"
" mode %d refcnt %d\n", __func__,
event->attr.config, event->cpu,
cpump->active_events, cpump->mode, cpump->refcnt);
if (!--cpump->refcnt) {
debug_sprintf_event(cfm_dbg, 4, "%s page %#lx save %p\n",
__func__, (unsigned long)cpump->page,
cpump->save);
free_page((unsigned long)cpump->page);
cpump->page = NULL;
kvfree(cpump->save);
cpump->save = NULL;
cpump->mode = PAI_MODE_NONE;
}
mutex_unlock(&pai_reserve_mutex);
}