static struct VAR1 *FUN1(struct VAR2 *VAR3, VAR4 *VAR5, hwaddr VAR6, qemu_irq VAR7, omap_clk VAR8, VAR9 *VAR10)
{
    struct VAR1 *VAR11 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR11->VAR7 = VAR7;
    FUN3(VAR11);
    VAR11->VAR10 = VAR10 ?: FUN4("", "", NULL);
    FUN5(&VAR11->VAR12, NULL, &VAR13, VAR11, "", FUN6(VAR3, 0));
    FUN7(VAR3, 0, &VAR11->VAR12);
    FUN5(&VAR11->VAR14, NULL, &VAR15, VAR11, "", 0x10000);
    FUN8(VAR5, VAR6, &VAR11->VAR14);
    return VAR11;
}