extern int switch_p_job_step_pre_resume(stepd_step_rec_t *step)
{
info("switch_p_job_step_pre_resume(%ps)", &step->step_id);
slurm_cray_jobinfo_t *jobinfo = step->switch_job ?
(slurm_cray_jobinfo_t *)step->switch_job->data : NULL;
char *err_msg = NULL;
int rc;
DEF_TIMERS;

START_TIMER;

rc = alpsc_pre_resume(&err_msg, step->cont_id, jobinfo->ptags,
jobinfo->num_ptags);
ALPSC_CN_DEBUG("alpsc_pre_resume");
if (rc != 1) {
return SLURM_ERROR;
}
END_TIMER;
if (slurm_conf.debug_flags & DEBUG_FLAG_TIME_CRAY)
INFO_LINE("call took: %s", TIME_STR);
return SLURM_SUCCESS;
}