static void cppi41_set_autoreq_mode(struct cppi41_dma_channel *cppi41_channel,
unsigned mode)
{
struct cppi41_dma_controller *controller = cppi41_channel->controller;
u32 port;
u32 new_mode;
u32 old_mode;

old_mode = controller->auto_req;
port = cppi41_channel->port_num;
new_mode = update_ep_mode(port, mode, old_mode);

if (new_mode == old_mode)
return;
controller->auto_req = new_mode;
musb_writel(controller->controller.musb->ctrl_base, USB_CTRL_AUTOREQ,
new_mode);
}