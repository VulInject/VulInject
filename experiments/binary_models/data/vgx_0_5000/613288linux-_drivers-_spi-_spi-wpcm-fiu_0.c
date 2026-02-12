static ssize_t wpcm_fiu_direct_read(struct spi_mem_dirmap_desc *desc, u64 offs, size_t len, void *buf)
{
struct wpcm_fiu_spi *fiu = spi_controller_get_devdata(desc->mem->spi->controller);
int cs = desc->mem->spi->chip_select;

if (offs >= MAX_MEMORY_SIZE_PER_CS)
return -ENOTSUPP;

offs += cs * MAX_MEMORY_SIZE_PER_CS;

if (!fiu->memory || offs >= fiu->memory_size)
return -ENOTSUPP;

len = min_t(size_t, len, fiu->memory_size - offs);
memcpy_fromio(buf, fiu->memory + offs, len);

return len;
}