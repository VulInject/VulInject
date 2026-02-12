static thread_t getcurthread(RDebug *dbg) {
thread_t th;
thread_array_t threads = NULL;
unsigned int n_threads = 0;
task_t t = pid_to_task (dbg->pid);
if (!t) {
return -1;
}
if (task_threads (t, &threads, &n_threads) != KERN_SUCCESS) {
return -1;
}
if (n_threads > 0) {
memcpy (&th, threads, sizeof (th));
} else {
th = -1;
}
vm_deallocate (t, (vm_address_t)threads, n_threads * sizeof (thread_act_t));
return th;
}