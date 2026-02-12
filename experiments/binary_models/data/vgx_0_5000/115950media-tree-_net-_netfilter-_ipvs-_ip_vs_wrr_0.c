static int ip_vs_wrr_dest_changed(struct ip_vs_service *svc,
struct ip_vs_dest *dest)
{
struct ip_vs_wrr_mark *mark = svc->sched_data;

spin_lock_bh(&svc->sched_lock);
mark->cl = list_entry(&svc->destinations, struct ip_vs_dest, n_list);
mark->di = ip_vs_wrr_gcd_weight(svc);
mark->mw = ip_vs_wrr_max_weight(svc) - (mark->di - 1);
if (mark->cw > mark->mw || !mark->cw)
mark->cw = mark->mw;
else if (mark->di > 1)
mark->cw = (mark->cw / mark->di) * mark->di + 1;
spin_unlock_bh(&svc->sched_lock);
return 0;
}