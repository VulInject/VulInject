static void pktgen_mark_device(const struct pktgen_net *pn, const char *ifname)
{
struct pktgen_dev *pkt_dev = NULL;
const int max_tries = 10, msec_per_try = 125;
int i = 0;

mutex_lock(&pktgen_thread_lock);
pr_debug("%s: marking %s for removal\n", __func__, ifname);

while (1) {

pkt_dev = __pktgen_NN_threads(pn, ifname, REMOVE);
if (pkt_dev == NULL)
break;	

mutex_unlock(&pktgen_thread_lock);
pr_debug("%s: waiting for %s to disappear....\n",
__func__, ifname);
schedule_timeout_interruptible(msecs_to_jiffies(msec_per_try));
mutex_lock(&pktgen_thread_lock);

if (++i >= max_tries) {
pr_err("%s: timed out after waiting %d msec for device %s to be removed\n",
__func__, msec_per_try * i, ifname);
break;
}

}

mutex_unlock(&pktgen_thread_lock);
}