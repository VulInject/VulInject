SFLPoller *sfl_agent_addPoller(SFLAgent *agent,
SFLDataSource_instance *pdsi,
void *magic,         
getCountersFn_t getCountersFn)
{

SFLPoller *prev = NULL, *pl = agent->pollers;
for(; pl != NULL; prev = pl, pl = pl->nxt) {
int64_t cmp = sfl_dsi_compare(pdsi, &pl->dsi);
if(cmp == 0) return pl;  
if(cmp < 0) break;       
}

{
SFLPoller *newpl = (SFLPoller *)sflAlloc(agent, sizeof(SFLPoller));
sfl_poller_init(newpl, agent, pdsi, magic, getCountersFn);
if(prev) prev->nxt = newpl;
else agent->pollers = newpl;
newpl->nxt = pl;
return newpl;
}
}