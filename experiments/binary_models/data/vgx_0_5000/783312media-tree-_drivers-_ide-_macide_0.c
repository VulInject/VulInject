static void __init macide_setup_ports(struct ide_hw *hw, unsigned long base,
int irq)
{
int i;

memset(hw, 0, sizeof(*hw));

for (i = 0; i < 8; i++)
hw->io_ports_array[i] = base + i * 4;

hw->io_ports.ctl_addr = base + IDE_CONTROL;

hw->irq = irq;
}

static const struct ide_port_ops macide_port_ops = {
.clear_irq		= macide_clear_irq,
.test_irq		= macide_test_irq,
};