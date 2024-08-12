struct VAR1 *FUN1(struct VAR2 *VAR3, qemu_irq VAR4, VAR5 *VAR6, omap_clk VAR7, omap_clk VAR8)
{
    int VAR9;
    struct VAR1 *VAR10 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR10->VAR4 = VAR4;
    VAR10->VAR11.VAR12 = *VAR6++;
    VAR10->VAR11.VAR13 = *VAR6;
    FUN3(VAR10);
    FUN4("", &VAR10->VAR11.VAR14);
    VAR9 = FUN5(VAR15, VAR16, VAR10);
    FUN6(VAR3, 0, VAR9);
    return VAR10;
}