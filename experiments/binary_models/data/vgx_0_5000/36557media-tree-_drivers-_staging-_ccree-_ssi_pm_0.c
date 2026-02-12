int ssi_power_mgr_runtime_suspend(struct device *dev)
{
struct ssi_drvdata *drvdata =
(struct ssi_drvdata *)dev_get_drvdata(dev);
int rc;

SSI_LOG_DEBUG("ssi_power_mgr_runtime_suspend: set HOST_POWER_DOWN_EN\n");
WRITE_REGISTER(drvdata->cc_base + CC_REG_OFFSET(HOST_RGF, HOST_POWER_DOWN_EN), POWER_DOWN_ENABLE);
rc = ssi_request_mgr_runtime_suspend_queue(drvdata);
if (rc != 0) {
SSI_LOG_ERR("ssi_request_mgr_runtime_suspend_queue (%x)\n", rc);
return rc;
}
fini_cc_regs(drvdata);


ssi_pm_ext_hw_suspend(dev);
return 0;
}