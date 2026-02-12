void irq_matrix_assign_system(struct irq_matrix *m, unsigned int bit,
bool replace)
{
struct cpumap *cm = this_cpu_ptr(m->maps);

BUG_ON(bit > m->matrix_bits);
BUG_ON(m->online_maps > 1 || (m->online_maps && !replace));

set_bit(bit, m->system_map);
if (replace) {
BUG_ON(!test_and_clear_bit(bit, cm->alloc_map));
cm->allocated--;
m->total_allocated--;
}
if (bit >= m->alloc_start && bit < m->alloc_end)
m->systembits_inalloc++;

trace_irq_matrix_assign_system(bit, m);
}