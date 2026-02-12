static int remove_pad_from_frame(struct atomisp_device *isp,
struct atomisp_css_frame *in_frame, __u32 width, __u32 height)
{
unsigned int i;
unsigned short *buffer;
int ret = 0;
ia_css_ptr load = in_frame->data;
ia_css_ptr store = load;

buffer = kmalloc(width*sizeof(load), GFP_KERNEL);
if (!buffer) {
dev_err(isp->dev, "out of memory.\n");
return -ENOMEM;
}

load += ISP_LEFT_PAD;
for (i = 0; i < height; i++) {
ret = hmm_load(load, buffer, width*sizeof(load));
if (ret < 0)
goto remove_pad_error;

ret = hmm_store(store, buffer, width*sizeof(store));
if (ret < 0)
goto remove_pad_error;

load  += in_frame->info.padded_width;
store += width;
}

remove_pad_error:
kfree(buffer);
return ret;
}