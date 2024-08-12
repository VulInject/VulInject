static struct VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5, omap_clk VAR6)
{
    struct VAR1 *VAR7 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR7->VAR5 = VAR5;
    VAR7->VAR6 = VAR6;
    VAR7->VAR8 = FUN3(VAR9, VAR10, VAR7);
    VAR7->VAR11 = FUN4(VAR12, VAR7);
    FUN5(VAR7);
    FUN6(VAR7);
    FUN7(&VAR7->VAR13, &VAR14, VAR7, "", 0x100);
    FUN8(VAR3, VAR4, &VAR7->VAR13);
    return VAR7;
}