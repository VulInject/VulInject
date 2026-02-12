static int zebra_ns_continue_read(struct zebra_netns_info *zns_info,
int stop_retry)
{
void *ns_path_ptr = (void *)zns_info->netnspath;

if (stop_retry) {
XFREE(MTYPE_NETNS_MISC, ns_path_ptr);
XFREE(MTYPE_NETNS_MISC, zns_info);
return 0;
}
thread_add_timer_msec(zrouter.master, zebra_ns_ready_read,
(void *)zns_info, ZEBRA_NS_POLLING_INTERVAL_MSEC,
NULL);
return 0;
}