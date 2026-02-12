static void riscv_aclint_swi_realize(DeviceState *dev, Error **errp)
{
RISCVAclintSwiState *swi = RISCV_ACLINT_SWI(dev);
int i;

memory_region_init_io(&swi->mmio, OBJECT(dev), &riscv_aclint_swi_ops, swi,
TYPE_RISCV_ACLINT_SWI, RISCV_ACLINT_SWI_SIZE);
sysbus_init_mmio(SYS_BUS_DEVICE(dev), &swi->mmio);

swi->soft_irqs = g_malloc(sizeof(qemu_irq) * swi->num_harts);
qdev_init_gpio_out(dev, swi->soft_irqs, swi->num_harts);


for (i = 0; i < swi->num_harts; i++) {
RISCVCPU *cpu = RISCV_CPU(qemu_get_cpu(swi->hartid_base + i));

if (riscv_cpu_claim_interrupts(cpu, swi->sswi ? 0 : MIP_MSIP) < 0) {
error_report("MSIP already claimed");
exit(1);
}
}
}