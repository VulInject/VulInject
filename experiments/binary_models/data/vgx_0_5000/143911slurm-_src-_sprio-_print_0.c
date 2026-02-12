int _print_job_priority_normalized(priority_factors_object_t * job, int width,
bool right, char* suffix)
{
char temp[FORMAT_STRING_SIZE];
if (job == NULL)	
_print_str("PRIORITY", width, right, true);
else if (job == (priority_factors_object_t *) -1)
_print_str("", width, right, true);
else if (job->direct_prio > 0) {
sprintf(temp, "%16.14f", job->direct_prio);
_print_str(temp, width, right, true);
} else {
double priority = get_priority_from_factors(job);
double prio = priority / (double) ((uint32_t) 0xffffffff);

sprintf(temp, "%16.14f", prio);
_print_str(temp, width, right, true);
}
if (suffix)
printf("%s", suffix);
return SLURM_SUCCESS;
}