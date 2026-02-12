static int imgu_powerup(struct imgu_device *imgu)
{
int r;
unsigned int pipe;
unsigned int freq = 200;
struct v4l2_mbus_framefmt *fmt;


for_each_set_bit(pipe, imgu->css.enabled_pipes, IMGU_MAX_PIPE_NUM) {
fmt = &imgu->imgu_pipe[pipe].nodes[IMGU_NODE_IN].pad_fmt;
dev_dbg(&imgu->pci_dev->dev, "pipe %u input format = %ux%u",
pipe, fmt->width, fmt->height);
if ((fmt->width * fmt->height) >= (2048 * 1152))
freq = 450;
}

r = imgu_css_set_powerup(&imgu->pci_dev->dev, imgu->base, freq);
if (r)
return r;

imgu_mmu_resume(imgu->mmu);
return 0;
}