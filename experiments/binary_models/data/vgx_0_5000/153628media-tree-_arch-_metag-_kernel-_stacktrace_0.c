void save_stack_trace_tsk(struct task_struct *tsk, struct stack_trace *trace)
{
struct stack_trace_data data;
struct stackframe frame;

data.trace = trace;
data.skip = trace->skip;

if (tsk != current) {

if (trace->nr_entries < trace->max_entries)
trace->entries[trace->nr_entries++] = ULONG_MAX;
return;
data.no_sched_functions = 1;
frame.fp = thread_saved_fp(tsk);
frame.sp = thread_saved_sp(tsk);
frame.lr = 0;		
frame.pc = thread_saved_pc(tsk);
} else {
register unsigned long current_sp asm ("A0StP");

data.no_sched_functions = 0;
frame.fp = (unsigned long)__builtin_frame_address(0);
frame.sp = current_sp;
frame.lr = (unsigned long)__builtin_return_address(0);
frame.pc = (unsigned long)save_stack_trace_tsk;
}

walk_stackframe(&frame, save_trace, &data);
if (trace->nr_entries < trace->max_entries)
trace->entries[trace->nr_entries++] = ULONG_MAX;
}