static void vfio_ram_discard_notify_discard(RamDiscardListener *rdl,
MemoryRegionSection *section)
{
VFIORamDiscardListener *vrdl = container_of(rdl, VFIORamDiscardListener,
listener);
const hwaddr size = int128_get64(section->size);
const hwaddr iova = section->offset_within_address_space;
int ret;


ret = vfio_dma_unmap(vrdl->container, iova, size , NULL);
if (ret) {
error_report("%s: vfio_dma_unmap() failed: %s", __func__,
strerror(-ret));
}
}