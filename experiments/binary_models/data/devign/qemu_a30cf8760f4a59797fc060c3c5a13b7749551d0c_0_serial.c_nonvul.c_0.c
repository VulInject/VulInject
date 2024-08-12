VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, int VAR5, qemu_irq VAR6, int VAR7, VAR8 *VAR9, enum device_endian VAR10)
{
    VAR1 *VAR11;
    VAR12 *VAR13 = NULL;
    VAR11 = FUN2(sizeof(VAR1));
    VAR11->VAR5 = VAR5;
    VAR11->VAR6 = VAR6;
    VAR11->VAR7 = VAR7;
    VAR11->VAR9 = VAR9;
    FUN3(VAR11, &VAR13);
    if (VAR13 != NULL)
    {
        FUN4("", FUN5(VAR13));
        FUN6(VAR13);
        FUN7(1);
    }
    FUN8(NULL, VAR4, &VAR14, VAR11);
    FUN9(&VAR11->VAR15, NULL, &VAR16[VAR10], VAR11, "", 8 << VAR5);
    FUN10(VAR3, VAR4, &VAR11->VAR15);
    return VAR11;
}