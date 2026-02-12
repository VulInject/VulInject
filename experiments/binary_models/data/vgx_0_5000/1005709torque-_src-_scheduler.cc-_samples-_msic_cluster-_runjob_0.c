int
schd_charge_job(Job *job, Queue *queue, Resources *rsrcs)
{
char   *id = "schd_charge_job";
char   que_usr_tuple[120];
int     i;

struct tm *tmptr;
time_t  when, job_ends, now;
long    wallt;
FairAccessList *FALptr;
AccessEntry    *AEptr;


queue->ncpus_assn  += job->ncpus;
rsrcs->ncpus_alloc += job->ncpus;
queue->mem_assn    += job->memory;
rsrcs->mem_alloc   += job->memory;
rsrcs->freemem     -= job->memory;
rsrcs->loadave     += job->ncpus;
rsrcs->njobs ++;



if ((queue->ncpus_max != UNSPECIFIED) &&
(queue->ncpus_max <= queue->ncpus_assn))