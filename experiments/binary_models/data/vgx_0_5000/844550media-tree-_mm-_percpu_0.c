void __init setup_per_cpu_areas(void)
{
unsigned long delta;
unsigned int cpu;
int rc;


rc = pcpu_embed_first_chunk(PERCPU_MODULE_RESERVE,
PERCPU_DYNAMIC_RESERVE, PAGE_SIZE, NULL,
pcpu_dfl_fc_alloc, pcpu_dfl_fc_free);
if (rc < 0)
panic("Failed to initialize percpu areas.");

delta = (unsigned long)pcpu_base_addr - (unsigned long)__per_cpu_start;
for_each_possible_cpu(cpu)
__per_cpu_offset[cpu] = delta + pcpu_unit_offsets[cpu];
}