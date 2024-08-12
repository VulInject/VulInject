struct VAR1 *FUN1(struct VAR2 *VAR3, qemu_irq VAR4, omap_clk VAR5, omap_clk VAR6, qemu_irq VAR7, qemu_irq VAR8, VAR9 *VAR10)
{
    target_phys_addr_t VAR11 = FUN2(VAR3, 0, 0);
    struct VAR1 *VAR12 = FUN3(VAR11, VAR4, VAR5, VAR6, VAR7, VAR8, VAR10);
    int VAR13 = FUN4(0, VAR14, VAR15, VAR12);
    VAR12->VAR3 = VAR3;
    FUN5(VAR12->VAR11 + 0x20, 0x100, VAR13);
    return VAR12;
}