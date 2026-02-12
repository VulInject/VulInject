void
dr_init_mem_unit(dr_mem_unit_t *mp)
{
dr_state_t	new_state;


if (DR_DEV_IS_ATTACHED(&mp->sbm_cm)) {
new_state = DR_STATE_CONFIGURED;
mp->sbm_cm.sbdev_cond = SBD_COND_OK;
} else if (DR_DEV_IS_PRESENT(&mp->sbm_cm)) {
new_state = DR_STATE_CONNECTED;
mp->sbm_cm.sbdev_cond = SBD_COND_OK;
} else if (mp->sbm_cm.sbdev_id != (drmachid_t)0) {
new_state = DR_STATE_OCCUPIED;
} else {
new_state = DR_STATE_EMPTY;
}

if (DR_DEV_IS_PRESENT(&mp->sbm_cm))
dr_init_mem_unit_data(mp);


dr_device_transition(&mp->sbm_cm, new_state);
}