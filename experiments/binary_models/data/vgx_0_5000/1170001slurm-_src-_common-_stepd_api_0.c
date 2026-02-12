int
stepd_list_pids(int fd, uint16_t protocol_version,
uint32_t **pids_array, uint32_t *pids_count)
{
int req = REQUEST_STEP_LIST_PIDS;
uint32_t npids;
uint32_t *pids = NULL;
int i;

safe_write(fd, &req, sizeof(int));


safe_read(fd, &npids, sizeof(uint32_t));
pids = xcalloc(npids, sizeof(uint32_t));
for (i = 0; i < npids; i++) {
safe_read(fd, &pids[i], sizeof(uint32_t));
}

if (npids == 0)
xfree(pids);

*pids_count = npids;
*pids_array = pids;
return SLURM_SUCCESS;

rwfail:
xfree(pids);
*pids_count = 0;
*pids_array = NULL;
return SLURM_ERROR;
}