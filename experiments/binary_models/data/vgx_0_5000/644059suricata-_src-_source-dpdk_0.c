static TmEcode ReceiveDPDKThreadDeinit(ThreadVars *tv, void *data)
{
SCEnter();
DPDKThreadVars *ptv = (DPDKThreadVars *)data;

int retval;
if (ptv->queue_id == 0) {
struct rte_eth_dev_info dev_info;
char iface[RTE_ETH_NAME_MAX_LEN];
retval = rte_eth_dev_get_name_by_port(ptv->port_id, iface);
if (retval != 0) {
SCLogError("Error (err=%d) when getting device name (port %d)", retval, ptv->port_id);
SCReturnInt(TM_ECODE_FAILED);
}
retval = rte_eth_dev_info_get(ptv->port_id, &dev_info);
if (retval != 0) {
SCLogError("Error (err=%d) during getting device info (port %s)", retval, iface);
SCReturnInt(TM_ECODE_FAILED);
}

DevicePreStopPMDSpecificActions(ptv, dev_info.driver_name);
}

rte_eth_dev_stop(ptv->port_id);
if (ptv->copy_mode == DPDK_COPY_MODE_TAP || ptv->copy_mode == DPDK_COPY_MODE_IPS) {
rte_eth_dev_stop(ptv->out_port_id);
}

if (ptv->queue_id == 0 && ptv->pkt_mempool != NULL) {
rte_mempool_free(ptv->pkt_mempool);
ptv->pkt_mempool = NULL;
}

SCFree(ptv);
SCReturnInt(TM_ECODE_OK);
}