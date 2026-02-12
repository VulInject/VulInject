static void
notify_enable(struct notify_zone* zone, struct xfrd_soa* new_soa)
{
if(!zone->options->pattern->notify) {
return; 
}

if(new_soa == NULL)
memset(zone->current_soa, 0, sizeof(xfrd_soa_type));
else
memcpy(zone->current_soa, new_soa, sizeof(xfrd_soa_type));
if(zone->is_waiting)
return;

if(xfrd->notify_udp_num < XFRD_MAX_UDP_NOTIFY) {
setup_notify_active(zone);
xfrd->notify_udp_num++;
return;
}

zone->notify_current = zone->options->pattern->notify;
zone->is_waiting = 1;
zone->waiting_next = NULL;
zone->waiting_prev = xfrd->notify_waiting_last;
if(xfrd->notify_waiting_last) {
xfrd->notify_waiting_last->waiting_next = zone;
} else {
xfrd->notify_waiting_first = zone;
}
xfrd->notify_waiting_last = zone;
DEBUG(DEBUG_XFRD,1, (LOG_INFO, "xfrd: zone %s: notify on waiting list.",
zone->apex_str));
}