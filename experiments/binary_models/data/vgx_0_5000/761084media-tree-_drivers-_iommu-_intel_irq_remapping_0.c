static int alloc_irte(struct intel_iommu *iommu, int irq,
struct irq_2_iommu *irq_iommu, u16 count)
{
struct ir_table *table = iommu->ir_table;
unsigned int mask = 0;
unsigned long flags;
int index;

if (!count || !irq_iommu)
return -1;

if (count > 1) {
count = __roundup_pow_of_two(count);
mask = ilog2(count);
}

if (mask > ecap_max_handle_mask(iommu->ecap)) {
pr_err("Requested mask %x exceeds the max invalidation handle"
" mask value %Lx\n", mask,
ecap_max_handle_mask(iommu->ecap));
return -1;
}

raw_spin_lock_irqsave(&irq_2_ir_lock, flags);
index = bitmap_find_free_region(table->bitmap,
INTR_REMAP_TABLE_ENTRIES, mask);
if (index < 0) {
pr_warn("IR%d: can't allocate an IRTE\n", iommu->seq_id);
} else {
irq_iommu->iommu = iommu;
irq_iommu->irte_index =  index;
irq_iommu->sub_handle = 0;
irq_iommu->irte_mask = mask;
irq_iommu->mode = IRQ_REMAPPING;
}
raw_spin_unlock_irqrestore(&irq_2_ir_lock, flags);

return index;
}