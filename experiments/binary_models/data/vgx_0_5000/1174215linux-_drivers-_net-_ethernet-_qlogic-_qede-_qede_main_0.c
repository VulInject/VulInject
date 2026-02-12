static int qede_alloc_mem_fp(struct qede_dev *edev, struct qede_fastpath *fp)
{
int rc = 0;

rc = qede_alloc_mem_sb(edev, fp->sb_info, fp->id);
if (rc)
goto out;

if (fp->type & QEDE_FASTPATH_RX) {
rc = qede_alloc_mem_rxq(edev, fp->rxq);
if (rc)
goto out;
}

if (fp->type & QEDE_FASTPATH_XDP) {
rc = qede_alloc_mem_txq(edev, fp->xdp_tx);
if (rc)
goto out;
}

if (fp->type & QEDE_FASTPATH_TX) {
int cos;

for_each_cos_in_txq(edev, cos) {
rc = qede_alloc_mem_txq(edev, &fp->txq[cos]);
if (rc)
goto out;
}
}

out:
return rc;
}