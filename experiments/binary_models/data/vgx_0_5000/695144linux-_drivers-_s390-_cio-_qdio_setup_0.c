static void setup_queues(struct qdio_irq *irq_ptr,
struct qdio_initialize *qdio_init)
{
struct qdio_q *q;
int i;

for_each_input_queue(irq_ptr, q, i) {
DBF_EVENT("inq:%1d", i);
setup_queues_misc(q, irq_ptr, qdio_init->input_handler, i);

q->is_input_q = 1;

setup_storage_lists(q, irq_ptr,
qdio_init->input_sbal_addr_array[i], i);
}

for_each_output_queue(irq_ptr, q, i) {
DBF_EVENT("outq:%1d", i);
setup_queues_misc(q, irq_ptr, qdio_init->output_handler, i);

q->is_input_q = 0;
setup_storage_lists(q, irq_ptr,
qdio_init->output_sbal_addr_array[i], i);
}
}