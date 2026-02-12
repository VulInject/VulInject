static void p_state_change(struct timechart *tchart, int cpu, u64 timestamp, u64 new_freq)
{
struct power_event *pwr;

if (new_freq > 8000000) 
return;

pwr = zalloc(sizeof(*pwr));
if (!pwr)
return;

pwr->state = cpus_pstate_state[cpu];
pwr->start_time = cpus_pstate_start_times[cpu];
pwr->end_time = timestamp;
pwr->cpu = cpu;
pwr->type = PSTATE;
pwr->next = tchart->power_events;

if (!pwr->start_time)
pwr->start_time = tchart->first_time;

tchart->power_events = pwr;

cpus_pstate_state[cpu] = new_freq;
cpus_pstate_start_times[cpu] = timestamp;

if ((u64)new_freq > tchart->max_freq)
tchart->max_freq = new_freq;

if (new_freq < tchart->min_freq || tchart->min_freq == 0)
tchart->min_freq = new_freq;

if (new_freq == tchart->max_freq - 1000)
tchart->turbo_frequency = tchart->max_freq;
}