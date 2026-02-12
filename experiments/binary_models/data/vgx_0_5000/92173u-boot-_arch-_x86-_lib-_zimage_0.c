static int setup_device_tree(struct setup_header *hdr, const void *fdt_blob)
{
int bootproto = get_boot_protocol(hdr, false);
struct setup_data *sd;
int size;

if (bootproto < 0x0209)
return -ENOTSUPP;

if (!fdt_blob)
return 0;

size = fdt_totalsize(fdt_blob);
if (size < 0)
return -EINVAL;

size += sizeof(struct setup_data);
sd = (struct setup_data *)malloc(size);
if (!sd) {
printf("Not enough memory for DTB setup data\n");
return -ENOMEM;
}

sd->next = hdr->setup_data;
sd->type = SETUP_DTB;
sd->len = fdt_totalsize(fdt_blob);
memcpy(sd->data, fdt_blob, sd->len);
hdr->setup_data = (unsigned long)sd;

return 0;
}