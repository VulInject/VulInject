
static	void	iscsi_threads_entry(void *arg);


iscsi_thread_t *
iscsi_thread_create(dev_info_t *dip, char *name,
iscsi_thread_ep_t entry_point, void *arg)
{
iscsi_thread_t		*thread;

thread = kmem_zalloc(sizeof (iscsi_thread_t), KM_SLEEP);

if (thread != NULL) {

thread->tq = ddi_taskq_create(dip, name, 1,
TASKQ_DEFAULTPRI, 0);

if (thread->tq != NULL) {
thread->signature	= SIG_ISCSI_THREAD;
thread->dip		= dip;
thread->entry_point	= entry_point;
thread->arg		= arg;
thread->state		= ISCSI_THREAD_STATE_STOPPED;
thread->sign.bitmap	= 0;
mutex_init(&thread->mgnt.mtx, NULL, MUTEX_DRIVER, NULL);
mutex_init(&thread->sign.mtx, NULL, MUTEX_DRIVER, NULL);
cv_init(&thread->sign.cdv, NULL, CV_DRIVER, NULL);
} else {
kmem_free(thread, sizeof (iscsi_thread_t));
thread = NULL;
}
}

return (thread);
}