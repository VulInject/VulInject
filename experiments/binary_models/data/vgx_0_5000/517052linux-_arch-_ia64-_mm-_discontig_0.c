*/



struct early_node_data {
struct ia64_node_data *node_data;
unsigned long pernode_addr;
unsigned long pernode_size;
unsigned long min_pfn;
unsigned long max_pfn;
};

static struct early_node_data mem_data[MAX_NUMNODES] __initdata;
static nodemask_t memory_less_mask __initdata;

pg_data_t *pgdat_list[MAX_NUMNODES];


((((addr) + 1024*1024-1) & ~(1024*1024-1)) + 				\
(((node)*PERCPU_PAGE_SIZE) & (MAX_NODE_ALIGN_OFFSET - 1)))


static int __init build_node_maps(unsigned long start, unsigned long len,
int node)
{
unsigned long spfn, epfn, end = start + len;

epfn = GRANULEROUNDUP(end) >> PAGE_SHIFT;
spfn = GRANULEROUNDDOWN(start) >> PAGE_SHIFT;

if (!mem_data[node].min_pfn) {
mem_data[node].min_pfn = spfn;
mem_data[node].max_pfn = epfn;
} else {
mem_data[node].min_pfn = min(spfn, mem_data[node].min_pfn);
mem_data[node].max_pfn = max(epfn, mem_data[node].max_pfn);
}

return 0;
}