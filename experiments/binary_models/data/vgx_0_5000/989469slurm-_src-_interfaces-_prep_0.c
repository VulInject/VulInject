extern void prep_g_epilog_slurmctld(job_record_t *job_ptr)
{
DEF_TIMERS;
int rc = SLURM_SUCCESS;

START_TIMER;

xassert(g_context_cnt >= 0);
slurm_rwlock_rdlock(&g_context_lock);
for (int i = 0; ((i < g_context_cnt) && (rc == SLURM_SUCCESS)); i++) {
bool async = false;

rc = (*(ops[i].epilog_slurmctld))(job_ptr, &async);

if (async)
job_ptr->prep_epilog_cnt++;
}

if (job_ptr->prep_epilog_cnt)
job_ptr->epilog_running = true;

slurm_rwlock_unlock(&g_context_lock);
END_TIMER2(__func__);
}