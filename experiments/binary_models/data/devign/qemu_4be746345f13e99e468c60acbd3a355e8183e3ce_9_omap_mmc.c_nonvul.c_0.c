struct VAR1 *FUN1(struct VAR2 *VAR3, VAR4 *VAR5, qemu_irq VAR6, qemu_irq VAR7[], omap_clk VAR8, omap_clk VAR9)
{
    struct VAR1 *VAR10 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR10->VAR6 = VAR6;
    VAR10->VAR7 = VAR7;
    VAR10->VAR11 = VAR8;
    VAR10->VAR12 = 4;
    VAR10->VAR13 = 2;
    FUN3(VAR10);
    FUN4(&VAR10->VAR14, NULL, &VAR15, VAR10, "", FUN5(VAR3, 0));
    FUN6(VAR3, 0, &VAR10->VAR14);
    VAR10->VAR16 = FUN7(VAR5, false);
    if (VAR10->VAR16 == NULL)
    {
        FUN8(1);
    }
    VAR10->VAR17 = FUN9(VAR18, VAR10, 0);
    FUN10(VAR10->VAR16, NULL, VAR10->VAR17);
    return VAR10;
}