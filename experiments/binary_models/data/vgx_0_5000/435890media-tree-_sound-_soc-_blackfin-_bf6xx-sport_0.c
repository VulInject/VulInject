static irqreturn_t sport_tx_irq(int irq, void *dev_id)
{
struct sport_device *sport = dev_id;
static unsigned long status;

status = get_dma_curr_irqstat(sport->tx_dma_chan);
if (status & (DMA_DONE|DMA_ERR)) {
clear_dma_irqstat(sport->tx_dma_chan);
SSYNC();
}
if (sport->tx_callback)
sport->tx_callback(sport->tx_data);
return IRQ_HANDLED;
}