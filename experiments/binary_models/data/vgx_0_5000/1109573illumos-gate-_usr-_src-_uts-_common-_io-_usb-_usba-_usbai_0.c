void
usb_unregister_event_cbs(dev_info_t *dip, usb_event_t *usb_evdata)
{
usba_evdata_t		*evdata;
usba_device_t		*usba_device = usba_get_usba_device(dip);

evdata = usba_get_evdata(dip);

if (evdata->ev_rm_cb_id != NULL) {
(void) ddi_remove_event_handler(evdata->ev_rm_cb_id);
evdata->ev_rm_cb_id = NULL;
}

if (evdata->ev_ins_cb_id != NULL) {
(void) ddi_remove_event_handler(evdata->ev_ins_cb_id);
evdata->ev_ins_cb_id = NULL;
}

if (evdata->ev_suspend_cb_id != NULL) {
(void) ddi_remove_event_handler(evdata->ev_suspend_cb_id);
evdata->ev_suspend_cb_id = NULL;
}

if (evdata->ev_resume_cb_id != NULL) {
(void) ddi_remove_event_handler(evdata->ev_resume_cb_id);
evdata->ev_resume_cb_id = NULL;
}

mutex_enter(&usba_device->usb_mutex);
usba_device->usb_client_flags[usba_get_ifno(dip)] &=
~USBA_CLIENT_FLAG_EV_CBS;
mutex_exit(&usba_device->usb_mutex);
}