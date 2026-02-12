void iwl_pcie_gen2_tx_stop(struct iwl_trans *trans)
{
struct iwl_trans_pcie *trans_pcie = IWL_TRANS_GET_PCIE_TRANS(trans);
int txq_id;


memset(trans_pcie->queue_stopped, 0, sizeof(trans_pcie->queue_stopped));
memset(trans_pcie->queue_used, 0, sizeof(trans_pcie->queue_used));


for (txq_id = 0; txq_id < ARRAY_SIZE(trans_pcie->txq); txq_id++) {
if (!trans_pcie->txq[txq_id])
continue;
iwl_pcie_gen2_txq_unmap(trans, txq_id);
}
}