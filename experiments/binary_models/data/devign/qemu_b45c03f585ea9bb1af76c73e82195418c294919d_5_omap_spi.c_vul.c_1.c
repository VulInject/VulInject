struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4, qemu_irq VAR5, VAR6 *VAR7, omap_clk VAR8, omap_clk VAR9)
{
    struct VAR1 *VAR10 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    struct VAR11 *VAR12 = VAR10->VAR12;
    VAR10->VAR5 = VAR5;
    VAR10->VAR4 = VAR4;
    while (VAR4--)
    {
        VAR12->VAR13 = *VAR7++;
        VAR12->VAR14 = *VAR7++;
        VAR12++;
    }
    FUN3(VAR10);
    FUN4(&VAR10->VAR15, NULL, &VAR16, VAR10, "", FUN5(VAR3, 0));
    FUN6(VAR3, 0, &VAR10->VAR15);
    return VAR10;
}