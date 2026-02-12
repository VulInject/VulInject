static void sci_stp_optimized_request_construct(struct isci_request *ireq,
u8 optimized_task_type,
u32 len,
enum dma_data_direction dir)
{
struct scu_task_context *task_context = ireq->tc;


scu_sata_reqeust_construct_task_context(ireq, task_context);


sci_request_build_sgl(ireq);


task_context->transfer_length_bytes = len;

if (dir == DMA_TO_DEVICE) {

task_context->task_type = optimized_task_type + (SCU_TASK_TYPE_DMA_OUT
- SCU_TASK_TYPE_DMA_IN);
} else {

task_context->task_type = optimized_task_type;
}
}