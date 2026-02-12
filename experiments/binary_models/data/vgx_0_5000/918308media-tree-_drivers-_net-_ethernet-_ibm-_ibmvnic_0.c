static int alloc_long_term_buff(struct ibmvnic_adapter *adapter,
struct ibmvnic_long_term_buff *ltb, int size)
{
struct device *dev = &adapter->vdev->dev;

ltb->size = size;
ltb->buff = dma_alloc_coherent(dev, ltb->size, &ltb->addr,
GFP_KERNEL);

if (!ltb->buff) {
dev_err(dev, "Couldn't alloc long term buffer\n");
return -ENOMEM;
}
ltb->map_id = adapter->map_id;
adapter->map_id++;

init_completion(&adapter->fw_done);
send_request_map(adapter, ltb->addr,
ltb->size, ltb->map_id);
wait_for_completion(&adapter->fw_done);
return 0;
}