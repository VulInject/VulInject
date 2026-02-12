bool rockminer_queue_append(struct thr_info * const thr, struct work * const work)
{
struct cgpu_info * const proc = thr->cgpu;
struct cgpu_info * const dev = proc->device;
struct rockminer_chip_data * const chip = thr->cgpu_data;
const int fd = dev->device_fd;

if (fd < 0 || !chip->requested_work)
{
thr->queue_full = true;
return false;
}

memcpy(&chip->next_work_req[   0], work->midstate, 0x20);
memcpy(&chip->next_work_req[0x34], &work->data[0x40], 0xc);
if (!rockminer_send_work(thr))
{
rockminer_dead(dev);
inc_hw_errors_only(thr);
applogr(false, LOG_ERR, "%"PRIpreprv": Failed to send work", proc->proc_repr);
}

chip->last_taskid = chip->last_taskid ? 0 : 1;
if (chip->works[chip->last_taskid])
free_work(chip->works[chip->last_taskid]);
chip->works[chip->last_taskid] = work;
timer_set_delay_from_now(&chip->tv_midtask_timeout, ROCKMINER_MIDTASK_RETRY_US);
applog(LOG_DEBUG, "%"PRIpreprv": Work %d queued as task %d", proc->proc_repr, work->id, chip->last_taskid);

if (!--chip->requested_work)
thr->queue_full = true;

return true;
}