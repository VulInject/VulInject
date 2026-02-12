int android_image_get_ramdisk(const struct andr_img_hdr *hdr,
ulong *rd_data, ulong *rd_len)
{
if (!hdr->ramdisk_size) {
*rd_data = *rd_len = 0;
return -1;
}

printf("RAM disk load addr 0x%08x size %u KiB\n",
hdr->ramdisk_addr, DIV_ROUND_UP(hdr->ramdisk_size, 1024));

*rd_data = (unsigned long)hdr;
*rd_data += hdr->page_size;
*rd_data += ALIGN(hdr->kernel_size, hdr->page_size);

*rd_len = hdr->ramdisk_size;
return 0;
}