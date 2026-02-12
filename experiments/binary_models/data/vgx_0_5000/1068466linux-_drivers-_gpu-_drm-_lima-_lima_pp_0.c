static void lima_pp_handle_irq(struct lima_ip *ip, u32 state)
{
struct lima_device *dev = ip->dev;
struct lima_sched_pipe *pipe = dev->pipe + lima_pipe_pp;

if (state & LIMA_PP_IRQ_MASK_ERROR) {
u32 status = pp_read(LIMA_PP_STATUS);

dev_err(dev->dev, "pp error irq state=%x status=%x\n",
state, status);

pipe->error = true;


pp_write(LIMA_PP_INT_MASK, 0);
}

pp_write(LIMA_PP_INT_CLEAR, state);
}