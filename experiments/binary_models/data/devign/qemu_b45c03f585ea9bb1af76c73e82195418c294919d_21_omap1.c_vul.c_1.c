static struct VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5, qemu_irq VAR6, omap_clk VAR7)
{
    struct VAR1 *VAR8 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR8->VAR9 = VAR5;
    VAR8->VAR10 = VAR6;
    VAR8->VAR7 = FUN3(VAR11, VAR12, VAR8);
    FUN4(VAR8);
    FUN5(&VAR8->VAR13, NULL, &VAR14, VAR8, "", 0x800);
    FUN6(VAR3, VAR4, &VAR8->VAR13);
    return VAR8;
}