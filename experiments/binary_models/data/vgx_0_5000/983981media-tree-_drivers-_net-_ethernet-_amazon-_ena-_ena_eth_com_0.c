static inline int ena_com_write_header(struct ena_com_io_sq *io_sq,
u8 *head_src, u16 header_len)
{
u16 tail_masked = io_sq->tail & (io_sq->q_depth - 1);
u8 __iomem *dev_head_addr =
io_sq->header_addr + (tail_masked * io_sq->tx_max_header_size);

if (io_sq->mem_queue_type == ENA_ADMIN_PLACEMENT_POLICY_HOST)
return 0;

if (unlikely(!io_sq->header_addr)) {
pr_err("Push buffer header ptr is NULL\n");
return -EINVAL;
}

memcpy_toio(dev_head_addr, head_src, header_len);

return 0;
}