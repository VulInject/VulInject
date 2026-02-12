extern int task_p_post_term (stepd_step_rec_t *step,
stepd_step_task_info_t *task)
{
int rc = SLURM_SUCCESS;
DEF_TIMERS;

START_TIMER;

debug("%s: %ps, task %d", __func__, &step->step_id, task->id);

if (track_status) {
rc = _check_status_file(step, task);
}
END_TIMER;
if (slurm_conf.debug_flags & DEBUG_FLAG_TIME_CRAY)
INFO_LINE("call took: %s", TIME_STR);
return rc;
}