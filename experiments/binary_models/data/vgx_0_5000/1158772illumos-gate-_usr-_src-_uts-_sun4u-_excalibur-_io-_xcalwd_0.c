static int
xcalwd_detach(dev_info_t *dip, ddi_detach_cmd_t cmd)
{
xcalwd_state_t	*tsp;
int			instance;

switch (cmd) {
case DDI_DETACH:
instance = ddi_get_instance(dip);
tsp = ddi_get_soft_state(xcalwd_statep, instance);
ddi_remove_minor_node(dip, NULL);
mutex_destroy(&tsp->lock);
ddi_soft_state_free(xcalwd_statep, instance);
return (DDI_SUCCESS);
case DDI_SUSPEND:
return (DDI_SUCCESS);
default:
break;
}
return (DDI_FAILURE);
}