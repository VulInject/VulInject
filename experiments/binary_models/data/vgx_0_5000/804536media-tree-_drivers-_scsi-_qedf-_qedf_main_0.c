static int qedf_alloc_and_init_sb(struct qedf_ctx *qedf,
struct qed_sb_info *sb_info, u16 sb_id)
{
struct status_block *sb_virt;
dma_addr_t sb_phys;
int ret;

sb_virt = dma_alloc_coherent(&qedf->pdev->dev,
sizeof(struct status_block), &sb_phys, GFP_KERNEL);

if (!sb_virt) {
QEDF_ERR(&(qedf->dbg_ctx), "Status block allocation failed "
"for id = %d.\n", sb_id);
return -ENOMEM;
}

ret = qed_ops->common->sb_init(qedf->cdev, sb_info, sb_virt, sb_phys,
sb_id, QED_SB_TYPE_STORAGE);

if (ret) {
QEDF_ERR(&(qedf->dbg_ctx), "Status block initialization "
"failed for id = %d.\n", sb_id);
return ret;
}

return 0;
}