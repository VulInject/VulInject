static irqreturn_t cvm_oct_ciu_timer_interrupt(int cpl, void *dev_id)
{
u64 last_latency;
u64 last_int_cnt;

if (reset_stats) {
init_latency_info(&li, 0);
reset_stats = false;
} else {
last_int_cnt = read_c0_cvmcount();
last_latency = last_int_cnt - (li.timer_start1 + li.cpu_interval);
li.interrupt_cnt++;
li.latency_sum += last_latency;
if (last_latency > li.max_latency)
li.max_latency = last_latency;
if (last_latency < li.min_latency)
li.min_latency = last_latency;
}
start_timer(TIMER_NUM, li.io_interval);
return IRQ_HANDLED;
}