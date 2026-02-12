int
xfs_pwork_init(
struct xfs_mount	*mp,
struct xfs_pwork_ctl	*pctl,
xfs_pwork_work_fn	work_fn,
const char		*tag)
{
unsigned int		nr_threads = 0;

if (xfs_globals.pwork_threads >= 0)
nr_threads = xfs_globals.pwork_threads;
trace_xfs_pwork_init(mp, nr_threads, current->pid);

pctl->wq = alloc_workqueue("%s-%d",
WQ_UNBOUND | WQ_SYSFS | WQ_FREEZABLE, nr_threads, tag,
current->pid);
if (!pctl->wq)
return -ENOMEM;
pctl->work_fn = work_fn;
pctl->error = 0;
pctl->mp = mp;
atomic_set(&pctl->nr_work, 0);
init_waitqueue_head(&pctl->poll_wait);

return 0;
}