static uint32_t drc_isolate_physical(SpaprDrc *drc)
{
switch (drc->state) {
case SPAPR_DRC_STATE_PHYSICAL_POWERON:
return RTAS_OUT_SUCCESS; 
case SPAPR_DRC_STATE_PHYSICAL_CONFIGURED:
break; 
case SPAPR_DRC_STATE_PHYSICAL_UNISOLATE:
return RTAS_OUT_PARAM_ERROR; 
default:
g_assert_not_reached();
}

drc->state = SPAPR_DRC_STATE_PHYSICAL_POWERON;

if (drc->unplug_requested) {
uint32_t drc_index = spapr_drc_index(drc);
trace_spapr_drc_set_isolation_state_finalizing(drc_index);
spapr_drc_release(drc);
}

return RTAS_OUT_SUCCESS;
}