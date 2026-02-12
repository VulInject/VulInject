int __ref msi_bitmap_alloc(struct msi_bitmap *bmp, unsigned int irq_count,
struct device_node *of_node)
{
int size;

if (!irq_count)
return -EINVAL;

size = BITS_TO_LONGS(irq_count) * sizeof(long);
pr_debug("msi_bitmap: allocator bitmap size is 0x%x bytes\n", size);

bmp->bitmap_from_slab = slab_is_available();
if (bmp->bitmap_from_slab)
bmp->bitmap = kzalloc(size, GFP_KERNEL);
else {
bmp->bitmap = memblock_alloc(size, SMP_CACHE_BYTES);
if (!bmp->bitmap)
panic("%s: Failed to allocate %u bytes\n", __func__,
size);

kmemleak_not_leak(bmp->bitmap);
}

if (!bmp->bitmap) {
pr_debug("msi_bitmap: ENOMEM allocating allocator bitmap!\n");
return -ENOMEM;
}


spin_lock_init(&bmp->lock);
bmp->of_node = of_node_get(of_node);
bmp->irq_count = irq_count;

return 0;
}