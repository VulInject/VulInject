static int htcpld_set_type(struct irq_data *data, unsigned int flags)
{
struct htcpld_chip *chip = irq_data_get_irq_chip_data(data);

if (flags & ~IRQ_TYPE_SENSE_MASK)
return -EINVAL;


if (flags & (IRQ_TYPE_LEVEL_LOW|IRQ_TYPE_LEVEL_HIGH))
return -EINVAL;

chip->flow_type = flags;
return 0;
}

static struct irq_chip htcpld_muxed_chip = {
.name         = "htcpld",
.irq_mask     = htcpld_mask,
.irq_unmask   = htcpld_unmask,
.irq_set_type = htcpld_set_type,
};