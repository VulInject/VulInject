void __init srcu_init(void)
{
struct srcu_struct *ssp;


if (SRCU_SIZING_IS(SRCU_SIZING_AUTO)) {
if (nr_cpu_ids >= big_cpu_lim) {
convert_to_big = SRCU_SIZING_INIT; 
pr_info("%s: Setting srcu_struct sizes to big.\n", __func__);
} else {
convert_to_big = SRCU_SIZING_NONE | SRCU_SIZING_CONTEND;
pr_info("%s: Setting srcu_struct sizes based on contention.\n", __func__);
}
}


srcu_init_done = true;
while (!list_empty(&srcu_boot_list)) {
ssp = list_first_entry(&srcu_boot_list, struct srcu_struct,
work.work.entry);
list_del_init(&ssp->work.work.entry);
if (SRCU_SIZING_IS(SRCU_SIZING_INIT) && ssp->srcu_size_state == SRCU_SIZE_SMALL)
ssp->srcu_size_state = SRCU_SIZE_ALLOC;
queue_work(rcu_gp_wq, &ssp->work.work);
}
}