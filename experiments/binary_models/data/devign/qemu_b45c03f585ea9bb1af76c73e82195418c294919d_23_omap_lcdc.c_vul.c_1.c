struct VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5, struct VAR6 *VAR7, omap_clk VAR8)
{
    struct VAR1 *VAR9 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR9->VAR5 = VAR5;
    VAR9->VAR7 = VAR7;
    VAR9->VAR3 = VAR3;
    FUN3(VAR9);
    FUN4(&VAR9->VAR10, NULL, &VAR11, VAR9, "", 0x100);
    FUN5(VAR3, VAR4, &VAR9->VAR10);
    VAR9->VAR12 = FUN6(NULL, 0, &VAR13, VAR9);
    return VAR9;
}