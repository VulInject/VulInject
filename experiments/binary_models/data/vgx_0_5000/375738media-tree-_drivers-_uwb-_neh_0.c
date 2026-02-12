static void uwb_rc_neh_grok_event(struct uwb_rc *rc, struct uwb_rceb *rceb, size_t size)
{
struct device *dev = &rc->uwb_dev.dev;
struct uwb_rc_neh *neh;
struct uwb_rceb *notif;
unsigned long flags;

if (rceb->bEventContext == 0) {
notif = kmalloc(size, GFP_ATOMIC);
if (notif) {
memcpy(notif, rceb, size);
uwb_rc_notif(rc, notif, size);
} else
dev_err(dev, "event 0x%02x/%04x/%02x (%zu bytes): no memory\n",
rceb->bEventType, le16_to_cpu(rceb->wEvent),
rceb->bEventContext, size);
} else {
neh = uwb_rc_neh_lookup(rc, rceb);
if (neh) {
spin_lock_irqsave(&rc->neh_lock, flags);

neh->completed = 1;
del_timer(&neh->timer);
spin_unlock_irqrestore(&rc->neh_lock, flags);
uwb_rc_neh_cb(neh, rceb, size);
} else
dev_warn(dev, "event 0x%02x/%04x/%02x (%zu bytes): nobody cared\n",
rceb->bEventType, le16_to_cpu(rceb->wEvent),
rceb->bEventContext, size);
}
}