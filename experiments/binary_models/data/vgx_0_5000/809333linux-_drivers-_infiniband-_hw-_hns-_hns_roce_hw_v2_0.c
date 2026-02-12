static int init_csq(struct hns_roce_dev *hr_dev,
struct hns_roce_v2_cmq_ring *csq)
{
dma_addr_t dma;
int ret;

csq->desc_num = CMD_CSQ_DESC_NUM;
spin_lock_init(&csq->lock);
csq->flag = TYPE_CSQ;
csq->head = 0;

ret = hns_roce_alloc_cmq_desc(hr_dev, csq);
if (ret)
return ret;

dma = csq->desc_dma_addr;
roce_write(hr_dev, ROCEE_TX_CMQ_BASEADDR_L_REG, lower_32_bits(dma));
roce_write(hr_dev, ROCEE_TX_CMQ_BASEADDR_H_REG, upper_32_bits(dma));
roce_write(hr_dev, ROCEE_TX_CMQ_DEPTH_REG,
(u32)csq->desc_num >> HNS_ROCE_CMQ_DESC_NUM_S);


roce_write(hr_dev, ROCEE_TX_CMQ_CI_REG, 0);
roce_write(hr_dev, ROCEE_TX_CMQ_PI_REG, 0);

return 0;
}