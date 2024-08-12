static struct VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5, qemu_irq VAR6, qemu_irq VAR7, omap_clk VAR8)
{
    struct VAR1 *VAR9 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR9->VAR10 = VAR6;
    VAR9->VAR11 = VAR5;
    VAR9->VAR7 = VAR7;
    VAR9->VAR12 = FUN3(VAR13, VAR9, 16);
    FUN4(VAR9);
    FUN5(&VAR9->VAR14, NULL, &VAR15, VAR9, "", 0x800);
    FUN6(VAR3, VAR4, &VAR9->VAR14);
    FUN7(VAR8, FUN8(VAR16, VAR9, 0));
    return VAR9;
}