static int DeviceConfigureQueues(DPDKIfaceConfig *iconf, const struct rte_eth_dev_info *dev_info,
const struct rte_eth_conf *port_conf)
{
SCEnter();
int retval;
uint16_t mtu_size;
uint16_t mbuf_size;
struct rte_eth_rxconf rxq_conf;
struct rte_eth_txconf txq_conf;

char mempool_name[64];
snprintf(mempool_name, 64, "mempool_%.20s", iconf->iface);

mtu_size = iconf->mtu + RTE_ETHER_CRC_LEN + RTE_ETHER_HDR_LEN + 4;
mbuf_size = ROUNDUP(mtu_size, 1024) + RTE_PKTMBUF_HEADROOM;
SCLogInfo("%s: creating packet mbuf pool %s of size %d, cache size %d, mbuf size %d",
iconf->iface, mempool_name, iconf->mempool_size, iconf->mempool_cache_size, mbuf_size);

iconf->pkt_mempool = rte_pktmbuf_pool_create(mempool_name, iconf->mempool_size,
iconf->mempool_cache_size, 0, mbuf_size, (int)iconf->socket_id);
if (iconf->pkt_mempool == NULL) {
retval = -rte_errno;
SCLogError("%s: rte_pktmbuf_pool_create failed with code %d (mempool: %s) - %s",
iconf->iface, rte_errno, mempool_name, rte_strerror(rte_errno));
SCReturnInt(retval);
}

for (uint16_t queue_id = 0; queue_id < iconf->nb_rx_queues; queue_id++) {
rxq_conf = dev_info->default_rxconf;
rxq_conf.offloads = port_conf->rxmode.offloads;
rxq_conf.rx_thresh.hthresh = 0;
rxq_conf.rx_thresh.pthresh = 0;
rxq_conf.rx_thresh.wthresh = 0;
rxq_conf.rx_free_thresh = 0;
rxq_conf.rx_drop_en = 0;
SCLogPerf("%s: rx queue setup: queue:%d port:%d rx_desc:%d tx_desc:%d rx: htresh: %d "
"pthresh %d wtresh %d free_tresh %d drop_en %d offloads %lu",
iconf->iface, queue_id, iconf->port_id, iconf->nb_rx_desc, iconf->nb_tx_desc,
rxq_conf.rx_thresh.hthresh, rxq_conf.rx_thresh.pthresh, rxq_conf.rx_thresh.wthresh,
rxq_conf.rx_free_thresh, rxq_conf.rx_drop_en, rxq_conf.offloads);

retval = rte_eth_rx_queue_setup(iconf->port_id, queue_id, iconf->nb_rx_desc,
iconf->socket_id, &rxq_conf, iconf->pkt_mempool);
if (retval < 0) {
rte_mempool_free(iconf->pkt_mempool);
SCLogError(
"%s: rte_eth_rx_queue_setup failed with code %d for device queue %u of port %u",
iconf->iface, retval, queue_id, iconf->port_id);
SCReturnInt(retval);
}
}

for (uint16_t queue_id = 0; queue_id < iconf->nb_tx_queues; queue_id++) {
txq_conf = dev_info->default_txconf;
txq_conf.offloads = port_conf->txmode.offloads;
SCLogPerf("%s: tx queue setup: queue:%d port:%d", iconf->iface, queue_id, iconf->port_id);
retval = rte_eth_tx_queue_setup(
iconf->port_id, queue_id, iconf->nb_tx_desc, iconf->socket_id, &txq_conf);
if (retval < 0) {
rte_mempool_free(iconf->pkt_mempool);
SCLogError(
"%s: rte_eth_tx_queue_setup failed with code %d for device queue %u of port %u",
iconf->iface, retval, queue_id, iconf->port_id);
SCReturnInt(retval);
}
}

SCReturnInt(0);
}