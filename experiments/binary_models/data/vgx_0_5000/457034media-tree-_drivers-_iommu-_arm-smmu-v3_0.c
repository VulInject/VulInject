static int arm_smmu_init_one_queue(struct arm_smmu_device *smmu,
struct arm_smmu_queue *q,
unsigned long prod_off,
unsigned long cons_off,
size_t dwords)
{
size_t qsz = ((1 << q->max_n_shift) * dwords) << 3;

q->base = dmam_alloc_coherent(smmu->dev, qsz, &q->base_dma, GFP_KERNEL);
if (!q->base) {
dev_err(smmu->dev, "failed to allocate queue (0x%zx bytes)\n",
qsz);
return -ENOMEM;
}

q->prod_reg	= smmu->base + prod_off;
q->cons_reg	= smmu->base + cons_off;
q->ent_dwords	= dwords;

q->q_base  = Q_BASE_RWA;
q->q_base |= q->base_dma & Q_BASE_ADDR_MASK << Q_BASE_ADDR_SHIFT;
q->q_base |= (q->max_n_shift & Q_BASE_LOG2SIZE_MASK)
<< Q_BASE_LOG2SIZE_SHIFT;

q->prod = q->cons = 0;
return 0;
}