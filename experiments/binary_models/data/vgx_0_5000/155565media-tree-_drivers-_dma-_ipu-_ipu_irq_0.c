static void ipu_irq_unmask(struct irq_data *d)
{
struct ipu_irq_map *map = irq_data_get_irq_chip_data(d);
struct ipu_irq_bank *bank;
uint32_t reg;
unsigned long lock_flags;

raw_spin_lock_irqsave(&bank_lock, lock_flags);

bank = map->bank;
if (!bank) {
raw_spin_unlock_irqrestore(&bank_lock, lock_flags);
pr_err("IPU: %s(%u) - unmapped!\n", __func__, d->irq);
return;
}

reg = ipu_read_reg(bank->ipu, bank->control);
reg |= (1UL << (map->source & 31));
ipu_write_reg(bank->ipu, reg, bank->control);

raw_spin_unlock_irqrestore(&bank_lock, lock_flags);
}