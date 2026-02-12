int efi_init(struct efi_priv *priv, const char *banner, efi_handle_t image,
struct efi_system_table *sys_table)
{
efi_guid_t loaded_image_guid = EFI_LOADED_IMAGE_PROTOCOL_GUID;
struct efi_boot_services *boot = sys_table->boottime;
struct efi_loaded_image *loaded_image;
int ret;

efi_memset(priv, '\0', sizeof(*priv));
priv->sys_table = sys_table;
priv->boot = sys_table->boottime;
priv->parent_image = image;
priv->run = sys_table->runtime;

efi_puts(priv, "U-Boot EFI ");
efi_puts(priv, banner);
efi_putc(priv, ' ');

ret = boot->open_protocol(priv->parent_image, &loaded_image_guid,
(void **)&loaded_image, priv->parent_image,
NULL, EFI_OPEN_PROTOCOL_GET_PROTOCOL);
if (ret) {
efi_puts(priv, "Failed to get loaded image protocol\n");
return ret;
}
priv->image_data_type = loaded_image->image_data_type;

return 0;
}