static void *bfin_spi_next_transfer(struct bfin_spi_master_data *drv_data)
{
struct spi_message *msg = drv_data->cur_msg;
struct spi_transfer *trans = drv_data->cur_transfer;


if (trans->transfer_list.next != &msg->transfers) {
drv_data->cur_transfer =
list_entry(trans->transfer_list.next,
struct spi_transfer, transfer_list);
return RUNNING_STATE;
} else
return DONE_STATE;
}


static void bfin_spi_giveback(struct bfin_spi_master_data *drv_data)
{
struct bfin_spi_slave_data *chip = drv_data->cur_chip;
unsigned long flags;
struct spi_message *msg;

spin_lock_irqsave(&drv_data->lock, flags);
msg = drv_data->cur_msg;
drv_data->cur_msg = NULL;
drv_data->cur_transfer = NULL;
drv_data->cur_chip = NULL;
schedule_work(&drv_data->pump_messages);
spin_unlock_irqrestore(&drv_data->lock, flags);

msg->state = NULL;

if (!drv_data->cs_change)
bfin_spi_cs_deactive(drv_data, chip);


if (drv_data->tx_dma != 0xFFFF)
bfin_spi_disable(drv_data);

if (msg->complete)
msg->complete(msg->context);
}