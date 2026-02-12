void bitforce_comm_error(struct thr_info *thr)
{
struct cgpu_info *bitforce = thr->cgpu;
struct bitforce_data *data = bitforce->device_data;

data->noncebuf[0] = '\0';
applog(LOG_ERR, "%"PRIpreprv": Comms error", bitforce->proc_repr);
dev_error(bitforce, REASON_DEV_COMMS_ERROR);
inc_hw_errors_only(thr);
if (!bitforce_open(bitforce))
{
applog(LOG_ERR, "%s: Error reopening %s", bitforce->dev_repr, bitforce->device_path);
return;
}

bitforce_clear_buffer(bitforce);
}