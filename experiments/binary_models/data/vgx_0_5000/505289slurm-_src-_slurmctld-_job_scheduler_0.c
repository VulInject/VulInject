static void *_start_prolog_slurmctld_thread(void *x)
{
slurmctld_lock_t node_write_lock = {
.conf = READ_LOCK, .job = WRITE_LOCK,
.node = WRITE_LOCK, .fed = READ_LOCK };
uint32_t *job_id = (uint32_t *) x;
job_record_t *job_ptr;

lock_slurmctld(node_write_lock);
if (!(job_ptr = find_job_record(*job_id))) {
error("%s: missing JobId=%u", __func__, *job_id);
unlock_slurmctld(node_write_lock);
return NULL;
}
prep_g_prolog_slurmctld(job_ptr);


if (!job_ptr->prep_prolog_cnt) {
debug2("%s: no async prolog_slurmctld running", __func__);
prolog_running_decr(job_ptr);
}

unlock_slurmctld(node_write_lock);
xfree(job_id);

return NULL;
}