int efct_scsi_del_initiator(struct efc *efc, struct efc_node *node, int reason)
{
struct efct *efct = node->efc->base;
struct efct_node *tgt_node = node->tgt_node;
struct efct_lio_wq_data *wq_data;
int watermark;
int ini_count;
u64 id;

if (reason == EFCT_SCSI_INITIATOR_MISSING)
return EFC_SCSI_CALL_COMPLETE;

if (!tgt_node) {
efc_log_err(efct, "tgt_node is NULL\n");
return -EIO;
}

wq_data = kzalloc(sizeof(*wq_data), GFP_ATOMIC);
if (!wq_data)
return -ENOMEM;

id = (u64) tgt_node->port_fc_id << 32 | tgt_node->node_fc_id;
xa_erase(&efct->lookup, id);

wq_data->ptr = node;
wq_data->efct = efct;
INIT_WORK(&wq_data->work, efct_lio_remove_session);
queue_work(lio_wq, &wq_data->work);


ini_count = atomic_sub_return(1, &efct->tgt_efct.initiator_count);

watermark = efct->tgt_efct.watermark_max -
ini_count * EFCT_IO_WATERMARK_PER_INITIATOR;
watermark = (efct->tgt_efct.watermark_min > watermark) ?
efct->tgt_efct.watermark_min : watermark;
atomic_set(&efct->tgt_efct.io_high_watermark, watermark);

return EFC_SCSI_CALL_ASYNC;
}