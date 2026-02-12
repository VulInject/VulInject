static void iwl_pcie_rxq_check_wrptr(struct iwl_trans *trans)
{
struct iwl_trans_pcie *trans_pcie = IWL_TRANS_GET_PCIE_TRANS(trans);
int i;

for (i = 0; i < trans->num_rx_queues; i++) {
struct iwl_rxq *rxq = &trans_pcie->rxq[i];

if (!rxq->need_update)
continue;
spin_lock(&rxq->lock);
iwl_pcie_rxq_inc_wr_ptr(trans, rxq);
rxq->need_update = false;
spin_unlock(&rxq->lock);
}
}