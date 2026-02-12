int pvr2_buffer_queue(struct pvr2_buffer *bp)
{
unsigned int idx;
unsigned int val;
int ret = 0;
struct pvr2_stream *sp;
if (!bp) return -EINVAL;
sp = bp->stream;
mutex_lock(&sp->mutex);
do {
pvr2_buffer_wipe(bp);
if (!sp->dev) {
ret = -EIO;
break;
}
pvr2_buffer_set_queued(bp);
for (idx = 0; idx < (bp->max_count) / 4; idx++) {
val = bp->id << 24;
val |= idx;
((unsigned int *)(bp->ptr))[idx] = val;
}
bp->status = -EINPROGRESS;
usb_fill_bulk_urb(bp->purb,      
sp->dev,       

usb_rcvbulkpipe(sp->dev, sp->endpoint),
bp->ptr,       
bp->max_count, 
buffer_complete,
bp);
usb_submit_urb(bp->purb, GFP_KERNEL);
} while (0);
mutex_unlock(&sp->mutex);
return ret;
}