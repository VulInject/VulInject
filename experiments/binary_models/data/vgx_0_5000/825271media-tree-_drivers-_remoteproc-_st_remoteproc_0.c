static int st_rproc_stop(struct rproc *rproc)
{
struct st_rproc *ddata = rproc->priv;
int sw_err = 0, pwr_err = 0;

if (ddata->config->sw_reset) {
sw_err = reset_control_assert(ddata->sw_reset);
if (sw_err)
dev_err(&rproc->dev, "Failed to assert S/W Reset\n");
}

if (ddata->config->pwr_reset) {
pwr_err = reset_control_assert(ddata->pwr_reset);
if (pwr_err)
dev_err(&rproc->dev, "Failed to assert Power Reset\n");
}

clk_disable(ddata->clk);

return sw_err ?: pwr_err;
}

static const struct rproc_ops st_rproc_ops = {
.kick		= st_rproc_kick,
.start		= st_rproc_start,
.stop		= st_rproc_stop,
};