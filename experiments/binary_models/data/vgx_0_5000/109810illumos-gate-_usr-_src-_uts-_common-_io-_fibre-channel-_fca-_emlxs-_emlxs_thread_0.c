void
emlxs_thread_spawn(emlxs_hba_t *hba, void (*func) (), void *arg1, void *arg2)
{
emlxs_port_t	*port = &PPORT;
emlxs_thread_t	*ethread;


ethread = (emlxs_thread_t *)kmem_alloc(sizeof (emlxs_thread_t),
KM_NOSLEEP);

if (ethread == NULL) {
EMLXS_MSGF(EMLXS_CONTEXT, &emlxs_mem_alloc_failed_msg,
"Unable to allocate thread object.");

return;
}

bzero(ethread, sizeof (emlxs_thread_t));
ethread->hba = hba;
ethread->flags = EMLXS_THREAD_INITD | EMLXS_THREAD_RUN_ONCE;
ethread->func = func;
ethread->arg1 = arg1;
ethread->arg2 = arg2;


mutex_enter(&EMLXS_SPAWN_LOCK);


if (hba->spawn_open == 0) {
mutex_exit(&EMLXS_SPAWN_LOCK);


kmem_free(ethread, sizeof (emlxs_thread_t));
return;
}

if (hba->spawn_thread_head == NULL) {
hba->spawn_thread_head = ethread;
}
else
{
hba->spawn_thread_tail->next = ethread;
ethread->prev = hba->spawn_thread_tail;
}

hba->spawn_thread_tail = ethread;
mutex_exit(&EMLXS_SPAWN_LOCK);

(void) thread_create(NULL, 0, &emlxs_thread, (char *)ethread, 0, &p0,
TS_RUN, v.v_maxsyspri - 2);

} 