VAR1 *FUN1(VAR2 *VAR3, int *VAR4, int VAR5, VAR1 **VAR6, qemu_irq VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13;
    if (VAR5 != 1)
        return NULL;
    if (VAR3)
    {
        VAR9 = (VAR8 *)FUN2(VAR3, "", sizeof(VAR8), -1, NULL, NULL);
        if (VAR9 == NULL)
            return NULL;
        VAR11 = VAR9->VAR14.VAR15;
        FUN3(VAR11, VAR16);
        FUN4(VAR11, VAR17);
        FUN5(VAR11, VAR18);
        VAR11[VAR19] = VAR20;
        VAR11[0x3d] = 0x00;
        FUN6((VAR21 *)VAR9, 0, 0x40000, VAR22, &VAR23);
    }
    else
    {
        VAR9 = FUN7(sizeof(VAR8));
    }
    VAR9->VAR24 = FUN8(VAR25, VAR26, VAR9);
    VAR9->VAR5 = VAR5;
    VAR9->VAR27 = VAR28;
    VAR9->VAR29 = VAR30;
    VAR9->VAR31 = VAR32;
    for (VAR12 = 0; VAR12 < VAR33; VAR12++)
    {
        VAR9->VAR34[VAR12].VAR35 = VAR36;
    }
    for (; VAR12 < VAR32; VAR12++)
    {
        VAR9->VAR34[VAR12].VAR35 = VAR37;
    }
    VAR13 = VAR30;
    VAR13 = VAR38;
    for (; VAR12 < VAR13; VAR12++)
    {
        VAR9->VAR34[VAR12].VAR35 = VAR39;
    }
    for (; VAR12 < VAR28; VAR12++)
    {
        VAR9->VAR34[VAR12].VAR35 = VAR40;
    }
    for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        VAR9->VAR41[VAR12].VAR6 = VAR6[VAR12];
    VAR9->VAR7 = VAR7;
    VAR9->VAR42 = 1;
    FUN9("", 0, 2, VAR43, VAR44, VAR9);
    FUN10(VAR45, VAR9);
    VAR9->VAR46 = VAR47;
    VAR9->VAR48 = VAR45;
    if (VAR4)
        *VAR4 = VAR9->VAR24;
    return FUN11(VAR49, VAR9, VAR9->VAR27);
}