static struct ioinfo *
vioscsi_start_read(struct vioscsi_dev *dev, off_t block, size_t n_blocks)
{
struct ioinfo *info;


if (n_blocks * VIOSCSI_BLOCK_SIZE_CDROM > (1 << 26)) {
log_warnx("%s: read size exceeded 64M", __func__);
return (NULL);
}

info = calloc(1, sizeof(*info));
if (!info)
goto nomem;
info->buf = malloc(n_blocks * VIOSCSI_BLOCK_SIZE_CDROM);
if (info->buf == NULL)
goto nomem;
info->len = n_blocks * VIOSCSI_BLOCK_SIZE_CDROM;
info->offset = block * VIOSCSI_BLOCK_SIZE_CDROM;
info->file = &dev->file;

return info;

nomem:
free(info);
log_warn("malloc error vioscsi read");
return (NULL);
}