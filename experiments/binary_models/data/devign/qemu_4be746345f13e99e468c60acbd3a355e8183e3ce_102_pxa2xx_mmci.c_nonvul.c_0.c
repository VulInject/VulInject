VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, VAR5 *VAR6, qemu_irq VAR7, qemu_irq VAR8, qemu_irq VAR9)
{
    VAR1 *VAR10;
    VAR10 = (VAR1 *)FUN2(sizeof(VAR1));
    VAR10->VAR7 = VAR7;
    VAR10->VAR8 = VAR8;
    VAR10->VAR9 = VAR9;
    FUN3(&VAR10->VAR11, NULL, &VAR12, VAR10, "", 0x00100000);
    FUN4(VAR3, VAR4, &VAR10->VAR11);
    VAR10->VAR13 = FUN5(VAR6, false);
    if (VAR10->VAR13 == NULL)
    {
        FUN6(1);
    }
    FUN7(NULL, "", 0, 0, VAR14, VAR15, VAR10);
    return VAR10;
}