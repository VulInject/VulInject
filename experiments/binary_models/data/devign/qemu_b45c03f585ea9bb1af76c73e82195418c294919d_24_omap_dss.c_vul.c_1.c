struct VAR1 *FUN1(struct VAR2 *VAR3, VAR4 *VAR5, hwaddr VAR6, qemu_irq VAR7, qemu_irq VAR8, omap_clk VAR9, omap_clk VAR10, omap_clk VAR11, omap_clk VAR12, omap_clk VAR13)
{
    struct VAR1 *VAR14 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR14->VAR7 = VAR7;
    VAR14->VAR8 = VAR8;
    FUN3(VAR14);
    FUN4(&VAR14->VAR15, NULL, &VAR16, VAR14, "", FUN5(VAR3, 0));
    FUN4(&VAR14->VAR17, NULL, &VAR18, VAR14, "", FUN5(VAR3, 1));
    FUN4(&VAR14->VAR19, NULL, &VAR20, VAR14, "", FUN5(VAR3, 2));
    FUN4(&VAR14->VAR21, NULL, &VAR22, VAR14, "", FUN5(VAR3, 3));
    FUN4(&VAR14->VAR23, NULL, &VAR24, VAR14, "", 0x1000);
    FUN6(VAR3, 0, &VAR14->VAR15);
    FUN6(VAR3, 1, &VAR14->VAR17);
    FUN6(VAR3, 2, &VAR14->VAR19);
    FUN6(VAR3, 3, &VAR14->VAR21);
    FUN7(VAR5, VAR6, &VAR14->VAR23);
    VAR14->VAR25 = FUN8(VAR26, VAR27, VAR28, VAR14);
    return VAR14;
}