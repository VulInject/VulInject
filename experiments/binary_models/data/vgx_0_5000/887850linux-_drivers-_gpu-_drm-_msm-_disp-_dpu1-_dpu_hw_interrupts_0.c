static int dpu_debugfs_core_irq_show(struct seq_file *s, void *v)
{
struct dpu_kms *dpu_kms = s->private;
unsigned long irq_flags;
int i, irq_count;
void *cb;

for (i = 0; i < dpu_kms->hw_intr->total_irqs; i++) {
spin_lock_irqsave(&dpu_kms->hw_intr->irq_lock, irq_flags);
irq_count = atomic_read(&dpu_kms->hw_intr->irq_tbl[i].count);
cb = dpu_kms->hw_intr->irq_tbl[i].cb;
spin_unlock_irqrestore(&dpu_kms->hw_intr->irq_lock, irq_flags);

if (irq_count || cb)
seq_printf(s, "idx:%d irq:%d cb:%ps\n", i, irq_count, cb);
}

return 0;
}