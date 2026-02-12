static inline int tm6000_isoc_copy(struct urb *urb)
{
struct tm6000_dmaqueue  *dma_q = urb->context;
struct tm6000_core *dev = container_of(dma_q, struct tm6000_core, vidq);
int i, len = 0, rc = 1, status;
char *p;

if (urb->status < 0) {
print_err_status(dev, -1, urb->status);
return 0;
}

for (i = 0; i < urb->number_of_packets; i++) {
status = urb->iso_frame_desc[i].status;

if (status < 0) {
print_err_status(dev, i, status);
continue;
}

len = urb->iso_frame_desc[i].actual_length;

if (len > 0) {
p = urb->transfer_buffer + urb->iso_frame_desc[i].offset;
if (!urb->iso_frame_desc[i].status) {
if ((dev->fourcc) == V4L2_PIX_FMT_TM6000) {
rc = copy_multiplexed(p, len, urb);
if (rc <= 0)
return rc;
} else {
copy_streams(p, len, urb);
}
}
}
}
return rc;
}