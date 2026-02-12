static int
prepare_bootblock(ib_data_t *data, char *updt_str)
{
ib_device_t		*device = &data->device;
ib_bootblock_t		*bblock = &data->bootblock;
multiboot_header_t	*mboot;

assert(data != NULL);


if (!is_zfs(device->type))
return (BC_SUCCESS);


assert(bblock->mboot != NULL);
assert(bblock->extra != NULL);

mboot = bblock->mboot;

mboot->magic = MB_HEADER_MAGIC;
mboot->flags = MB_HEADER_FLAGS_64;
mboot->checksum = -(mboot->flags + mboot->magic);

mboot->header_addr = bblock->mboot_off;
mboot->load_addr = 0;
mboot->load_end_addr = bblock->file_size;


if (do_version)
add_bootblock_einfo(bblock, updt_str);

return (BC_SUCCESS);
}