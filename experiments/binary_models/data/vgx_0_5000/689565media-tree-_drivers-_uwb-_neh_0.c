void uwb_rc_notif(struct uwb_rc *rc, struct uwb_rceb *rceb, ssize_t size)
{
struct device *dev = &rc->uwb_dev.dev;
struct uwb_event *uwb_evt;

if (size == -ESHUTDOWN)
return;
if (size < 0) {
dev_err(dev, "ignoring event with error code %zu\n",
size);
return;
}

uwb_evt = kzalloc(sizeof(*uwb_evt), GFP_ATOMIC);
if (unlikely(uwb_evt == NULL)) {
dev_err(dev, "no memory to queue event 0x%02x/%04x/%02x\n",
rceb->bEventType, le16_to_cpu(rceb->wEvent),
rceb->bEventContext);
return;
}
uwb_evt->rc = __uwb_rc_get(rc);	
uwb_evt->ts_jiffies = jiffies;
uwb_evt->type = UWB_EVT_TYPE_NOTIF;
uwb_evt->notif.size = size;
uwb_evt->notif.rceb = rceb;

uwbd_event_queue(uwb_evt);
}