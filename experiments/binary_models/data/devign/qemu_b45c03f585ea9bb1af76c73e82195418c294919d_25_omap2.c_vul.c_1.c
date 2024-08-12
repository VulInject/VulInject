static struct VAR1 *FUN1(struct VAR2 *VAR3, qemu_irq VAR4, VAR5 *VAR6, omap_clk VAR7, omap_clk VAR8)
{
    struct VAR1 *VAR9 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR9->VAR4 = VAR4;
    VAR9->VAR10.VAR11 = *VAR6++;
    VAR9->VAR10.VAR12 = *VAR6;
    FUN3(VAR9);
    FUN4("", &VAR9->VAR10.VAR13);
    FUN5(&VAR9->VAR14, NULL, &VAR15, VAR9, "", FUN6(VAR3, 0));
    FUN7(VAR3, 0, &VAR9->VAR14);
    return VAR9;
}