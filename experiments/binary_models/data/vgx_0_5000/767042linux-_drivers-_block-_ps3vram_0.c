static int ps3vram_cache_init(struct ps3_system_bus_device *dev)
{
struct ps3vram_priv *priv = ps3_system_bus_get_drvdata(dev);

priv->cache.page_count = CACHE_PAGE_COUNT;
priv->cache.page_size = CACHE_PAGE_SIZE;
priv->cache.tags = kcalloc(CACHE_PAGE_COUNT,
sizeof(struct ps3vram_tag),
GFP_KERNEL);
if (!priv->cache.tags)
return -ENOMEM;

dev_info(&dev->core, "Created ram cache: %d entries, %d KiB each\n",
CACHE_PAGE_COUNT, CACHE_PAGE_SIZE / 1024);

return 0;
}