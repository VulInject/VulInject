static int spi_mem_access_start(struct spi_mem *mem)
{
struct spi_controller *ctlr = mem->spi->controller;


spi_flush_queue(ctlr);

if (ctlr->auto_runtime_pm) {
int ret;

ret = pm_runtime_resume_and_get(ctlr->dev.parent);
if (ret < 0) {
dev_err(&ctlr->dev, "Failed to power device: %d\n",
ret);
return ret;
}
}

mutex_lock(&ctlr->bus_lock_mutex);
mutex_lock(&ctlr->io_mutex);

return 0;
}