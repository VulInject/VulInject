Resources *
schd_get_resources(char *exechost)
{
char   *id = "schd_get_resources";
Resources *rptr, *new_rsrcs;
int     rm;

char   *response;
int     badreply   = 0;
int     cpus_avail = 0;
int     cpus_tot   = 0;
int     local_errno = 0;

struct sigaction act, oact;

unsigned int remain; 
time_t then;  



if (schd_RsrcsList != NULL)
{
for (rptr = schd_RsrcsList; rptr != NULL; rptr = rptr->next)
if (strcmp(rptr->exechost, exechost) == 0)
return (rptr);
}

schd_timestamp("get_rsrcs");



if ((new_rsrcs = (Resources *)malloc(sizeof(Resources))) == NULL)
{
(void)sprintf(log_buffer, "Unable to alloc space for Resources.");
log_record(PBSEVENT_SYSTEM, PBS_EVENTCLASS_SERVER, id, log_buffer);
DBPRT(("%s: %s\n", id, log_buffer));

return (NULL); 
}

memset((void *)new_rsrcs, 0, sizeof(Resources));