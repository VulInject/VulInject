void memcpy_fromio(void *buffer, const volatile void __iomem *addr,
size_t size)
{
struct logic_iomem_area *area = get_area(addr);
u8 *buf = buffer;
unsigned long offs, start;

if (!area) {
real_memcpy_fromio(buffer, addr, size);
return;
}

start = (unsigned long)addr & AREA_MASK;

if (area->ops->copy_from) {
area->ops->copy_from(area->priv, buffer, start, size);
return;
}

for (offs = 0; offs < size; offs++)
buf[offs] = area->ops->read(area->priv, start + offs, 1);
}