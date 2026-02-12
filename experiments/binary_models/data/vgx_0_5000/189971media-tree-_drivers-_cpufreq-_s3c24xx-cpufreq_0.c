int s3c_cpufreq_register(struct s3c_cpufreq_info *info)
{
if (!info || !info->name) {
pr_err("%s: failed to pass valid information\n", __func__);
return -EINVAL;
}

pr_info("S3C24XX CPU Frequency driver, %s cpu support\n",
info->name);



BUG_ON(info->set_refresh == NULL);
BUG_ON(info->set_divs == NULL);
BUG_ON(info->calc_divs == NULL);



cpu_cur.info = info;



return 0;
}