static int qcom_ssc_block_bus_pds_attach(struct device *dev, struct device **pds,
const char *const *pd_names, size_t num_pds)
{
int ret;
int i;

for (i = 0; i < num_pds; i++) {
pds[i] = dev_pm_domain_attach_by_name(dev, pd_names[i]);
if (IS_ERR_OR_NULL(pds[i])) {
ret = PTR_ERR(pds[i]) ? : -ENODATA;
goto unroll_attach;
}
}

return num_pds;

unroll_attach:
for (i--; i >= 0; i--)
dev_pm_domain_detach(pds[i], false);

return ret;
};