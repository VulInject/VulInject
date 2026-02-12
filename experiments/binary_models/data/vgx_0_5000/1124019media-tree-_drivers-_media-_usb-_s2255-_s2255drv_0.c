static int s2255_start_readpipe(struct s2255_dev *dev)
{
int pipe;
int retval;
struct s2255_pipeinfo *pipe_info = &dev->pipe;
pipe = usb_rcvbulkpipe(dev->udev, dev->read_endpoint);
dprintk(dev, 2, "%s: IN %d\n", __func__, dev->read_endpoint);
pipe_info->state = 1;
pipe_info->err_count = 0;
pipe_info->stream_urb = usb_alloc_urb(0, GFP_KERNEL);
if (!pipe_info->stream_urb)
return -ENOMEM;

usb_fill_bulk_urb(pipe_info->stream_urb, dev->udev,
pipe,
pipe_info->transfer_buffer,
pipe_info->cur_transfer_size,
read_pipe_completion, pipe_info);
retval = usb_submit_urb(pipe_info->stream_urb, GFP_KERNEL);
if (retval) {
pr_err("s2255: start read pipe failed\n");
return retval;
}
return 0;
}