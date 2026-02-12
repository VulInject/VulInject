ssize_t spi_mem_dirmap_read(struct spi_mem_dirmap_desc *desc,
u64 offs, size_t len, void *buf)
{
struct spi_controller *ctlr = desc->mem->spi->controller;
ssize_t ret;

if (desc->info.op_tmpl.data.dir != SPI_MEM_DATA_IN)
return -EINVAL;

if (!len)
return 0;

if (desc->nodirmap) {
ret = spi_mem_no_dirmap_read(desc, offs, len, buf);
} else if (ctlr->mem_ops && ctlr->mem_ops->dirmap_read) {
ret = spi_mem_access_start(desc->mem);
if (ret)
return ret;

ret = ctlr->mem_ops->dirmap_read(desc, offs, len, buf);

spi_mem_access_end(desc->mem);
} else {
ret = -ENOTSUPP;
}

return ret;
}