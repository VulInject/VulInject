static void iscsi_iser_cleanup_task(struct iscsi_task *task)
{
struct iscsi_iser_task *iser_task = task->dd_data;
struct iser_tx_desc *tx_desc = &iser_task->desc;
struct iser_conn *iser_conn = task->conn->dd_data;
struct iser_device *device = iser_conn->ib_conn.device;


if (!device)
return;

if (likely(tx_desc->mapped)) {
ib_dma_unmap_single(device->ib_device, tx_desc->dma_addr,
ISER_HEADERS_LEN, DMA_TO_DEVICE);
tx_desc->mapped = false;
}


if (!task->sc)
return;

if (iser_task->status == ISER_TASK_STATUS_STARTED) {
iser_task->status = ISER_TASK_STATUS_COMPLETED;
iser_task_rdma_finalize(iser_task);
}
}