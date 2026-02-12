static int
smntemp_detach(dev_info_t *dip, ddi_detach_cmd_t cmd)
{
smntemp_t *smntemp = &smntemp_data;

if (cmd == DDI_SUSPEND) {
return (DDI_SUCCESS);
} else if (cmd != DDI_DETACH) {
return (DDI_FAILURE);
}

if (smntemp->smn_dip == NULL) {
dev_err(smntemp->smn_dip, CE_WARN, "!asked to detach smn "
"instance %d that was never attached",
ddi_get_instance(dip));
return (DDI_FAILURE);
}

smntemp_cleanup(smntemp);
return (DDI_SUCCESS);
}