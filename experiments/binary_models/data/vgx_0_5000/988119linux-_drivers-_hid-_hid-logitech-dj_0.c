static void logi_hidpp_dev_conn_notif_27mhz(struct hid_device *hdev,
struct hidpp_event *hidpp_report,
struct dj_workitem *workitem)
{
workitem->type = WORKITEM_TYPE_PAIRED;
workitem->quad_id_lsb = hidpp_report->params[HIDPP_PARAM_27MHZ_DEVID];
switch (hidpp_report->device_index) {
case 1: 
case 2: 
workitem->device_type = HIDPP_DEVICE_TYPE_MOUSE;
workitem->reports_supported |= STD_MOUSE | HIDPP;
break;
case 3: 
if (hidpp_report->params[HIDPP_PARAM_DEVICE_INFO] & HIDPP_27MHZ_SECURE_MASK) {
hid_info(hdev, "Keyboard connection is encrypted\n");
} else {
hid_warn(hdev, "Keyboard events are send over the air in plain-text / unencrypted\n");
hid_warn(hdev, "See: https:
}
fallthrough;
case 4: 
workitem->device_type = HIDPP_DEVICE_TYPE_KEYBOARD;
workitem->reports_supported |= STD_KEYBOARD | MULTIMEDIA |
POWER_KEYS | HIDPP;
break;
default:
hid_warn(hdev, "%s: unexpected device-index %d", __func__,
hidpp_report->device_index);
}
}