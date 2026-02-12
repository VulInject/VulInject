void js_std_init_handlers(JSRuntime *rt)
{
JSThreadState *ts;

ts = malloc(sizeof(*ts));
if (!ts) {
fprintf(stderr, "Could not allocate memory for the worker");
exit(1);
}
memset(ts, 0, sizeof(*ts));
init_list_head(&ts->os_rw_handlers);
init_list_head(&ts->os_signal_handlers);
init_list_head(&ts->os_timers);
init_list_head(&ts->port_list);

JS_SetRuntimeOpaque(rt, ts);


{
JSSharedArrayBufferFunctions sf;
memset(&sf, 0, sizeof(sf));
sf.sab_alloc = js_sab_alloc;
sf.sab_free = js_sab_free;
sf.sab_dup = js_sab_dup;
JS_SetSharedArrayBufferFunctions(rt, &sf);
}
}