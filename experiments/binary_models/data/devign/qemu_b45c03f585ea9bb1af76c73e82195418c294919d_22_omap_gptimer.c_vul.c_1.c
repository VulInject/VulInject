struct VAR1 *FUN1(struct VAR2 *VAR3, qemu_irq VAR4, omap_clk VAR5, omap_clk VAR6)
{
    struct VAR1 *VAR7 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR7->VAR3 = VAR3;
    VAR7->VAR4 = VAR4;
    VAR7->VAR8 = VAR5;
    VAR7->VAR9 = FUN3(VAR10, VAR11, VAR7);
    VAR7->VAR12 = FUN3(VAR10, VAR13, VAR7);
    VAR7->VAR14 = FUN4(VAR15, VAR7, 0);
    FUN5(VAR7);
    FUN6(VAR7);
    FUN7(&VAR7->VAR16, NULL, &VAR17, VAR7, "", FUN8(VAR3, 0));
    FUN9(VAR3, 0, &VAR7->VAR16);
    return VAR7;
}