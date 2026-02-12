static void
hxge_link_poll(void *arg)
{
p_hxge_t		hxgep = (p_hxge_t)arg;
hpi_handle_t		handle;
cip_link_stat_t		link_stat;
hxge_timeout		*to = &hxgep->timeout;

handle = HXGE_DEV_HPI_HANDLE(hxgep);
HXGE_REG_RD32(handle, CIP_LINK_STAT, &link_stat.value);

if (to->report_link_status ||
(to->link_status != link_stat.bits.xpcs0_link_up)) {
to->link_status = link_stat.bits.xpcs0_link_up;
to->report_link_status = B_FALSE;

if (link_stat.bits.xpcs0_link_up) {
hxge_link_update(hxgep, LINK_STATE_UP);
} else {
hxge_link_update(hxgep, LINK_STATE_DOWN);
}
}


MUTEX_ENTER(&to->lock);
to->id = timeout(hxge_link_poll, arg, to->ticks);
MUTEX_EXIT(&to->lock);
}