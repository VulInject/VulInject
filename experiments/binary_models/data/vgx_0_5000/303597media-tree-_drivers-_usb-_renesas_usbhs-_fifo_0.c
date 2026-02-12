static int usbhs_dcp_dir_switch_to_write(struct usbhs_pkt *pkt, int *is_done)
{
struct usbhs_pipe *pipe = pkt->pipe;
struct usbhs_priv *priv = usbhs_pipe_to_priv(pipe);
struct usbhs_fifo *fifo = usbhsf_get_cfifo(priv); 
struct device *dev = usbhs_priv_to_dev(priv);
int ret;

usbhs_pipe_disable(pipe);

ret = usbhsf_fifo_select(pipe, fifo, 1);
if (ret < 0) {
dev_err(dev, "%s() faile\n", __func__);
return ret;
}

usbhs_pipe_sequence_data1(pipe); 

usbhsf_fifo_clear(pipe, fifo);
usbhsf_send_terminator(pipe, fifo);

usbhsf_fifo_unselect(pipe, fifo);

usbhsf_tx_irq_ctrl(pipe, 1);
usbhs_pipe_enable(pipe);

return ret;
}