extern int reset_node_bitmap(void *void_job_ptr)
{
job_record_t *job_ptr = (job_record_t *) void_job_ptr;
job_resources_t *job_resrcs_ptr = job_ptr->job_resrcs;
int i;

if (!job_resrcs_ptr)
return SLURM_SUCCESS;

FREE_NULL_BITMAP(job_resrcs_ptr->node_bitmap);

if (job_resrcs_ptr->nodes &&
(node_name2bitmap(job_resrcs_ptr->nodes, false,
&job_resrcs_ptr->node_bitmap))) {
error("Invalid nodes (%s) for %pJ",
job_resrcs_ptr->nodes, job_ptr);
return SLURM_ERROR;
} else if (job_resrcs_ptr->nodes == NULL) {
job_resrcs_ptr->node_bitmap = bit_alloc(node_record_count);
}

i = bit_set_count(job_resrcs_ptr->node_bitmap);
if (job_resrcs_ptr->nhosts != i) {
error("Invalid change in resource allocation node count for %pJ, %u to %d",
job_ptr, job_resrcs_ptr->nhosts, i);
return SLURM_ERROR;
}
return SLURM_SUCCESS;
}