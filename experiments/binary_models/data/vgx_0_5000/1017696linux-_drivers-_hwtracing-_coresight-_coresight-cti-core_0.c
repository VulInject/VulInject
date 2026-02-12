int cti_add_connection_entry(struct device *dev, struct cti_drvdata *drvdata,
struct cti_trig_con *tc,
struct coresight_device *csdev,
const char *assoc_dev_name)
{
struct cti_device *cti_dev = &drvdata->ctidev;

tc->con_dev = csdev;

if (csdev)
tc->con_dev_name = dev_name(&csdev->dev);
else if (assoc_dev_name != NULL) {
tc->con_dev_name = devm_kstrdup(dev,
assoc_dev_name, GFP_KERNEL);
if (!tc->con_dev_name)
return -ENOMEM;
}
list_add_tail(&tc->node, &cti_dev->trig_cons);
cti_dev->nr_trig_con++;


drvdata->config.trig_in_use |= tc->con_in->used_mask;
drvdata->config.trig_out_use |= tc->con_out->used_mask;

return 0;
}