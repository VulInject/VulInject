extern int preempt_p_get_data(job_record_t *job_ptr,
slurm_preempt_data_type_t data_type,
void *data)
{
int rc = SLURM_SUCCESS;

switch (data_type) {
case PREEMPT_DATA_ENABLED:
(*(bool *)data) = slurm_conf.preempt_mode != PREEMPT_MODE_OFF;
break;
case PREEMPT_DATA_MODE:
(*(uint16_t *)data) = _job_preempt_mode(job_ptr);
break;
case PREEMPT_DATA_PRIO:
(*(uint32_t *)data) = _gen_job_prio(job_ptr);
break;
case PREEMPT_DATA_GRACE_TIME:
(*(uint32_t *)data) = _get_grace_time(job_ptr);
break;
default:
error("%s: unknown enum %d", __func__, data_type);
rc = SLURM_ERROR;
break;

}
return rc;
}