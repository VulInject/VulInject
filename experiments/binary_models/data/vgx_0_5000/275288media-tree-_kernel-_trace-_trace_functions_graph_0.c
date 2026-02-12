static void print_lat_header(struct seq_file *s, u32 flags)
{
static const char spaces[] = "                "	
"    "					
"                 ";			
int size = 0;

if (flags & TRACE_GRAPH_PRINT_ABS_TIME)
size += 16;
if (flags & TRACE_GRAPH_PRINT_CPU)
size += 4;
if (flags & TRACE_GRAPH_PRINT_PROC)
size += 17;

seq_printf(s, "#%.*s  _-----=> irqs-off        \n", size, spaces);
seq_printf(s, "#%.*s / _----=> need-resched    \n", size, spaces);
seq_printf(s, "#%.*s| / _---=> hardirq/softirq \n", size, spaces);
seq_printf(s, "#%.*s|| / _--=> preempt-depth   \n", size, spaces);
seq_printf(s, "#%.*s||| /                      \n", size, spaces);
}