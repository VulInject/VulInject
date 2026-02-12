void __init
init_pyxis_irqs(unsigned long ignore_mask)
{
long i;

*(vulp)PYXIS_INT_MASK = 0;		
*(vulp)PYXIS_INT_REQ  = -1;		
mb();


*(vuip) CIA_IACK_SC;

for (i = 16; i < 48; ++i) {
if ((ignore_mask >> i) & 1)
continue;
irq_set_chip_and_handler(i, &pyxis_irq_type, handle_level_irq);
irq_set_status_flags(i, IRQ_LEVEL);
}

if (request_irq(16 + 7, no_action, 0, "isa-cascade", NULL))
pr_err("Failed to register isa-cascade interrupt\n");
}