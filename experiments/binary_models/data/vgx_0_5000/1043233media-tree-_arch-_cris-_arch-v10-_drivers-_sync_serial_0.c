static void start_dma_in(struct sync_port *port)
{
int i;
unsigned long buf;
port->writep = port->flip;

if (port->writep > port->flip + port->in_buffer_size) {
panic("Offset too large in sync serial driver\n");
return;
}
buf = virt_to_phys(port->in_buffer);
for (i = 0; i < NUM_IN_DESCR; i++) {
port->in_descr[i].sw_len = port->inbufchunk;
port->in_descr[i].ctrl = d_int;
port->in_descr[i].next = virt_to_phys(&port->in_descr[i+1]);
port->in_descr[i].buf = buf;
port->in_descr[i].hw_len = 0;
port->in_descr[i].status = 0;
port->in_descr[i].fifo_len = 0;
buf += port->inbufchunk;
prepare_rx_descriptor(&port->in_descr[i]);
}

port->in_descr[i-1].next = virt_to_phys(&port->in_descr[0]);
port->in_descr[i-1].ctrl |= d_eol;
port->next_rx_desc = &port->in_descr[0];
port->prev_rx_desc = &port->in_descr[NUM_IN_DESCR - 1];
*port->input_dma_first = virt_to_phys(port->next_rx_desc);
*port->input_dma_cmd = IO_STATE(R_DMA_CH0_CMD, cmd, start);
}