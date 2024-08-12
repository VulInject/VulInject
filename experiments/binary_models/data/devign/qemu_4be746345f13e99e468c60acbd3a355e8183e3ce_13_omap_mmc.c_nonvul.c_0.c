struct VAR1 *FUN1(hwaddr VAR2, VAR3 *VAR4, VAR5 *VAR6, qemu_irq VAR7, qemu_irq VAR8[], omap_clk VAR9)
{
    struct VAR1 *VAR10 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR10->VAR7 = VAR7;
    VAR10->VAR8 = VAR8;
    VAR10->VAR9 = VAR9;
    VAR10->VAR11 = 1;
    VAR10->VAR12 = 1;
    FUN3(VAR10);
    FUN4(&VAR10->VAR13, NULL, &VAR14, VAR10, "", 0x800);
    FUN5(VAR4, VAR2, &VAR10->VAR13);
    VAR10->VAR15 = FUN6(VAR6, false);
    if (VAR10->VAR15 == NULL)
    {
        FUN7(1);
    }
    return VAR10;
}