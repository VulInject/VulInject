int ssi_power_mgr_runtime_resume(struct device *dev)
{
int rc;
struct ssi_drvdata *drvdata =
(struct ssi_drvdata *)dev_get_drvdata(dev);

SSI_LOG_DEBUG("ssi_power_mgr_runtime_resume , unset HOST_POWER_DOWN_EN\n");
WRITE_REGISTER(drvdata->cc_base + CC_REG_OFFSET(HOST_RGF, HOST_POWER_DOWN_EN), POWER_DOWN_DISABLE);

ssi_pm_ext_hw_resume(dev);

rc = init_cc_regs(drvdata, false);
if (rc !=0) {
SSI_LOG_ERR("init_cc_regs (%x)\n",rc);
return rc;
}

rc = ssi_request_mgr_runtime_resume_queue(drvdata);
if (rc !=0) {
SSI_LOG_ERR("ssi_request_mgr_runtime_resume_queue (%x)\n",rc);
return rc;
}


ssi_hash_init_sram_digest_consts(drvdata);

ssi_ivgen_init_sram_pool(drvdata);
return 0;
}