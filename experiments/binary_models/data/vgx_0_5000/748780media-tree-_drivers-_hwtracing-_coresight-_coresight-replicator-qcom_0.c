static void replicator_disable(struct coresight_device *csdev, int inport,
int outport)
{
struct replicator_state *drvdata = dev_get_drvdata(csdev->dev.parent);

CS_UNLOCK(drvdata->base);


if (outport == 0)
writel_relaxed(0xff, drvdata->base + REPLICATOR_IDFILTER0);
else
writel_relaxed(0xff, drvdata->base + REPLICATOR_IDFILTER1);

CS_LOCK(drvdata->base);

dev_info(drvdata->dev, "REPLICATOR disabled\n");
}

static const struct coresight_ops_link replicator_link_ops = {
.enable		= replicator_enable,
.disable	= replicator_disable,
};