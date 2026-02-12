static void br_forward_delay_timer_expired(struct timer_list *t)
{
struct net_bridge_port *p = from_timer(p, t, forward_delay_timer);
struct net_bridge *br = p->br;

br_debug(br, "port %u(%s) forward delay timer\n",
(unsigned int) p->port_no, p->dev->name);
spin_lock(&br->lock);
if (p->state == BR_STATE_LISTENING) {
br_set_state(p, BR_STATE_LEARNING);
mod_timer(&p->forward_delay_timer,
jiffies + br->forward_delay);
} else if (p->state == BR_STATE_LEARNING) {
br_set_state(p, BR_STATE_FORWARDING);
if (br_is_designated_for_some_port(br))
br_topology_change_detection(br);
netif_carrier_on(br->dev);
}
rcu_read_lock();
br_ifinfo_notify(RTM_NEWLINK, NULL, p);
rcu_read_unlock();
spin_unlock(&br->lock);
}