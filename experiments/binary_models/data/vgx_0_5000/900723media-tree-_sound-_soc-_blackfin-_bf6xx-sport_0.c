static irqreturn_t sport_rx_irq(int irq, void *dev_id)
{
struct sport_device *sport = dev_id;
unsigned long status;

status = get_dma_curr_irqstat(sport->rx_dma_chan);
if (status & (DMA_DONE|DMA_ERR)) {
clear_dma_irqstat(sport->rx_dma_chan);
SSYNC();
}
if (sport->rx_callback)
sport->rx_callback(sport->rx_data);
return IRQ_HANDLED;
}