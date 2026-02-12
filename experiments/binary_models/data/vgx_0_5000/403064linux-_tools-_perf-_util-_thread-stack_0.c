int thread_stack__event(struct thread *thread, int cpu, u32 flags, u64 from_ip,
u64 to_ip, u16 insn_len, u64 trace_nr, bool callstack,
unsigned int br_stack_sz, bool mispred_all)
{
struct thread_stack *ts = thread__stack(thread, cpu);

if (!thread)
return -EINVAL;

if (!ts) {
ts = thread_stack__new(thread, cpu, NULL, callstack, br_stack_sz);
if (!ts) {
pr_warning("Out of memory: no thread stack\n");
return -ENOMEM;
}
ts->trace_nr = trace_nr;
ts->mispred_all = mispred_all;
}


if (trace_nr != ts->trace_nr) {
if (ts->trace_nr)
__thread_stack__flush(thread, ts);
ts->trace_nr = trace_nr;
}

if (br_stack_sz)
thread_stack__update_br_stack(ts, flags, from_ip, to_ip);


if (ts->crp || !callstack)
return 0;

if (flags & PERF_IP_FLAG_CALL) {
u64 ret_addr;

if (!to_ip)
return 0;
ret_addr = from_ip + insn_len;
if (ret_addr == to_ip)
return 0; 
return thread_stack__push(ts, ret_addr,
flags & PERF_IP_FLAG_TRACE_END);
} else if (flags & PERF_IP_FLAG_TRACE_BEGIN) {

thread_stack__pop(ts, to_ip);
thread_stack__pop_trace_end(ts);
} else if ((flags & PERF_IP_FLAG_RETURN) && from_ip) {
thread_stack__pop(ts, to_ip);
}

return 0;
}