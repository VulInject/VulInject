static int exynos5_dmc_get_status(struct device *dev,
struct devfreq_dev_status *stat)
{
struct exynos5_dmc *dmc = dev_get_drvdata(dev);
unsigned long load, total;
int ret;

if (dmc->in_irq_mode) {
mutex_lock(&dmc->lock);
stat->current_frequency = dmc->curr_rate;
mutex_unlock(&dmc->lock);

stat->busy_time = dmc->load;
stat->total_time = dmc->total;
} else {
ret = exynos5_counters_get(dmc, &load, &total);
if (ret < 0)
return -EINVAL;


stat->busy_time = load >> 10;
stat->total_time = total >> 10;

ret = exynos5_counters_set_event(dmc);
if (ret < 0) {
dev_err(dev, "could not set event counter\n");
return ret;
}
}

return 0;
}