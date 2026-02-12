static int bt3c_check_config(struct pcmcia_device *p_dev, void *priv_data)
{
int *try = priv_data;

if (!try)
p_dev->io_lines = 16;

if ((p_dev->resource[0]->end != 8) || (p_dev->resource[0]->start == 0))
return -EINVAL;

p_dev->resource[0]->end = 8;
p_dev->resource[0]->flags &= ~IO_DATA_PATH_WIDTH;
p_dev->resource[0]->flags |= IO_DATA_PATH_WIDTH_8;

return pcmcia_request_io(p_dev);
}