static int
av1394_getinfo(dev_info_t *dip, ddi_info_cmd_t infocmd, void *arg,
void **result)
{
dev_t		dev = (dev_t)arg;
av1394_inst_t	*avp;
int		rval = DDI_FAILURE;

switch (infocmd) {
case DDI_INFO_DEVT2DEVINFO:
if ((avp = AV1394_DEV2STATE(dev)) != NULL) {
*result = avp->av_dip;
rval = DDI_SUCCESS;
} else {
*result = NULL;
}
break;
case DDI_INFO_DEVT2INSTANCE:
*result = (void *)(uintptr_t)AV1394_DEV2INST(dev);
rval = DDI_SUCCESS;
break;
}

return (rval);
}