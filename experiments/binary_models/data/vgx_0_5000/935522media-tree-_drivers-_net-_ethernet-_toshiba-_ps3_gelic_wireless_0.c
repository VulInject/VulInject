void gelic_wl_interrupt(struct net_device *netdev, u64 status)
{
struct gelic_wl_info *wl = port_wl(netdev_priv(netdev));

if (status & GELIC_CARD_WLAN_COMMAND_COMPLETED) {
pr_debug("%s:cmd complete\n", __func__);
complete(&wl->cmd_done_intr);
}

if (status & GELIC_CARD_WLAN_EVENT_RECEIVED) {
pr_debug("%s:event received\n", __func__);
queue_delayed_work(wl->event_queue, &wl->event_work, 0);
}
}