static void
store_entry(u_int32_t type, void *this_fn, void *call_site)
{
if (!log) { 
assert(init_log(RINGLOG_FNAME, RINGLOG_ILEN) == 0);
store_entry(RINGLOG_INIT, 0, 0); 
}

if (++(rl_last(log)) >= log_length) 
rl_last(log) = 0; 

if (rl_first(log) == rl_last(log)) { 
if (++(rl_first(log)) >= log_length) 
rl_first(log) = 0;
} else if (rl_first(log) == (u_int16_t)-1) 
rl_first(log) = 0;

rl_type(log, rl_last(log)) = type; 
rl_func(log, rl_last(log)) = this_fn;
rl_call(log, rl_last(log)) = call_site;
}