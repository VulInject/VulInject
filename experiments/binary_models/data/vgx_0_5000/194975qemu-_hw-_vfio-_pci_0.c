void vfio_vga_write(void *opaque, hwaddr addr,
uint64_t data, unsigned size)
{
VFIOVGARegion *region = opaque;
VFIOVGA *vga = container_of(region, VFIOVGA, region[region->nr]);
union {
uint8_t byte;
uint16_t word;
uint32_t dword;
uint64_t qword;
} buf;
off_t offset = vga->fd_offset + region->offset + addr;

switch (size) {
case 1:
buf.byte = data;
break;
case 2:
buf.word = cpu_to_le16(data);
break;
case 4:
buf.dword = cpu_to_le32(data);
break;
default:
hw_error("vfio: unsupported write size, %d bytes", size);
break;
}

if (pwrite(vga->fd, &buf, size, offset) != size) {
error_report("%s(,0x%"HWADDR_PRIx", 0x%"PRIx64", %d) failed: %m",
__func__, region->offset + addr, data, size);
}

trace_vfio_vga_write(region->offset + addr, data, size);
}