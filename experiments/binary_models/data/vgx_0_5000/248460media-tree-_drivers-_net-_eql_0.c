static void eql_timer(unsigned long param)
{
equalizer_t *eql = (equalizer_t *) param;
struct list_head *this, *tmp, *head;

spin_lock(&eql->queue.lock);
head = &eql->queue.all_slaves;
list_for_each_safe(this, tmp, head) {
slave_t *slave = list_entry(this, slave_t, list);

if ((slave->dev->flags & IFF_UP) == IFF_UP) {
slave->bytes_queued -= slave->priority_Bps;
if (slave->bytes_queued < 0)
slave->bytes_queued = 0;
} else {
eql_kill_one_slave(&eql->queue, slave);
}

}
spin_unlock(&eql->queue.lock);

eql->timer.expires = jiffies + EQL_DEFAULT_RESCHED_IVAL;
add_timer(&eql->timer);
}

static const char version[] __initconst =
"Equalizer2002: Simon Janes (simon@ncm.com) and David S. Miller (davem@redhat.com)";

static const struct net_device_ops eql_netdev_ops = {
.ndo_open	= eql_open,
.ndo_stop	= eql_close,
.ndo_do_ioctl	= eql_ioctl,
.ndo_start_xmit	= eql_slave_xmit,
};