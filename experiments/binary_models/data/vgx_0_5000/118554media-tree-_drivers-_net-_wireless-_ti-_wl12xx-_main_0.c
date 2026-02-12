static int wl127x_prepare_read(struct wl1271 *wl, u32 rx_desc, u32 len)
{
int ret;

if (wl->chip.id != CHIP_ID_128X_PG20) {
struct wl1271_acx_mem_map *wl_mem_map = wl->target_mem_map;
struct wl12xx_priv *priv = wl->priv;


u32 mem_block = rx_desc & RX_MEM_BLOCK_MASK;

priv->rx_mem_addr->addr = (mem_block << 8) +
le32_to_cpu(wl_mem_map->packet_memory_pool_start);

priv->rx_mem_addr->addr_extra = priv->rx_mem_addr->addr + 4;

ret = wlcore_write(wl, WL1271_SLV_REG_DATA, priv->rx_mem_addr,
sizeof(*priv->rx_mem_addr), false);
if (ret < 0)
return ret;
}

return 0;
}