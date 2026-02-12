static void *tmc_alloc_etf_buffer(struct coresight_device *csdev,
struct perf_event *event, void **pages,
int nr_pages, bool overwrite)
{
int node;
struct cs_buffers *buf;

node = (event->cpu == -1) ? NUMA_NO_NODE : cpu_to_node(event->cpu);


buf = kzalloc_node(sizeof(struct cs_buffers), GFP_KERNEL, node);
if (!buf)
return NULL;

buf->pid = task_pid_nr(event->owner);
buf->snapshot = overwrite;
buf->nr_pages = nr_pages;
buf->data_pages = pages;

return buf;
}