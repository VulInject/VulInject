static int start_rx(struct atm_dev *dev)
{
struct eni_dev *eni_dev;

eni_dev = ENI_DEV(dev);
eni_dev->rx_map = (struct atm_vcc **) get_zeroed_page(GFP_KERNEL);
if (!eni_dev->rx_map) {
printk(KERN_ERR DEV_LABEL "(itf %d): couldn't get free page\n",
dev->number);
free_page((unsigned long) eni_dev->free_list);
return -ENOMEM;
}
eni_dev->rx_mult = DEFAULT_RX_MULT;
eni_dev->fast = eni_dev->last_fast = NULL;
eni_dev->slow = eni_dev->last_slow = NULL;
init_waitqueue_head(&eni_dev->rx_wait);
skb_queue_head_init(&eni_dev->rx_queue);
eni_dev->serv_read = eni_in(MID_SERV_WRITE);
eni_out(0,MID_DMA_WR_RX);
return 0;
}