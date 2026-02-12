static void print_sample_bpf_output(struct perf_sample *sample)
{
unsigned int nr_bytes = sample->raw_size;
struct printer_data printer_data = {0, false, true};

print_binary(sample->raw_data, nr_bytes, 8,
print_sample_bpf_output_printer, &printer_data);

if (printer_data.is_printable && printer_data.hit_nul)
printf("%17s \"%s\"\n", "BPF string:",
(char *)(sample->raw_data));
}

struct perf_script {
struct perf_tool	tool;
struct perf_session	*session;
bool			show_task_events;
bool			show_mmap_events;
bool			show_switch_events;
bool			show_namespace_events;
bool			allocated;
struct cpu_map		*cpus;
struct thread_map	*threads;
int			name_width;
const char              *time_str;
struct perf_time_interval ptime;
};