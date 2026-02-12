static void ufshcd_config_mcq(struct ufs_hba *hba)
{
int ret;

ret = ufshcd_mcq_vops_config_esi(hba);
dev_info(hba->dev, "ESI %sconfigured\n", ret ? "is not " : "");

ufshcd_enable_intr(hba, UFSHCD_ENABLE_MCQ_INTRS);
ufshcd_mcq_make_queues_operational(hba);
ufshcd_mcq_config_mac(hba, hba->nutrs);

hba->host->can_queue = hba->nutrs - UFSHCD_NUM_RESERVED;
hba->reserved_slot = hba->nutrs - UFSHCD_NUM_RESERVED;


ufshcd_writel(hba, ufshcd_readl(hba, REG_UFS_MEM_CFG) | 0x1,
REG_UFS_MEM_CFG);
hba->mcq_enabled = true;

dev_info(hba->dev, "MCQ configured, nr_queues=%d, io_queues=%d, read_queue=%d, poll_queues=%d, queue_depth=%d\n",
hba->nr_hw_queues, hba->nr_queues[HCTX_TYPE_DEFAULT],
hba->nr_queues[HCTX_TYPE_READ], hba->nr_queues[HCTX_TYPE_POLL],
hba->nutrs);
}